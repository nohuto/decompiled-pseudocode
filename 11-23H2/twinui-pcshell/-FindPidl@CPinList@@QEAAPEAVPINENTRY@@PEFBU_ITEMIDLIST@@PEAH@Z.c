/*
 * XREFs of ?FindPidl@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@PEAH@Z @ 0x180753E4C
 * Callers:
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x180753EE0 (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180758B20 (-ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z.c)
 * Callees:
 *     DSA_GetItemPtr @ 0x18074A880 (DSA_GetItemPtr.c)
 *     ILIsEqualByPath @ 0x18079B5D8 (ILIsEqualByPath.c)
 */

LPCITEMIDLIST *__fastcall CPinList::FindPidl(HDSA *this, const struct _ITEMIDLIST *a2, int *a3)
{
  LPCITEMIDLIST *v3; // rdi
  int v7; // ebx
  LPCITEMIDLIST *ItemPtr; // r14

  v3 = 0LL;
  if ( *this )
  {
    v7 = *(_DWORD *)*this;
    while ( --v7 >= 0 )
    {
      ItemPtr = (LPCITEMIDLIST *)DSA_GetItemPtr(*this, v7);
      if ( ILIsEqual(*ItemPtr, a2) || (unsigned int)ILIsEqualByPath(*ItemPtr, a2) )
      {
        if ( a3 )
          *a3 = v7;
        v3 = ItemPtr;
      }
    }
  }
  return v3;
}
