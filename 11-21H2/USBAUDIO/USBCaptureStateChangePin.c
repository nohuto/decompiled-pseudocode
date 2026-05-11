/*
 * XREFs of USBCaptureStateChangePin @ 0x1C0006D10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0001CA0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1C0001D78 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     USBCaptureWaitForWorkerComplete @ 0x1C00071C0 (USBCaptureWaitForWorkerComplete.c)
 *     USBHwDataPipeReset @ 0x1C0033508 (USBHwDataPipeReset.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C0034900 (USBHwSelectStreamingAudioInterface.c)
 *     USBType1SetSampleRate @ 0x1C003A3D0 (USBType1SetSampleRate.c)
 *     USBCaptureStartTransfers @ 0x1C003ACD4 (USBCaptureStartTransfers.c)
 */

__int64 __fastcall USBCaptureStateChangePin(PKSPIN Pin, int a2, __int64 a3)
{
  _QWORD *Context; // rdi
  int v4; // esi
  int started; // ebx
  __int64 v8; // r14
  __int64 v9; // r13
  char v10; // r15
  char v11; // dl
  int v12; // esi
  char v13; // dl
  __int64 v14; // r8
  char v15; // dl
  char v16; // dl
  KIRQL v17; // r12
  PKSGATE i; // rax
  KIRQL v19; // al
  int v20; // edi
  KIRQL v22; // al
  int v23; // [rsp+20h] [rbp-68h]

  Context = Pin->Context;
  v4 = a3;
  started = 0;
  v8 = Context[19];
  v9 = Context[18];
  v10 = 1;
  v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qdd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      a3,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v23,
      8u,
      0x16u,
      (__int64)&WPP_5fab551e02ac3a407362f7b09a9004fb_Traceguids);
  if ( a2 != v4 )
  {
    if ( !v4 )
    {
      v22 = KeAcquireSpinLockRaiseToDpc(Context + 14);
      *(_BYTE *)(v8 + 99) = 0;
      Context[10] = 0LL;
      Context[11] = 0LL;
      Context[12] = 0LL;
      KeReleaseSpinLock(Context + 14, v22);
      return 0;
    }
    v12 = v4 - 2;
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        started = USBHwSelectStreamingAudioInterface(Pin, *(_QWORD *)(v9 + 136), a3);
        if ( started >= 0 )
        {
          started = USBType1SetSampleRate(Pin, *((unsigned int *)Context + 26));
          if ( started < 0 )
          {
            v15 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
            LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v15 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_qd(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v15,
                v14,
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                v23,
                8u,
                0x18u,
                (__int64)&WPP_5fab551e02ac3a407362f7b09a9004fb_Traceguids);
            USBHwSelectStreamingAudioInterface(Pin, *(_QWORD *)(v9 + 144), v14);
          }
        }
        else
        {
          v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
          if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_qd(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v13,
              *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v23,
              8u,
              0x17u,
              (__int64)&WPP_5fab551e02ac3a407362f7b09a9004fb_Traceguids);
        }
        if ( !*((_BYTE *)Context + 47) && started >= 0 )
        {
          started = USBCaptureStartTransfers(Pin, 0LL);
          if ( started < 0 )
          {
            v16 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
            if ( v16 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_qd(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v16,
                *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                v23,
                8u,
                0x19u,
                (__int64)&WPP_5fab551e02ac3a407362f7b09a9004fb_Traceguids);
          }
        }
      }
    }
    else if ( a2 == 3 )
    {
      if ( !*((_BYTE *)Context + 47) )
      {
        KeWaitForSingleObject((PVOID)(v8 + 152), Executive, 0, 0, 0LL);
        v17 = KeAcquireSpinLockRaiseToDpc(Context + 14);
        *(_BYTE *)v8 = 0;
        *(_BYTE *)(v8 + 96) = 0;
        *((_BYTE *)Context + 45) = 0;
        if ( *(_BYTE *)(v8 + 97) )
        {
          for ( i = KsPinGetAndGate(Pin); i && _InterlockedExchangeAdd(&i->Count, 0xFFFFFFFF) == 1; i = i->NextGate )
            ;
          *(_BYTE *)(v8 + 97) = 0;
        }
        KeReleaseSpinLock(Context + 14, v17);
        USBCaptureWaitForWorkerComplete(Context, v8 + 248, v8 + 256);
        USBHwDataPipeReset(Pin);
        v19 = KeAcquireSpinLockRaiseToDpc(Context + 14);
        *(_QWORD *)(v8 + 128) = v8 + 120;
        *(_QWORD *)(v8 + 120) = v8 + 120;
        *(_QWORD *)(v8 + 144) = v8 + 136;
        *(_QWORD *)(v8 + 136) = v8 + 136;
        KeReleaseSpinLock(Context + 14, v19);
        KeReleaseMutex((PRKMUTEX)(v8 + 152), 0);
      }
      started = USBHwSelectStreamingAudioInterface(Pin, *(_QWORD *)(v9 + 144), a3);
    }
  }
  v20 = 0;
  if ( started != -1073741632 )
    v20 = started;
  if ( v20 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v10 = 0;
    }
    if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v10,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v23,
        8u,
        0x1Au,
        (__int64)&WPP_5fab551e02ac3a407362f7b09a9004fb_Traceguids);
  }
  return (unsigned int)v20;
}
