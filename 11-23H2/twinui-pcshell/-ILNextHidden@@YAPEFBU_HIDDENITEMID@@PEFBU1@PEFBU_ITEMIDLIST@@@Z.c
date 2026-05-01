/*
 * XREFs of ?ILNextHidden@@YAPEFBU_HIDDENITEMID@@PEFBU1@PEFBU_ITEMIDLIST@@@Z @ 0x1803CC8E4
 * Callers:
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1803CC880 (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 *     ?CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180753208 (-CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18075A570 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 * Callees:
 *     <none>
 */

const struct _ITEMIDLIST *__fastcall ILNextHidden(const struct _HIDDENITEMID *a1, const struct _ITEMIDLIST *a2)
{
  const struct _ITEMIDLIST *v2; // r8
  unsigned __int16 *v3; // r9
  const struct _ITEMIDLIST *v4; // rcx

  v2 = 0LL;
  v3 = (unsigned __int16 *)((char *)a1 + 8);
  if ( (char *)a1 + 8 <= (char *)a2 )
  {
    v4 = (const struct _ITEMIDLIST *)((char *)a1 + *(unsigned __int16 *)a1);
    if ( v4 <= a2 )
    {
      v2 = v4;
      if ( v4 == a2
        || v4[2].mkid.abID > (BYTE *)a2
        || HIWORD(*(_DWORD *)((char *)&v4[1].mkid.cb + 1)) != 0xBEEF
        || (const struct _ITEMIDLIST *)((char *)v4 + v4->mkid.cb) > a2
        || v4 < (const struct _ITEMIDLIST *)v3 )
      {
        return 0LL;
      }
    }
  }
  return v2;
}
