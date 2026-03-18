/*
 * XREFs of RtlUnicodeStringPrintf @ 0x1C00178B4
 * Callers:
 *     ?FxLibraryCreateDevice@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C0016C4C (-FxLibraryCreateDevice@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ @ 0x1C0079560 (-SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C0017A08 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlWideCharArrayVPrintfWorker @ 0x1C0017B24 (RtlWideCharArrayVPrintfWorker.c)
 */

__int64 RtlUnicodeStringPrintf(_UNICODE_STRING *DestinationString, const wchar_t *pszFormat, ...)
{
  int v3; // edx
  char *v5; // [rsp+20h] [rbp-38h]
  unsigned int v6; // [rsp+28h] [rbp-30h]
  unsigned __int64 cchDest; // [rsp+30h] [rbp-28h] BYREF
  wchar_t *pszDest; // [rsp+38h] [rbp-20h] BYREF
  char *argList; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+80h] [rbp+28h] BYREF
  va_list va; // [rsp+80h] [rbp+28h]
  unsigned __int64 *v13; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, pszFormat);
  va_start(va, pszFormat);
  v11 = va_arg(va1, _QWORD);
  v13 = va_arg(va1, unsigned __int64 *);
  pszDest = 0LL;
  cchDest = 0LL;
  v3 = RtlUnicodeStringValidateDestWorker(DestinationString, &pszDest, &cchDest, v13, (const unsigned __int64)v5, v6);
  if ( v3 >= 0 )
  {
    argList = 0LL;
    v3 = RtlWideCharArrayVPrintfWorker(pszDest, cchDest, (unsigned __int64 *)&argList, pszFormat, va);
    DestinationString->Length = 2 * (_WORD)argList;
  }
  return (unsigned int)v3;
}
