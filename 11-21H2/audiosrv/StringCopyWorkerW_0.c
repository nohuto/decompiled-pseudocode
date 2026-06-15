/*
 * XREFs of StringCopyWorkerW_0 @ 0x18004CB80
 * Callers:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18004CAA4 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCopyWorkerW_0(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  size_t v5; // r8
  HRESULT v6; // r10d
  __int64 v7; // rax
  signed __int64 v8; // r9
  wchar_t v9; // dx

  v5 = cchDest;
  v6 = 0;
  if ( cchDest )
  {
    v7 = 2147483646LL;
    v8 = (char *)pszSrc - (char *)pszDest;
    while ( v7 )
    {
      v9 = *(STRSAFE_LPWSTR)((char *)pszDest + v8);
      if ( !v9 )
      {
        if ( !v5 )
          goto LABEL_6;
        break;
      }
      *pszDest = v9;
      --v7;
      ++pszDest;
      if ( !--v5 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    --pszDest;
    v6 = -2147024774;
  }
  *pszDest = 0;
  return v6;
}
