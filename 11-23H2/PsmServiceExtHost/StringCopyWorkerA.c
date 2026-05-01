/*
 * XREFs of StringCopyWorkerA @ 0x18004D118
 * Callers:
 *     ?GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x1800771D4 (-GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCopyWorkerA(
        STRSAFE_LPSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZCH pszSrc,
        size_t cchToCopy)
{
  STRSAFE_LPSTR v5; // r8
  __int64 v6; // rax
  signed __int64 v7; // r9
  char v8; // cl
  STRSAFE_LPSTR v9; // rcx
  HRESULT result; // eax

  v5 = pszDest;
  if ( cchDest )
  {
    v6 = 2147483646LL;
    v7 = pszSrc - pszDest;
    do
    {
      if ( !v6 )
        break;
      v8 = v5[v7];
      if ( !v8 )
        break;
      *v5 = v8;
      --v6;
      ++v5;
      --cchDest;
    }
    while ( cchDest );
  }
  v9 = v5 - 1;
  result = cchDest == 0 ? 0x8007007A : 0;
  if ( cchDest )
    v9 = v5;
  *v9 = 0;
  return result;
}
