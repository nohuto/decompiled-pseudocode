/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF__guid_d @ 0x1C000243C
 * Callers:
 *     PropertyGetBoolean @ 0x1C002E630 (PropertyGetBoolean.c)
 *     PropertyGetDbLevel @ 0x1C002ECF0 (PropertyGetDbLevel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF__guid_d(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned __int16 a7,
        int a8,
        __int64 a9,
        ...)
{
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va, a9);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, __int64, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_ec316f5a3b2f32ff42433c904743c1e5_Traceguids,
               a7,
               a9,
               16LL,
               va,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v12) = a7;
    return WppAutoLogTrace(a4, 0LL, 10LL, &WPP_ec316f5a3b2f32ff42433c904743c1e5_Traceguids, v12, a9);
  }
  return result;
}
