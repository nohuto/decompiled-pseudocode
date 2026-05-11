/*
 * XREFs of USBCaptureChangePowerState @ 0x1C00060B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0001CA0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     USBHwDataPipeReset @ 0x1C0033508 (USBHwDataPipeReset.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C0034900 (USBHwSelectStreamingAudioInterface.c)
 *     USBType1SetSampleRate @ 0x1C003A3D0 (USBType1SetSampleRate.c)
 *     USBCaptureStartTransfers @ 0x1C003ACD4 (USBCaptureStartTransfers.c)
 */

__int64 __fastcall USBCaptureChangePowerState(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbp
  int started; // ebx
  __int64 v7; // r15
  char v8; // di
  char v9; // dl
  KIRQL v10; // al
  __int64 v11; // r8
  PDEVICE_OBJECT v12; // rcx
  char v13; // r8
  unsigned __int16 v14; // ax
  _QWORD *v15; // rcx
  int v17; // [rsp+20h] [rbp-48h]

  v3 = *(_QWORD *)(a1 + 16);
  started = -1073741584;
  v7 = *(_QWORD *)(v3 + 144);
  v8 = 1;
  v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      a3,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v17,
      8u,
      0x1Cu,
      (__int64)&WPP_5fab551e02ac3a407362f7b09a9004fb_Traceguids);
  if ( a2 != 1 )
  {
    if ( (unsigned int)(a2 - 2) <= 2 )
    {
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 112));
      *(_BYTE *)(v3 + 45) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 112), v10);
      started = USBHwDataPipeReset(a1);
      if ( started >= 0 )
        return (unsigned int)USBHwSelectStreamingAudioInterface(a1, *(_QWORD *)(v7 + 144), v11);
    }
    return (unsigned int)started;
  }
  if ( *(_DWORD *)(a1 + 120) != 3 )
    return 0;
  started = USBHwSelectStreamingAudioInterface(a1, *(_QWORD *)(v7 + 136), a3);
  if ( started >= 0 )
  {
    started = USBType1SetSampleRate(a1, *(unsigned int *)(v3 + 104));
    if ( started >= 0 )
    {
      v15 = *(_QWORD **)(v3 + 152);
      v15[18] = v15 + 17;
      v15[17] = v15 + 17;
      v15[16] = v15 + 15;
      v15[15] = v15 + 15;
      *(_BYTE *)(v3 + 45) = 1;
      started = USBCaptureStartTransfers(a1, 0LL);
      if ( started < 0 )
      {
        v12 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v8 = 0;
        }
        v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v14 = 31;
          goto LABEL_38;
        }
      }
    }
    else
    {
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v8 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v14 = 30;
        goto LABEL_38;
      }
    }
  }
  else
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v14 = 29;
LABEL_38:
      WPP_RECORDER_AND_TRACE_SF_qd(
        (__int64)v12->AttachedDevice,
        v8,
        v13,
        (__int64)v12->DeviceExtension,
        v17,
        8u,
        v14,
        (__int64)&WPP_5fab551e02ac3a407362f7b09a9004fb_Traceguids);
    }
  }
  return (unsigned int)started;
}
