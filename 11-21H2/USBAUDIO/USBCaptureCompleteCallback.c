/*
 * XREFs of USBCaptureCompleteCallback @ 0x1C0006350
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1C0007264 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 */

__int64 __fastcall USBCaptureCompleteCallback(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KSPIN *v3; // r13
  int *v5; // rsi
  PVOID Context; // rbp
  __int64 v8; // rdi
  int v9; // edx
  bool v10; // r15
  ULONG *v11; // r8
  __int64 v12; // rax
  char v13; // dl
  char v14; // r8
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int *v17; // rcx
  _QWORD *v18; // rcx
  PKSGATE i; // rax
  char v20; // dl
  char v21; // r8
  struct _IO_WORKITEM *v22; // rcx
  int v24; // [rsp+20h] [rbp-58h]
  KIRQL NewIrql; // [rsp+88h] [rbp+10h]

  v3 = (struct _KSPIN *)a3[5];
  v5 = (int *)a3[3];
  Context = v3->Context;
  v8 = *((_QWORD *)Context + 19);
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
  v10 = _InterlockedAdd((volatile signed __int32 *)Context + 14, 0xFFFFFFFF) == 0;
  v11 = &WPP_RECORDER_INITIALIZED;
  if ( *(int *)(a2 + 48) < 0 || v5[1] < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (LOBYTE(v11) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v11) = 0;
    }
    if ( (_BYTE)v9 || (_BYTE)v11 )
      WPP_RECORDER_AND_TRACE_SF_dD(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        (_DWORD)v11,
        WPP_GLOBAL_Control->DeviceExtension);
  }
  if ( v10 )
  {
    v12 = *((_QWORD *)Context + 19);
    if ( !*(_BYTE *)(v12 + 12) )
    {
      *(_DWORD *)(v12 + 24) = 0;
      *(_QWORD *)(v12 + 32) = 0LL;
      *(_DWORD *)(v12 + 40) = 0;
      *(_QWORD *)(v12 + 48) = 0LL;
      *(_QWORD *)(v12 + 16) = 0LL;
    }
    KeSetEvent((PRKEVENT)Context + 5, 0, 0);
    if ( !*(_BYTE *)(v8 + 96) )
      goto LABEL_58;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v13 = 0;
    }
    if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v14 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v14 = 0;
    }
    if ( v13 || v14 )
      WPP_RECORDER_AND_TRACE_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v14,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v24,
        4u,
        0xDu,
        (__int64)&WPP_5fab551e02ac3a407362f7b09a9004fb_Traceguids);
  }
  if ( *(_BYTE *)(v8 + 96) && !*(_BYTE *)v8 )
  {
    v15 = (unsigned int)v5[1] >> 31;
    *(_BYTE *)v8 = v5[1] < 0;
    if ( !(_BYTE)v15 )
    {
      *((_BYTE *)Context + 45) = 1;
      v16 = 0;
      *(_DWORD *)(v8 + 104) = v5[33] + v5[32];
      if ( v5[33] )
      {
        v17 = (unsigned int *)(v5 + 36);
        do
        {
          if ( (v17[1] & 0x80000000) == 0 )
            *((_QWORD *)Context + 11) += *v17;
          ++v16;
          v17 += 3;
        }
        while ( v16 < v5[33] );
      }
      v18 = *(_QWORD **)(v8 + 144);
      if ( *v18 != v8 + 136 )
        __fastfail(3u);
      *a3 = v8 + 136;
      a3[1] = v18;
      *v18 = a3;
      *(_QWORD *)(v8 + 144) = a3;
      if ( !*(_BYTE *)(v8 + 97) )
      {
        *(_BYTE *)(v8 + 97) = 1;
        for ( i = KsPinGetAndGate(v3); i && _InterlockedIncrement(&i->Count) == 1; i = i->NextGate )
          ;
        KsPinAttemptProcessing(v3, 1u);
      }
    }
    if ( v10 )
    {
      *(_BYTE *)v8 = 1;
    }
    else if ( !*(_BYTE *)v8 )
    {
      goto LABEL_58;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v20 = 0;
    }
    if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v21 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v21 = 0;
    }
    if ( v20 || v21 )
      WPP_RECORDER_AND_TRACE_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v20,
        v21,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v24,
        4u,
        0xFu,
        (__int64)&WPP_5fab551e02ac3a407362f7b09a9004fb_Traceguids);
    *((_BYTE *)Context + 45) = 0;
    *(_BYTE *)(v8 + 99) = 1;
    if ( !*(_BYTE *)(v8 + 208) )
    {
      v22 = *(struct _IO_WORKITEM **)(v8 + 240);
      *(_BYTE *)(v8 + 208) = 1;
      IoQueueWorkItem(v22, USBCaptureResetWorker, CriticalWorkQueue, v3);
    }
  }
LABEL_58:
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, NewIrql);
  return 3221225494LL;
}
