/*
 * XREFs of ?StringCchCatW@@YGJPA_WIPB_W@Z @ 0x100021E9
 * Callers:
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AAEJPB_W_N_K@Z @ 0x10003513 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AAEJPB_W_N_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CGJPB_W_NPA_KPA_N@Z @ 0x100036DA (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CGJPB_W_NPA_KPA_N@Z.c)
 * Callees:
 *     StringCopyWorkerW @ 0x10002293 (StringCopyWorkerW.c)
 */

HRESULT __userpurge StringCchCatW@<eax>(_WORD *a1@<ecx>, wchar_t *cchDest, unsigned int a3, const wchar_t *a4)
{
  int v5; // ecx
  _WORD *v6; // eax
  HRESULT result; // eax
  const wchar_t *v8; // [esp+0h] [ebp-8h]
  size_t v9; // [esp+4h] [ebp-4h]

  v5 = 260;
  v6 = a1;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  result = v5 != 0 ? 0 : -2147024809;
  if ( v5 )
    return StringCopyWorkerW((STRSAFE_LPWSTR)v5, (size_t)cchDest, (size_t *)v5, v8, v9);
  return result;
}
