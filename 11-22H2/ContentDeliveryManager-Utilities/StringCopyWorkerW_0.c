/*
 * XREFs of StringCopyWorkerW_0 @ 0x1800B6818
 * Callers:
 *     ?WindowsTipContentPublished@PublishWindowsTipService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800B9D6C (-WindowsTipContentPublished@PublishWindowsTipService@Actions@CreativeFramework@@AEAAXXZ.c)
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
  signed __int64 v5; // r9
  STRSAFE_LPWSTR v6; // rdx
  __int64 v7; // r8
  wchar_t v8; // ax
  STRSAFE_LPWSTR v9; // rcx
  HRESULT result; // eax

  v5 = (char *)pszSrc - (char *)pszDest;
  v6 = pszDest;
  v7 = 256LL;
  do
  {
    if ( v7 == -2147483390 )
      break;
    v8 = *(STRSAFE_LPWSTR)((char *)v6 + v5);
    if ( !v8 )
      break;
    *v6++ = v8;
    --v7;
  }
  while ( v7 );
  v9 = v6 - 1;
  result = v7 == 0 ? 0x8007007A : 0;
  if ( v7 )
    v9 = v6;
  *v9 = 0;
  return result;
}
