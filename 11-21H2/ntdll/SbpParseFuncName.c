/*
 * XREFs of SbpParseFuncName @ 0x180125738
 * Callers:
 *     SbpResolveBasedOnName @ 0x1801257CC (SbpResolveBasedOnName.c)
 * Callees:
 *     StringCchCopyW @ 0x1800E94DC (StringCchCopyW.c)
 *     StringCchCopyNW @ 0x180125888 (StringCchCopyNW.c)
 */

__int64 __fastcall SbpParseFuncName(wchar_t *pszSrc, STRSAFE_LPWSTR pszDest, __int64 a3, wchar_t *a4)
{
  wchar_t v4; // ax
  STRSAFE_PCNZWCH v7; // rbx
  unsigned int v8; // r11d

  v4 = *pszSrc;
  v7 = pszSrc;
  v8 = 0;
  while ( v4 )
  {
    if ( v4 == 33 )
    {
      if ( StringCchCopyNW(pszDest, (size_t)pszDest, pszSrc, v7 - pszSrc) >= 0
        && StringCchCopyW(a4, 0x400uLL, v7 + 1) >= 0 )
      {
        return 1;
      }
      break;
    }
    v4 = *++v7;
  }
  if ( pszDest )
    *pszDest = v8;
  if ( a4 )
    *a4 = v8;
  return v8;
}
