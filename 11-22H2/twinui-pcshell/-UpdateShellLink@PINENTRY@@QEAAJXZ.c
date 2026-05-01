/*
 * XREFs of ?UpdateShellLink@PINENTRY@@QEAAJXZ @ 0x18075CDB0
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180757410 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180758B20 (-ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x180759AA0 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18075A570 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SafeRelease@UIShellLinkW@@@@YAXPEAPEAUIShellLinkW@@@Z @ 0x180750F28 (--$SafeRelease@UIShellLinkW@@@@YAXPEAPEAUIShellLinkW@@@Z.c)
 *     ?SetLinkFlags@CPinnedList@@SAKPEAUIShellLinkW@@KK@Z @ 0x18075B820 (-SetLinkFlags@CPinnedList@@SAKPEAUIShellLinkW@@KK@Z.c)
 */

__int64 __fastcall PINENTRY::UpdateShellLink(PINENTRY *this)
{
  LPVOID *ppv; // rbx
  HRESULT Instance; // edi

  *((_DWORD *)this + 6) = 0;
  ppv = (LPVOID *)((char *)this + 8);
  SafeRelease<IShellLinkW>((__int64 *)this + 1);
  Instance = CoCreateInstance(&CLSID_ShellLink, 0LL, 3u, &GUID_000214f9_0000_0000_c000_000000000046, ppv);
  if ( Instance >= 0 )
  {
    CPinnedList::SetLinkFlags((struct IShellLinkW *)*ppv);
    Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)*ppv + 40LL))(*ppv, *(_QWORD *)this);
    if ( Instance < 0 )
    {
      *((_DWORD *)this + 6) = 0;
      SafeRelease<IShellLinkW>((__int64 *)ppv);
    }
  }
  return (unsigned int)Instance;
}
