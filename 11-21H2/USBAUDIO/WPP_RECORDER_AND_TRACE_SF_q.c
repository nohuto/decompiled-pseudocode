/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0001A94
 * Callers:
 *     DeviceCreate @ 0x1C0001060 (DeviceCreate.c)
 *     DeviceRemove @ 0x1C0001420 (DeviceRemove.c)
 *     USBCaptureProcessPin @ 0x1C00066A0 (USBCaptureProcessPin.c)
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000ED34 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     DeviceStart @ 0x1C0028270 (DeviceStart.c)
 *     DeviceStop @ 0x1C0028840 (DeviceStop.c)
 *     DeviceSurpriseRemoval @ 0x1C0028A60 (DeviceSurpriseRemoval.c)
 *     PinClose @ 0x1C002AD60 (PinClose.c)
 *     PinCreate @ 0x1C002AE40 (PinCreate.c)
 *     PinProcess @ 0x1C002B890 (PinProcess.c)
 *     USBType1RenderClosePin @ 0x1C003A040 (USBType1RenderClosePin.c)
 *     USBType1RenderCreatePin @ 0x1C003A120 (USBType1RenderCreatePin.c)
 *     USBType1SurpriseRemove @ 0x1C003A490 (USBType1SurpriseRemove.c)
 *     USBCaptureClosePin @ 0x1C003A530 (USBCaptureClosePin.c)
 *     USBCaptureCreatePin @ 0x1C003A8B0 (USBCaptureCreatePin.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_q(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+90h] [rbp+48h] BYREF

  va_start(va, a8);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               a8,
               a7,
               va,
               8LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return WppAutoLogTrace(a4, 0LL, a6, a8, v11, va);
  }
  return result;
}
