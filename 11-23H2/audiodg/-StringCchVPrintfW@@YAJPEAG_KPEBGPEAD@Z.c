/*
 * XREFs of ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x14004E5C4
 * Callers:
 *     ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x14004D0B4 (-LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x14005CD50 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x140014E3C (StringVPrintfWorkerW.c)
 */

HRESULT __fastcall StringCchVPrintfW(unsigned __int16 *a1, size_t a2, size_t *a3, va_list argList)
{
  HRESULT result; // eax

  if ( a2 - 1 <= 0x7FFFFFFE )
    return StringVPrintfWorkerW(a1, a2, a3, (STRSAFE_LPCWSTR)a3, argList);
  result = -2147024809;
  if ( a2 )
    *a1 = 0;
  return result;
}
