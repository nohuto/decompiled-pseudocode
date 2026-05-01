/*
 * XREFs of ?SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z @ 0x1806A5620
 * Callers:
 *     PropVariantToIDList @ 0x1806AA490 (PropVariantToIDList.c)
 *     ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180752E1C (-CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180758B20 (-ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18075A570 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 *     ?Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z @ 0x18075AF70 (-Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SHILClone(const struct _ITEMIDLIST *a1, struct _ITEMIDLIST **a2)
{
  struct _ITEMIDLIST *v3; // rdx
  __int64 result; // rax

  v3 = 0LL;
  if ( a1 )
  {
    v3 = ILClone(a1);
    result = v3 == 0LL ? 0x8007000E : 0;
  }
  else
  {
    result = 2147942487LL;
  }
  *a2 = v3;
  return result;
}
