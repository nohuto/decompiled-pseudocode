/*
 * XREFs of SHBindToParent_0 @ 0x1801CE69C
 * Callers:
 *     SHGetUIObjectFromFullPIDL @ 0x18079A490 (SHGetUIObjectFromFullPIDL.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall SHBindToParent_0(LPCITEMIDLIST pidl, const IID *const riid, void **ppv, LPCITEMIDLIST *ppidlLast)
{
  return SHBindToParent(pidl, riid, ppv, ppidlLast);
}
