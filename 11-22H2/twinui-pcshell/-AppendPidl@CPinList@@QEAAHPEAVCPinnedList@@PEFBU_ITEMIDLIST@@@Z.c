/*
 * XREFs of ?AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z @ 0x180751F60
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180757410 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180758E3C (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x180759AA0 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1803CC880 (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 *     _DSA_MaybeShrink @ 0x18074A604 (_DSA_MaybeShrink.c)
 *     DSA_InsertItem @ 0x18074A8A4 (DSA_InsertItem.c)
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x180753EE0 (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     ?_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z @ 0x18075DE24 (-_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z.c)
 */

__int64 __fastcall CPinList::AppendPidl(CPinList *this, struct CPinnedList *a2, const struct _ITEMIDLIST *a3)
{
  const ITEMIDLIST **PidlOrAppID; // rax
  int inserted; // edi
  const struct _ITEMIDLIST **v8; // rbx
  CPinList *v9; // rcx
  __int64 v10; // rbx
  int v11; // edx
  int v13; // [rsp+20h] [rbp-E0h] BYREF
  LPITEMIDLIST pitem; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v15; // [rsp+30h] [rbp-D0h]
  __int64 v16; // [rsp+40h] [rbp-C0h]
  WCHAR pszPath[264]; // [rsp+50h] [rbp-B0h] BYREF

  PidlOrAppID = (const ITEMIDLIST **)CPinList::FindPidlOrAppID(this, a3, 1, &v13);
  inserted = -1;
  v8 = PidlOrAppID;
  if ( PidlOrAppID && ILFindHiddenIDOn(*PidlOrAppID, -1091633108) )
  {
    memset_0(pszPath, 0, 0x208uLL);
    CPinList::_GetBackupShortcutToDelete(v9, a2, *v8, pszPath);
    v10 = *(_QWORD *)this;
    if ( v13 >= 0 )
    {
      v11 = *(_DWORD *)v10;
      if ( v13 < *(_DWORD *)v10 )
      {
        if ( v13 < v11 - 1 )
          memmove_0(
            (void *)(*(_QWORD *)(v10 + 8) + (unsigned int)(v13 * *(_DWORD *)(v10 + 20))),
            (const void *)(*(_QWORD *)(v10 + 8) + (unsigned int)(*(_DWORD *)(v10 + 20) * (v13 + 1))),
            (unsigned int)(*(_DWORD *)(v10 + 20) * (v11 - v13 - 1)));
        --*(_DWORD *)v10;
        DSA_MaybeShrink(v10);
      }
    }
    if ( pszPath[0] )
    {
      SHRemoveLocalizedName(pszPath);
      DeleteFileW(pszPath);
    }
  }
  pitem = ILClone(a3);
  v16 = 0LL;
  v15 = 0LL;
  if ( pitem )
  {
    inserted = DSA_InsertItem(*(HDSA *)this, 0x7FFFFFFF, &pitem);
    if ( inserted < 0 )
      ILFree(pitem);
  }
  return (unsigned int)inserted;
}
