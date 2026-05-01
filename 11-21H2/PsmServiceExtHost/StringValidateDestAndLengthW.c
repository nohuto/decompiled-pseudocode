/*
 * XREFs of StringValidateDestAndLengthW @ 0x18004FEB8
 * Callers:
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18007DB40 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18008116C (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringValidateDestAndLengthW(
        STRSAFE_LPCWSTR pszDest,
        size_t cchDest,
        size_t *pcchDestLength,
        const size_t cchMax)
{
  __int64 v4; // rdx
  HRESULT result; // eax

  v4 = 260LL;
  do
  {
    if ( !*pszDest )
      break;
    ++pszDest;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0x80070057 : 0;
  if ( pcchDestLength )
  {
    if ( v4 )
      *pcchDestLength = 260 - v4;
    else
      *pcchDestLength = 0LL;
  }
  return result;
}
