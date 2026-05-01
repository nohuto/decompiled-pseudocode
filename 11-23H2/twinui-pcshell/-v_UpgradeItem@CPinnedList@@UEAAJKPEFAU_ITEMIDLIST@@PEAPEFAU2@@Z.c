/*
 * XREFs of ?v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x18075F9C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1803CC880 (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 *     ILExpungeRemovedHiddenIDs @ 0x1803CC93C (ILExpungeRemovedHiddenIDs.c)
 *     ?GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z @ 0x180755B34 (-GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z.c)
 *     ?SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z @ 0x18075B8E0 (-SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z.c)
 *     _CacheAppIDInIDList @ 0x18075CE50 (_CacheAppIDInIDList.c)
 */

__int64 __fastcall CPinnedList::v_UpgradeItem(
        CPinnedList *this,
        int a2,
        struct _ITEMIDLIST *a3,
        struct _ITEMIDLIST **a4)
{
  struct _ITEMIDLIST *v4; // rbx
  const struct _HIDDENITEMID *v6; // rax
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  struct _ITEMIDLIST *v9; // [rsp+28h] [rbp-20h] BYREF

  v4 = a3;
  v9 = a3;
  if ( a2 )
  {
    v6 = ILFindHiddenIDOn(a3, -1091633123);
    if ( v6 )
    {
      *((_DWORD *)v6 + 1) = -1091633152;
      ILExpungeRemovedHiddenIDs(v4);
    }
    if ( (int)GetPinSourceForPinnedItem(v4, (enum TaskbarPinningSource *)v8) < 0 )
    {
      SetPinSourceForPinnedItem(v4, &v9, 0);
      v4 = v9;
    }
  }
  return CacheAppIDInIDList(v4, a4);
}
