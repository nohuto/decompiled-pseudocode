/*
 * XREFs of ILExpungeRemovedHiddenIDs @ 0x1803CC93C
 * Callers:
 *     ?SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z @ 0x18075B8E0 (-SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z.c)
 *     ?v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x18075F9C0 (-v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1803CC880 (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 */

void __fastcall ILExpungeRemovedHiddenIDs(const ITEMIDLIST *a1)
{
  LPITEMIDLIST i; // rdi
  const struct _HIDDENITEMID *v2; // rax
  __int64 v3; // rbx

  if ( a1 )
  {
    for ( i = ILFindLastID(a1); ; i->mkid.cb -= v3 )
    {
      v2 = ILFindHiddenIDOn(i, -1091633152);
      if ( !v2 )
        break;
      v3 = *(unsigned __int16 *)v2;
      memmove_0(v2, (char *)v2 + v3, (size_t)&i->mkid.abID[i->mkid.cb - ((_QWORD)v2 + v3)]);
    }
  }
}
