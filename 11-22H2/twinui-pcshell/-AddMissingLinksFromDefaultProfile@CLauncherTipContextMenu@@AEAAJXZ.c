/*
 * XREFs of ?AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806CC2AC
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806DE4E4 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x180098A8C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x1800BD3E0 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SafeRelease@UIShellItem@@@@YAXPEAPEAUIShellItem@@@Z @ 0x1806C9820 (--$SafeRelease@UIShellItem@@@@YAXPEAPEAUIShellItem@@@Z.c)
 *     ??0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z @ 0x1806CB808 (--0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z.c)
 *     ?Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z @ 0x1806CDD00 (-Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z.c)
 *     ?_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z @ 0x1806CF3C4 (-_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z.c)
 *     ?ensure_data@?$tip_test@U_tip_WinXMenuEnumerationTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_WinXMenuEnumerationTest@@@details@tip@@@std@@XZ @ 0x1806DFCB8 (-ensure_data@-$tip_test@U_tip_WinXMenuEnumerationTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CLauncherTipContextMenu::AddMissingLinksFromDefaultProfile(CLauncherTipContextMenu *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  HRESULT v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // esi
  HRESULT v8; // eax
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  std::_Ref_count_base *v15; // [rsp+38h] [rbp-28h]
  char *v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct IShellItem2 *v20; // [rsp+80h] [rbp+20h] BYREF
  struct IShellItem *ppv; // [rsp+88h] [rbp+28h] BYREF
  IShellItem *psiParent; // [rsp+90h] [rbp+30h] BYREF

  if ( *((_QWORD *)this + 45) != *((_QWORD *)this + 46) )
  {
    v2 = (_QWORD *)tip::tip_test<_tip_WinXMenuEnumerationTest>::ensure_data((char *)this + 408);
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v14,
      v2);
    v3 = v14;
    tip::details::test_common_data<0>::begin_update(v14 + 8);
    v4 = v3 + 184;
    if ( !v3 )
      v4 = 8LL;
    *(_BYTE *)v4 = 1;
    if ( v3 )
    {
      tip::details::test_common_data<0>::end_update(v3 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v14);
    }
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    psiParent = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&psiParent);
    v5 = SHGetKnownFolderItem(
           &FOLDERID_UserProfiles,
           KF_FLAG_DEFAULT,
           0LL,
           &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
           (void **)&psiParent);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E1,
        (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
        (const char *)(unsigned int)v5);
LABEL_25:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&psiParent);
      return v6;
    }
    v7 = 0;
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
    v8 = SHCreateItemFromRelativeName(
           psiParent,
           L"Default\\AppData\\Local\\Microsoft\\Windows\\WinX",
           0LL,
           &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
           (void **)&ppv);
    v6 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E4,
        (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
        (const char *)(unsigned int)v8);
LABEL_24:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
      goto LABEL_25;
    }
    CShallowContainerIterator::CShallowContainerIterator((CShallowContainerIterator *)&v16, ppv, 32);
    v6 = (unsigned int)v16;
    if ( (int)v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E7,
        (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
        (const char *)(unsigned int)v16);
LABEL_21:
      v11 = v18;
      v18 = 0LL;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      SafeRelease<IShellItem>(&v17);
      goto LABEL_24;
    }
    v20 = 0LL;
    while ( 1 )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
      if ( !CShallowContainerIterator::Next((CShallowContainerIterator *)&v16, &v20) )
        break;
      v9 = CLauncherTipContextMenu::_AddFolderLinksToCommands(this, v20, 1, v7);
      v6 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3EC,
          (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
          (const char *)(unsigned int)v9);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
        goto LABEL_21;
      }
      v10 = v7 + 1;
      if ( v7 >= (unsigned __int64)(((__int64)(*((_QWORD *)this + 49) - *((_QWORD *)this + 48)) >> 2) - 1) )
        v10 = v7;
      v7 = v10;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
    v13 = v18;
    v18 = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    SafeRelease<IShellItem>(&v17);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&psiParent);
  }
  return 0LL;
}
