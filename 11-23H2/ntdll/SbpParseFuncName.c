/*
 * XREFs of SbpParseFuncName @ 0x180128614
 * Callers:
 *     SbpResolveBasedOnName @ 0x1801286BC (SbpResolveBasedOnName.c)
 * Callees:
 *     StringCchCopyW @ 0x1800E9710 (StringCchCopyW.c)
 *     StringCchCopyNW @ 0x180128778 (StringCchCopyNW.c)
 */

__int64 __fastcall SbpParseFuncName(wchar_t *pszSrc, STRSAFE_LPWSTR pszDest, __int64 a3, wchar_t *a4)
{
  wchar_t v4; // ax
  unsigned int v5; // r11d
  STRSAFE_PCNZWCH v8; // rbx
  wchar_t v10; // cx

  v4 = *pszSrc;
  v5 = 0;
  v8 = pszSrc;
  if ( *pszSrc )
  {
    v10 = *pszSrc;
    do
    {
      v4 = v10;
      if ( v10 == 33 )
        break;
      v4 = *++v8;
      v10 = *v8;
    }
    while ( *v8 );
  }
  if ( v4 == 33
    && StringCchCopyNW(pszDest, 0x21uLL, pszSrc, v8 - pszSrc) >= 0
    && StringCchCopyW(a4, 0x400uLL, v8 + 1) >= 0 )
  {
    return 1;
  }
  else
  {
    if ( pszDest )
      *pszDest = v5;
    if ( a4 )
      *a4 = v5;
  }
  return v5;
}
