/*
 * XREFs of ?RemoveFromList@CTaskbandPin@@UEAAJPEAUIShellItem@@@Z @ 0x18074EDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1801AAC38 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MarkAsTombstone@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1807591A0 (-MarkAsTombstone@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z.c)
 *     ?_GetRemovedGlobalChangeCount@CPinnedList@@IEAAKXZ @ 0x18075E11C (-_GetRemovedGlobalChangeCount@CPinnedList@@IEAAKXZ.c)
 *     ?s_GetDarwinLinkInfo@CPinnedList@@KAHPEAUIShellLinkW@@PEAHPEAGI@Z @ 0x18075F140 (-s_GetDarwinLinkInfo@CPinnedList@@KAHPEAUIShellLinkW@@PEAHPEAGI@Z.c)
 *     ?s_RemoveDarwinShortcut@CPinnedList@@KAJPEAUIPinnedList3@@PEBGW4PINNEDLISTMODIFYCALLER@@@Z @ 0x18075F2A4 (-s_RemoveDarwinShortcut@CPinnedList@@KAJPEAUIPinnedList3@@PEBGW4PINNEDLISTMODIFYCALLER@@@Z.c)
 */

__int64 __fastcall CTaskbandPin::RemoveFromList(CTaskbandPin *this, IUnknown *a2)
{
  HRESULT v4; // ebx
  CPinnedList *v5; // rcx
  int v6; // eax
  bool v7; // sf
  LPVOID v9; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-B0h] BYREF
  LPITEMIDLIST ppidl; // [rsp+58h] [rbp-A8h] BYREF
  struct IShellLinkW *v13; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID dwItem1; // [rsp+68h] [rbp-98h] BYREF
  int v15; // [rsp+70h] [rbp-90h]
  unsigned __int16 v16[264]; // [rsp+80h] [rbp-80h] BYREF

  if ( CoCreateInstance(&CLSID_StartMenuCacheAndAppResolver, 0LL, 1u, &GUID_de25675a_72de_44b4_9373_05170450c140, &ppv) >= 0 )
  {
    if ( (*(int (__fastcall **)(LPVOID, IUnknown *, LPVOID *))(*(_QWORD *)ppv + 24LL))(ppv, a2, &pv) >= 0 )
    {
      if ( CoCreateInstance(&CLSID_DestinationList, 0LL, 1u, &GUID_6332debf_87b5_4670_90c0_5e57b408a49e, &dwItem1) >= 0 )
      {
        (*(void (__fastcall **)(LPVOID, LPVOID))(*(_QWORD *)dwItem1 + 80LL))(dwItem1, pv);
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)dwItem1 + 16LL))(dwItem1);
      }
      if ( CoCreateInstance(&CLSID_AutomaticDestinationList, 0LL, 1u, &GUID_e9c5ef8d_fd41_4f72_ba87_eb03bad5817c, &v9) >= 0 )
      {
        if ( (*(int (__fastcall **)(LPVOID, LPVOID, _QWORD, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, pv, 0LL, 0LL) >= 0 )
          (*(void (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v9 + 104LL))(v9, 1LL);
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
      }
      CoTaskMemFree(pv);
    }
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  }
  v4 = SHGetIDListFromObject(a2, &ppidl);
  if ( v4 >= 0 )
  {
    v4 = CPinnedList::MarkAsTombstone((char *)this - 80, ppidl, 25LL);
    if ( v4 == -2147023728 )
      v4 = 1;
    ILFree(ppidl);
  }
  if ( ((int (__fastcall *)(IUnknown *, _QWORD, const GUID *, GUID *, struct IShellLinkW **))a2->lpVtbl[1].QueryInterface)(
         a2,
         0LL,
         &BHID_SFUIObject,
         &GUID_000214f9_0000_0000_c000_000000000046,
         &v13) >= 0 )
  {
    if ( CPinnedList::s_GetDarwinLinkInfo(v13, 0LL, v16, 0x104u) )
    {
      v4 = CPinnedList::s_RemoveDarwinShortcut(
             ((unsigned __int64)this - 88) & -(__int64)(this != (CTaskbandPin *)112),
             v16);
      if ( v4 == -2147023728 )
        v4 = 1;
    }
    ((void (__fastcall *)(struct IShellLinkW *))v13->lpVtbl->Release)(v13);
  }
  LODWORD(v9) = CPinnedList::_GetRemovedGlobalChangeCount(v5) + 1;
  v6 = _RegSetKeyValueWithSDDL(
         HKEY_LOCAL_MACHINE,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\StartPage",
         L"FavoritesRemovedChanges",
         4u,
         (BYTE *)&v9,
         4u);
  v7 = v6 < 0;
  if ( v6 > 0 )
    v7 = 1;
  if ( !v7 )
  {
    HIWORD(dwItem1) = 0;
    v15 = 0;
    *(_DWORD *)((char *)&dwItem1 + 2) = 14;
    LOWORD(dwItem1) = 10;
    SHChangeNotify(0x4000000, 0x3000u, &dwItem1, 0LL);
  }
  return (unsigned int)v4;
}
