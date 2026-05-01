/*
 * XREFs of StringCopyWorkerW @ 0x10002293
 * Callers:
 *     ?StringCchCatW@@YGJPA_WIPB_W@Z @ 0x100021E9 (-StringCchCatW@@YGJPA_WIPB_W@Z.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AAEJPB_W_N_K@Z @ 0x10003513 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AAEJPB_W_N_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CGJPB_W_NPA_KPA_N@Z @ 0x100036DA (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CGJPB_W_NPA_KPA_N@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCopyWorkerW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  int v5; // edx
  _WORD *v6; // ecx
  int v7; // esi
  size_t v8; // eax
  __int16 v9; // di

  if ( v5 )
  {
    v7 = 2147483646;
    v8 = cchDest - (_DWORD)v6;
    while ( v7 )
    {
      v9 = *(_WORD *)((char *)v6 + v8);
      if ( v9 )
      {
        *v6++ = v9;
        --v7;
        if ( --v5 )
          continue;
      }
      if ( v5 )
        break;
      goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    --v6;
  }
  *v6 = 0;
  return v5 != 0 ? 0 : -2147024774;
}
