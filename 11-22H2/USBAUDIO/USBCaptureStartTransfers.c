/*
 * XREFs of USBCaptureStartTransfers @ 0x1C0036F98
 * Callers:
 *     USBCaptureResetWorker @ 0x1C0004370 (USBCaptureResetWorker.c)
 *     USBCaptureStateChangePin @ 0x1C0004610 (USBCaptureStateChangePin.c)
 *     USBCaptureChangePowerState @ 0x1C000B0D0 (USBCaptureChangePowerState.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0005144 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     USBHwDataPipeReset @ 0x1C0031DF0 (USBHwDataPipeReset.c)
 *     USBCaptureSubmitRequest @ 0x1C0037B50 (USBCaptureSubmitRequest.c)
 */

__int64 __fastcall USBCaptureStartTransfers(__int64 a1, char a2)
{
  int v4; // edi
  __int64 v5; // r14
  unsigned int v6; // ebx
  char v7; // si
  int v8; // ebx
  int v9; // r8d
  int v10; // edx

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
    {
      v10 = 16;
      LOBYTE(v10) = v7;
      LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, v10, v9, WPP_GLOBAL_Control->DeviceExtension);
    }
  }
  return (unsigned int)v8;
}
