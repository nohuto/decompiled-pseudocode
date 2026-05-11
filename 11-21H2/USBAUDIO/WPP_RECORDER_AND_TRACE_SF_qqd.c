/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C0005C28
 * Callers:
 *     USBType1BuildIsochUrbRequest @ 0x1C0003EF0 (USBType1BuildIsochUrbRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_qqd(__int64 a1, char a2, char a3, __int64 a4, int a5, int a6, int a7, int a8, ...)
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
    result = pfnWppTraceMessage(
               a1,
               43LL,
               &WPP_1518cd3ab610380295f9683503cbea4d_Traceguids,
               18LL,
               (__int64 *)va,
               8LL,
               (__int64 *)va1,
               8LL,
               va2,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 18;
    return WppAutoLogTrace(a4, 0LL, 3LL, &WPP_1518cd3ab610380295f9683503cbea4d_Traceguids, v11, (__int64 *)va);
  }
  return result;
}
