/*
 * XREFs of ?SetThreadDescriptionHelper@@YAJPEAXPEBG@Z @ 0x18000B794
 * Callers:
 *     ?Start@CKstBase@@AEAAJPEBG@Z @ 0x18000F4EC (-Start@CKstBase@@AEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall SetThreadDescriptionHelper(HANDLE hThread, PCWSTR lpThreadDescription)
{
  return SetThreadDescription(hThread, lpThreadDescription);
}
