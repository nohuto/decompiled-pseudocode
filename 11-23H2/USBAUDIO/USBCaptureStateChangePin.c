/*
 * XREFs of USBCaptureStateChangePin @ 0x1C0004610
 * Callers:
 *     <none>
 * Callees:
 *     KsGateTurnInputOff @ 0x1C0003F40 (KsGateTurnInputOff.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1C0004F74 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0005144 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     USBCaptureWaitForWorkerComplete @ 0x1C0009268 (USBCaptureWaitForWorkerComplete.c)
 *     USBHwDataPipeReset @ 0x1C0031DF0 (USBHwDataPipeReset.c)
 *     USBCaptureStartTransfers @ 0x1C0036F98 (USBCaptureStartTransfers.c)
 *     USBType1SetSampleRate @ 0x1C00381D0 (USBType1SetSampleRate.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C003850C (USBHwSelectStreamingAudioInterface.c)
 */

__int64 __fastcall USBCaptureStateChangePin(PKSPIN Pin, int a2, __int64 a3)
{
  _QWORD *Context; // rbp
  int v4; // ebx
  int v5; // r12d
  int started; // edi
  __int64 v8; // r14
  __int64 v9; // r13
  char v10; // r15
  void *v11; // r9
  int v12; // ebx
  int v13; // edx
  int v14; // edx
  __int64 v15; // r9
  int v16; // edx
  KIRQL v17; // r12
  struct _KSGATE *v18; // rax
  KIRQL v19; // al
  KIRQL v20; // al
  int v21; // ebx
  void *v22; // rdx

  Context = Pin->Context;
  v4 = a3;
  v5 = a2;
  started = 0;
  v8 = Context[19];
  v9 = Context[18];
  v10 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v11 = &WPP_5fab551e02ac3a407362f7b09a9004fb_Traceguids;
  LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qdd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  if ( v5 != v4 )
  {
    if ( v4 )
    {
      v12 = v4 - 2;
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          started = USBHwSelectStreamingAudioInterface(Pin, *(_QWORD *)(v9 + 136), a3, v11);
          if ( started >= 0 )
          {
            started = USBType1SetSampleRate(Pin, *((unsigned int *)Context + 26));
            if ( started < 0 )
            {
              LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
              LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( (_BYTE)v14 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_AND_TRACE_SF_qd(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v14,
                  a3,
                  WPP_GLOBAL_Control->DeviceExtension);
              USBHwSelectStreamingAudioInterface(Pin, *(_QWORD *)(v9 + 144), a3, v15);
            }
          }
          else
          {
            LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
            if ( (_BYTE)v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_qd(
                WPP_GLOBAL_Control->AttachedDevice,
                v13,
                a3,
                WPP_GLOBAL_Control->DeviceExtension);
            }
          }
          if ( !*((_BYTE *)Context + 47) && started >= 0 )
          {
            started = USBCaptureStartTransfers(Pin, 0LL);
            if ( started < 0 )
            {
              LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
              if ( (_BYTE)v16 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_qd(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v16,
                  a3,
                  WPP_GLOBAL_Control->DeviceExtension);
              }
            }
          }
        }
      }
      else if ( v5 == 3 )
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
            v18 = KsPinGetAndGate(Pin);
            KsGateTurnInputOff(v18);
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
        started = USBHwSelectStreamingAudioInterface(Pin, *(_QWORD *)(v9 + 144), a3, v11);
      }
    }
    else
    {
      v20 = KeAcquireSpinLockRaiseToDpc(Context + 14);
      *(_BYTE *)(v8 + 99) = 0;
      Context[10] = 0LL;
      Context[11] = 0LL;
      Context[12] = 0LL;
      KeReleaseSpinLock(Context + 14, v20);
    }
  }
  v21 = 0;
  if ( started != -1073741632 )
    v21 = started;
  if ( v21 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v10 = 0;
    }
    if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v22 = &WPP_5fab551e02ac3a407362f7b09a9004fb_Traceguids;
      LOBYTE(v22) = v10;
      LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qd(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v22,
        a3,
        WPP_GLOBAL_Control->DeviceExtension);
    }
  }
  return (unsigned int)v21;
}
