/*
 * XREFs of ?SetThreadDescriptionHelper@@YAJPEAXPEBG@Z @ 0x180005E0C
 * Callers:
 *     ?Start@CKstBase@@AEAAJPEBG@Z @ 0x18000912C (-Start@CKstBase@@AEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall SetThreadDescriptionHelper(HANDLE hThread, PCWSTR lpThreadDescription)
{
  return SetThreadDescription(hThread, lpThreadDescription);
}
