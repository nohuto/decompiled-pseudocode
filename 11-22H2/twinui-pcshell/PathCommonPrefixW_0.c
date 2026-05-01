/*
 * XREFs of PathCommonPrefixW_0 @ 0x1801C8515
 * Callers:
 *     EncodeRelativePath @ 0x180749C74 (EncodeRelativePath.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall PathCommonPrefixW_0(LPCWSTR pszFile1, LPCWSTR pszFile2, LPWSTR achPath)
{
  return PathCommonPrefixW(pszFile1, pszFile2, achPath);
}
