/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0001CA0
 * Callers:
 *     DeviceCreate @ 0x1C0001060 (DeviceCreate.c)
 *     USBType1ChangePowerState @ 0x1C0004640 (USBType1ChangePowerState.c)
 *     USBType1StateChangePin @ 0x1C0005490 (USBType1StateChangePin.c)
 *     USBCaptureChangePowerState @ 0x1C00060B0 (USBCaptureChangePowerState.c)
 *     USBCaptureResetWorker @ 0x1C0006A30 (USBCaptureResetWorker.c)
 *     USBCaptureStateChangePin @ 0x1C0006D10 (USBCaptureStateChangePin.c)
 *     DeviceStart @ 0x1C0028270 (DeviceStart.c)
 *     DeviceStop @ 0x1C0028840 (DeviceStop.c)
 *     PinCreate @ 0x1C002AE40 (PinCreate.c)
 *     PinGoToFullPowerState @ 0x1C002B440 (PinGoToFullPowerState.c)
 *     PinGoToLowPowerState @ 0x1C002B5C0 (PinGoToLowPowerState.c)
 *     PinSetDataFormat @ 0x1C002B9E0 (PinSetDataFormat.c)
 *     USBHwDataPipeReset @ 0x1C0033508 (USBHwDataPipeReset.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C0034900 (USBHwSelectStreamingAudioInterface.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C0034D38 (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBType1RenderCreatePin @ 0x1C003A120 (USBType1RenderCreatePin.c)
 *     USBCaptureCreatePin @ 0x1C003A8B0 (USBCaptureCreatePin.c)
 *     USBCaptureStartTransfers @ 0x1C003ACD4 (USBCaptureStartTransfers.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_qd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+A0h] [rbp+48h] BYREF
  va_list va; // [rsp+A0h] [rbp+48h]
  va_list va1; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               a8,
               a7,
               (__int64 *)va,
               8LL,
               va1,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return WppAutoLogTrace(a4, 0LL, a6, a8, v11, (__int64 *)va);
  }
  return result;
}
