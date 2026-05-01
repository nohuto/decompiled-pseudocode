/*
 * XREFs of SHFullIDListFromFolderAndRelativeItem @ 0x18079B668
 * Callers:
 *     SimpleToRealIDListWithContext @ 0x18079B45C (SimpleToRealIDListWithContext.c)
 * Callees:
 *     SHGetIDListFromObject_0 @ 0x1801CAA2A (SHGetIDListFromObject_0.c)
 *     ILCombine_0 @ 0x1801CE77B (ILCombine_0.c)
 */

HRESULT __fastcall SHFullIDListFromFolderAndRelativeItem(IUnknown *a1, const ITEMIDLIST *a2, LPITEMIDLIST *a3)
{
  HRESULT result; // eax
  LPITEMIDLIST v6; // rax
  ITEMIDLIST *v7; // rcx
  LPITEMIDLIST v8; // rbx
  LPITEMIDLIST ppidl; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  result = SHGetIDListFromObject_0(a1, &ppidl);
  if ( result >= 0 )
  {
    v6 = ILCombine_0(ppidl, a2);
    v7 = ppidl;
    v8 = v6;
    *a3 = v6;
    ILFree(v7);
    return v8 == 0LL ? 0x8007000E : 0;
  }
  return result;
}
