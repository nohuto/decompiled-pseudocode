/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_l @ 0x1C00019EC
 * Callers:
 *     DeviceStart @ 0x1C0028270 (DeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_l(__int64 a1, char a2, char a3, __int64 a4, int a5, int a6, int a7, int a8, ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+90h] [rbp+48h] BYREF

  va_start(va, a8);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids,
               20LL,
               va,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 20;
    return WppAutoLogTrace(a4, 0LL, 9LL, &WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids, v11, va);
  }
  return result;
}
