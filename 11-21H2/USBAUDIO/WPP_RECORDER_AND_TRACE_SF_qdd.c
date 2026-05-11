/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1C0001D78
 * Callers:
 *     USBType1StateChangePin @ 0x1C0005490 (USBType1StateChangePin.c)
 *     USBCaptureStateChangePin @ 0x1C0006D10 (USBCaptureStateChangePin.c)
 *     DeviceSetPowerState @ 0x1C0028130 (DeviceSetPowerState.c)
 *     USBCaptureCopyRequestToBuffer @ 0x1C003A63C (USBCaptureCopyRequestToBuffer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_qdd(
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
  int v11; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+B0h] [rbp+48h] BYREF
  va_list va; // [rsp+B0h] [rbp+48h]
  __int64 v14; // [rsp+B8h] [rbp+50h] BYREF
  va_list va1; // [rsp+B8h] [rbp+50h]
  va_list va2; // [rsp+C0h] [rbp+58h] BYREF

  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  if ( a2 )
    result = pfnWppTraceMessage(a1, 43LL, a8, a7, (__int64 *)va, 8LL, (__int64 *)va1, 4LL, va2, 4LL, 0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return WppAutoLogTrace(a4, 0LL, a6, a8, v11, (__int64 *)va);
  }
  return result;
}
