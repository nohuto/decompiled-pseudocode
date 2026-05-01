/*
 * XREFs of PathCommonPrefixW_0 @ 0x18018A2D5
 * Callers:
 *     EncodeRelativePath @ 0x1805F37E4 (EncodeRelativePath.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall PathCommonPrefixW_0(LPCWSTR pszFile1, LPCWSTR pszFile2, LPWSTR achPath)
{
  return PathCommonPrefixW(pszFile1, pszFile2, achPath);
}
