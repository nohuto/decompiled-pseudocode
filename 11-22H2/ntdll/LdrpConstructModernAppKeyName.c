/*
 * XREFs of LdrpConstructModernAppKeyName @ 0x1800DD1B0
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800DD9FC (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x18006E480 (RtlQueryPackageIdentity.c)
 *     RtlStringCbPrintfExW @ 0x18006E844 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpConstructModernAppKeyName(_WORD *a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v4; // [rsp+48h] [rbp-1B0h] BYREF
  _BYTE v5[144]; // [rsp+50h] [rbp-1A8h] BYREF
  _BYTE v6[256]; // [rsp+E0h] [rbp-118h] BYREF

  v3 = 132LL;
  v4 = 256LL;
  memset_thunk_772440563353939046(v6, 0, 0x100uLL);
  memset_thunk_772440563353939046(v5, 0, 0x84uLL);
  result = RtlQueryPackageIdentity(-4, (int)v6, (int)&v4, (int)v5, (__int64)&v3, 0LL);
  if ( (int)result >= 0 )
    return RtlStringCbPrintfExW(a1, 0x184uLL, 0LL, 0LL, 0, L"%s!%s", v6, v5, v3, v4);
  return result;
}
