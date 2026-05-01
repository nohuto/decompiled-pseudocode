/*
 * XREFs of ?FindPinEntryFromAppId@CPinList@@QEAAPEAVPINENTRY@@PEBG_NPEAH@Z @ 0x180754024
 * Callers:
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x180753EE0 (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     ?GetPinnedItemForAppID@CPinnedList@@UEAAJPEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x180755E60 (-GetPinnedItemForAppID@CPinnedList@@UEAAJPEBGPEAPEFAU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1803CC880 (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 *     DSA_GetItemPtr @ 0x18074A880 (DSA_GetItemPtr.c)
 *     ?ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z @ 0x180757064 (-ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z.c)
 */

const ITEMIDLIST **__fastcall CPinList::FindPinEntryFromAppId(HDSA *this, const unsigned __int16 *a2, char a3, int *a4)
{
  const ITEMIDLIST **v4; // rdi
  int v9; // esi
  const ITEMIDLIST **ItemPtr; // rbp
  BOOL v11; // ebx
  LPCWCH lpString1; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( *this )
  {
    v9 = *(_DWORD *)*this;
    while ( --v9 >= 0 )
    {
      ItemPtr = (const ITEMIDLIST **)DSA_GetItemPtr(*this, v9);
      if ( (unsigned int)ILGetHiddenStringAllocW(*ItemPtr, 3203334173LL, &lpString1) )
      {
        v11 = CompareStringOrdinal(lpString1, -1, a2, -1, 1) == 2;
        CoTaskMemFree((LPVOID)lpString1);
        if ( v11 )
        {
          if ( a4 )
            *a4 = v9;
          v4 = ItemPtr;
        }
      }
    }
  }
  if ( !a3 )
  {
    if ( v4 )
    {
      if ( ILFindHiddenIDOn(*v4, -1091633108) )
      {
        v4 = 0LL;
        if ( a4 )
          *a4 = -1;
      }
    }
  }
  return v4;
}
