/*
 * XREFs of ?SetThreadDescriptionHelper@@YAJPEAXPEBG@Z @ 0x180007AB4
 * Callers:
 *     ?Start@CKstBase@@AEAAJPEBG@Z @ 0x18000ABCC (-Start@CKstBase@@AEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall SetThreadDescriptionHelper(HANDLE hThread, PCWSTR lpThreadDescription)
{
  return SetThreadDescription(hThread, lpThreadDescription);
}
