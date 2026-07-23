/*
 * XREFs of SbpResolveBasedOnName @ 0x18012723C
 * Callers:
 *     SbpUpdateCacheWithCurrentImpl @ 0x18002F5D0 (SbpUpdateCacheWithCurrentImpl.c)
 *     SbpUpdateCache @ 0x180070A4C (SbpUpdateCache.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001AEA0 (RtlInitUnicodeStringEx.c)
 *     LdrGetDllHandleEx @ 0x18002A3F0 (LdrGetDllHandleEx.c)
 *     LdrLoadDll @ 0x18002A8A0 (LdrLoadDll.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     SbpLookup @ 0x180127094 (SbpLookup.c)
 *     SbpParseFuncName @ 0x180127194 (SbpParseFuncName.c)
 */

__int64 __fastcall SbpResolveBasedOnName(wchar_t *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  PVOID DllHandle; // [rsp+30h] [rbp-A38h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-A30h] BYREF
  WCHAR SourceString[256]; // [rsp+50h] [rbp-A18h] BYREF
  wchar_t v8[1024]; // [rsp+250h] [rbp-818h] BYREF

  v3 = 0LL;
  if ( a1
    && (unsigned int)SbpParseFuncName(a1, SourceString, a3, v8)
    && RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
    && (LdrGetDllHandleEx(1u, (PWSTR)1, 0LL, &DestinationString, &DllHandle) >= 0
     || LdrLoadDll(0LL, 0LL, &DestinationString, &DllHandle) >= 0) )
  {
    return SbpLookup((__int64)DllHandle, v8);
  }
  return v3;
}
