/*
 * XREFs of EtwpGenerateFileName @ 0x18005F488
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x18005D0A4 (EtwpAddLogHeaderToLogFile.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x18000E9A0 (RtlCreateUnicodeString.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     StringCbPrintfW @ 0x18005F584 (StringCbPrintfW.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memcmp @ 0x180093310 (memcmp.c)
 *     wcschr @ 0x180095160 (wcschr.c)
 *     wcsrchr @ 0x1800953B0 (wcsrchr.c)
 *     wcsstr @ 0x180095440 (wcsstr.c)
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
