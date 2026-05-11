/*
 * XREFs of USBCaptureChangePowerState @ 0x1C000B0D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0005144 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     USBHwDataPipeReset @ 0x1C0031DF0 (USBHwDataPipeReset.c)
 *     USBCaptureStartTransfers @ 0x1C0036F98 (USBCaptureStartTransfers.c)
 *     USBType1SetSampleRate @ 0x1C00381D0 (USBType1SetSampleRate.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C003850C (USBHwSelectStreamingAudioInterface.c)
 */

__int64 __fastcall USBCaptureChangePowerState(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  int v5; // edi
  int started; // ebx
  __int64 v8; // r15
  char v9; // si
  int v10; // edi
  int v11; // edi
  KIRQL v12; // al
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r8d
  PDEVICE_OBJECT v16; // rcx
  _QWORD *v17; // rcx
  void *v18; // rdx

  v4 = *(_QWORD *)(a1 + 16);
  v5 = a2;
  started = -1073741584;
  v8 = *(_QWORD *)(v4 + 144);
  v9 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  v10 = v5 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 || (unsigned int)(v11 - 1) <= 1 )
    {
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 112));
      *(_BYTE *)(v4 + 45) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 112), v12);
      started = USBHwDataPipeReset(a1);
      if ( started >= 0 )
        return (unsigned int)USBHwSelectStreamingAudioInterface(a1, *(_QWORD *)(v8 + 144), v13, v14);
    }
    return (unsigned int)started;
  }
  if ( *(_DWORD *)(a1 + 120) != 3 )
    return 0;
  started = USBHwSelectStreamingAudioInterface(a1, *(_QWORD *)(v8 + 136), a3, a4);
  if ( started >= 0 )
  {
    started = USBType1SetSampleRate(a1, *(unsigned int *)(v4 + 104));
    if ( started >= 0 )
    {
      v17 = *(_QWORD **)(v4 + 152);
      v17[18] = v17 + 17;
      v17[17] = v17 + 17;
      v17[16] = v17 + 15;
      v17[15] = v17 + 15;
      *(_BYTE *)(v4 + 45) = 1;
      started = USBCaptureStartTransfers(a1, 0LL);
      if ( started < 0 )
      {
        v16 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v9 = 0;
        }
        LOBYTE(v15) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          goto LABEL_38;
      }
    }
    else
    {
      v16 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v9 = 0;
      }
      LOBYTE(v15) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
    }
  }
  else
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v9 = 0;
    }
    LOBYTE(v15) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
LABEL_38:
      v18 = &WPP_5fab551e02ac3a407362f7b09a9004fb_Traceguids;
      LOBYTE(v18) = v9;
      WPP_RECORDER_AND_TRACE_SF_qd(v16->AttachedDevice, (_DWORD)v18, v15, v16->DeviceExtension);
    }
  }
  return (unsigned int)started;
}
