/*
 * XREFs of ?Destruct@PINENTRY@@QEAAXXZ @ 0x180753AEC
 * Callers:
 *     ?DestroyCallback@PINENTRY@@SAHPEAV1@PEAX@Z @ 0x180753AD0 (-DestroyCallback@PINENTRY@@SAHPEAV1@PEAX@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18075A570 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 * Callees:
 *     <none>
 */

void __fastcall PINENTRY::Destruct(PINENTRY *this)
{
  ILFree(*(LPITEMIDLIST *)this);
  *((_DWORD *)this + 6) = 0;
  SafeRelease<IShellLinkW>((__int64 *)this + 1);
}
