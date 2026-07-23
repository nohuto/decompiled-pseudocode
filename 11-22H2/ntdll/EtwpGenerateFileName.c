/*
 * XREFs of EtwpGenerateFileName @ 0x180062318
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x18005FF34 (EtwpAddLogHeaderToLogFile.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000EB80 (RtlFreeUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x18000EBB0 (RtlCreateUnicodeString.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     StringCbPrintfW @ 0x180062414 (StringCbPrintfW.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memcmp @ 0x180092B10 (memcmp.c)
 *     wcschr @ 0x180094960 (wcschr.c)
 *     wcsrchr @ 0x180094BB0 (wcsrchr.c)
 *     wcsstr @ 0x180094C40 (wcsstr.c)
 */

ULONG __fastcall EtwpGenerateFileName(const wchar_t **a1, volatile signed __int32 *a2, _UNICODE_STRING *a3)
{
  wchar_t *v6; // rsi
  NTSTATUS v8; // ecx
  wchar_t pszDest[1024]; // [rsp+20h] [rbp-828h] BYREF

  v6 = wcschr(a1[1], 0x25u);
  if ( v6 && v6 == wcsrchr(a1[1], 0x25u) && wcsstr(a1[1], L"%d") )
  {
    if ( !StringCbPrintfW(pszDest, 0x800uLL, a1[1], (unsigned int)_InterlockedIncrement(a2))
      && memcmp(a1[1], pszDest, *(unsigned __int16 *)a1) )
    {
      RtlFreeUnicodeString(a3);
      RtlCreateUnicodeString(a3, pszDest);
      return 0;
    }
    v8 = -1073741776;
  }
  else
  {
    v8 = -1073741773;
  }
  return RtlNtStatusToDosError(v8);
}
