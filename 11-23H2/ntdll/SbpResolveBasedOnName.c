/*
 * XREFs of SbpResolveBasedOnName @ 0x1801286EC
 * Callers:
 *     SbpUpdateCacheWithCurrentImpl @ 0x18002F400 (SbpUpdateCacheWithCurrentImpl.c)
 *     SbpUpdateCache @ 0x180070CEC (SbpUpdateCache.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001ACC0 (RtlInitUnicodeStringEx.c)
 *     LdrGetDllHandleEx @ 0x18002A220 (LdrGetDllHandleEx.c)
 *     LdrLoadDll @ 0x18002A6D0 (LdrLoadDll.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     SbpLookup @ 0x180128544 (SbpLookup.c)
 *     SbpParseFuncName @ 0x180128644 (SbpParseFuncName.c)
 */

__int64 __fastcall SbpResolveBasedOnName(wchar_t *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp-A38h] BYREF
  _BYTE v6[24]; // [rsp+38h] [rbp-A30h] BYREF
  wchar_t pszDest[256]; // [rsp+50h] [rbp-A18h] BYREF
  wchar_t v8[1024]; // [rsp+250h] [rbp-818h] BYREF

  v3 = 0LL;
  if ( a1
    && (unsigned int)SbpParseFuncName(a1, pszDest, a3, v8)
    && (int)RtlInitUnicodeStringEx((__int64)v6, (__int64)pszDest) >= 0
    && ((int)LdrGetDllHandleEx(1, 1LL, 0LL, (__int64)v6, &v5) >= 0 || (int)LdrLoadDll(0LL, 0LL, (__int64)v6, &v5) >= 0) )
  {
    return SbpLookup(v5, v8);
  }
  return v3;
}
