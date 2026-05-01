/*
 * XREFs of ILCombine_0 @ 0x1801CE77B
 * Callers:
 *     SHFullIDListFromFolderAndRelativeItem @ 0x18079B668 (SHFullIDListFromFolderAndRelativeItem.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LPITEMIDLIST __stdcall ILCombine_0(LPCITEMIDLIST pidl1, LPCITEMIDLIST pidl2)
{
  return ILCombine(pidl1, pidl2);
}
