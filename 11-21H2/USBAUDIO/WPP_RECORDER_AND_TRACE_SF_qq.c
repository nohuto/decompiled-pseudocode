/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0001E74
 * Callers:
 *     DeviceRequestPowerUp @ 0x1C002806C (DeviceRequestPowerUp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_qq(__int64 a1, char a2, char a3, __int64 a4, int a5, int a6, int a7, int a8, ...)
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
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids,
               35LL,
               (__int64 *)va,
               8LL,
               va1,
               8LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 35;
    return WppAutoLogTrace(a4, 0LL, 2LL, &WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids, v11, (__int64 *)va);
  }
  return result;
}
