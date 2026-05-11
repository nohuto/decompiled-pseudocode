/*
 * XREFs of USBCaptureCompleteCallback @ 0x1C0003590
 * Callers:
 *     <none>
 * Callees:
 *     USBHwResetFrameTimestamps @ 0x1C0003D04 (USBHwResetFrameTimestamps.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C000956C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1C000B3A8 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 */

__int64 __fastcall USBCaptureCompleteCallback(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KSPIN *v3; // r15
  int *v5; // rdi
  PVOID Context; // rbp
  __int64 v8; // r14
  __int64 v9; // r8
  signed __int32 v10; // et0
  __int64 v11; // rdx
  bool v12; // r12
  unsigned int v13; // eax
  unsigned int *v14; // rcx
  _QWORD *v15; // rcx
  PKSGATE i; // rax
  bool v18; // r10
  bool v19; // zf
  struct _IO_WORKITEM *v20; // rcx
  KIRQL v21; // [rsp+88h] [rbp+10h]

  v3 = (struct _KSPIN *)a3[5];
  v5 = (int *)a3[3];
  Context = v3->Context;
  v8 = *((_QWORD *)Context + 19);
  v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
  v10 = _InterlockedAdd((volatile signed __int32 *)Context + 14, 0xFFFFFFFF);
  v11 = *(unsigned int *)(a2 + 48);
  v12 = v10 == 0;
  if ( (int)v11 < 0 || v5[1] < 0 )
  {
    v18 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v9) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( v18 || (_BYTE)v9 )
      WPP_RECORDER_AND_TRACE_SF_dD(WPP_GLOBAL_Control->AttachedDevice, v18, v9, WPP_GLOBAL_Control->DeviceExtension);
  }
  if ( v12 )
  {
    USBHwResetFrameTimestamps(Context, v11, v9, &WPP_GLOBAL_Control);
    KeSetEvent((PRKEVENT)Context + 5, 0, 0);
    if ( *(_BYTE *)(v8 + 96) )
    {
      LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      LOBYTE(v9) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType);
      if ( (_BYTE)v11 || (_BYTE)v9 )
        WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v11, v9, WPP_GLOBAL_Control->DeviceExtension);
    }
  }
  if ( *(_BYTE *)(v8 + 96) && !*(_BYTE *)v8 )
  {
    v13 = (unsigned int)v5[1] >> 31;
    *(_BYTE *)v8 = v5[1] < 0;
    if ( !(_BYTE)v13 )
    {
      *((_BYTE *)Context + 45) = 1;
      LODWORD(v11) = 0;
      *(_DWORD *)(v8 + 104) = v5[33] + v5[32];
      if ( v5[33] )
      {
        v14 = (unsigned int *)(v5 + 36);
        do
        {
          if ( (v14[1] & 0x80000000) == 0 )
            *((_QWORD *)Context + 11) += *v14;
          LODWORD(v11) = v11 + 1;
          v14 += 3;
        }
        while ( (unsigned int)v11 < v5[33] );
      }
      v15 = *(_QWORD **)(v8 + 144);
      if ( *v15 != v8 + 136 )
        __fastfail(3u);
      *a3 = v8 + 136;
      a3[1] = v15;
      *v15 = a3;
      *(_QWORD *)(v8 + 144) = a3;
      if ( !*(_BYTE *)(v8 + 97) )
      {
        *(_BYTE *)(v8 + 97) = 1;
        for ( i = KsPinGetAndGate(v3); i; i = i->NextGate )
        {
          if ( _InterlockedIncrement(&i->Count) != 1 )
            break;
        }
        KsPinAttemptProcessing(v3, 1u);
      }
    }
    if ( v12 )
    {
      *(_BYTE *)v8 = 1;
    }
    else if ( !*(_BYTE *)v8 )
    {
      goto LABEL_20;
    }
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v9) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( (_BYTE)v11 || (_BYTE)v9 )
      WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v11, v9, WPP_GLOBAL_Control->DeviceExtension);
    *((_BYTE *)Context + 45) = 0;
    v19 = *(_BYTE *)(v8 + 208) == 0;
    *(_BYTE *)(v8 + 99) = 1;
    if ( v19 )
    {
      v20 = *(struct _IO_WORKITEM **)(v8 + 240);
      *(_BYTE *)(v8 + 208) = 1;
      IoQueueWorkItem(v20, USBCaptureResetWorker, CriticalWorkQueue, v3);
    }
  }
LABEL_20:
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v21);
  return 3221225494LL;
}
