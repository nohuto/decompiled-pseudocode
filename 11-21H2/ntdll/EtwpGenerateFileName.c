/*
 * XREFs of EtwpGenerateFileName @ 0x18000ACA8
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x18000851C (EtwpAddLogHeaderToLogFile.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     StringCbPrintfW @ 0x18000ADA4 (StringCbPrintfW.c)
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x18004A9D0 (RtlCreateUnicodeString.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memcmp @ 0x180097B10 (memcmp.c)
 *     wcschr @ 0x1800998A0 (wcschr.c)
 *     wcsrchr @ 0x180099AE0 (wcsrchr.c)
 *     wcsstr @ 0x180099B70 (wcsstr.c)
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
