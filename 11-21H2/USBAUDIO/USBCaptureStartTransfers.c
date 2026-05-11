/*
 * XREFs of USBCaptureStartTransfers @ 0x1C003ACD4
 * Callers:
 *     USBCaptureChangePowerState @ 0x1C00060B0 (USBCaptureChangePowerState.c)
 *     USBCaptureResetWorker @ 0x1C0006A30 (USBCaptureResetWorker.c)
 *     USBCaptureStateChangePin @ 0x1C0006D10 (USBCaptureStateChangePin.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0001CA0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     USBHwDataPipeReset @ 0x1C0033508 (USBHwDataPipeReset.c)
 *     USBCaptureSubmitRequest @ 0x1C003AE24 (USBCaptureSubmitRequest.c)
 */

__int64 __fastcall USBCaptureStartTransfers(__int64 a1, char a2)
{
  int v4; // edi
  __int64 v5; // r14
  unsigned int v6; // ebx
  char v7; // si
  int v8; // ebx
  int v10; // [rsp+20h] [rbp-48h]

  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
  KeWaitForSingleObject((PVOID)(v5 + 152), Executive, 0, 0, 0LL);
  if ( a2 )
    v4 = USBHwDataPipeReset(a1);
  v6 = 0;
  v7 = 1;
  do
  {
    if ( v4 < 0 )
      break;
    v4 = USBCaptureSubmitRequest(v5 + 288 + 56LL * v6++);
    *(_BYTE *)(v5 + 96) = v4 >= 0;
  }
  while ( v6 < 0xC );
  v8 = 0;
  if ( v4 != 259 )
    v8 = v4;
  KeReleaseMutex((PRKMUTEX)(v5 + 152), 0);
  if ( v8 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v7,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v10,
        8u,
        0x10u,
        (__int64)&WPP_5fab551e02ac3a407362f7b09a9004fb_Traceguids);
  }
  return (unsigned int)v8;
}
