/*
 * XREFs of StringCchCopyW @ 0x1800E9710
 * Callers:
 *     EtwpAddInstanceIdToLogFileName @ 0x18005C480 (EtwpAddInstanceIdToLogFileName.c)
 *     WerEscalationLazyInit @ 0x1800E97F8 (WerEscalationLazyInit.c)
 *     SbpParseFuncName @ 0x180128614 (SbpParseFuncName.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCchCopyW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszSrc)
{
  size_t v3; // r9
  signed __int64 v4; // r10
  wchar_t v5; // ax
  STRSAFE_LPWSTR v6; // rax
  HRESULT result; // eax

  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    result = -2147024809;
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v3 = 2147483646 - cchDest;
    v4 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !(v3 + cchDest) )
        break;
      v5 = *(STRSAFE_LPWSTR)((char *)pszDest + v4);
      if ( !v5 )
        break;
      *pszDest++ = v5;
      --cchDest;
    }
    while ( cchDest );
    v6 = pszDest - 1;
    if ( cchDest )
      v6 = pszDest;
    *v6 = 0;
    return cchDest == 0 ? 0x8007007A : 0;
  }
  return result;
}
