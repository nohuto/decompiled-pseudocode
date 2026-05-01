/*
 * XREFs of ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806CC758
 * Callers:
 *     CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_ResumeCoro$1 @ 0x180258100 (CLauncherTipContextMenu--RunMigrationTasksAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z @ 0x1802EA428 (-_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z.c)
 *     ??$SafeRelease@UIShellItem@@@@YAXPEAPEAUIShellItem@@@Z @ 0x1806C9820 (--$SafeRelease@UIShellItem@@@@YAXPEAPEAUIShellItem@@@Z.c)
 *     ??0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z @ 0x1806CB808 (--0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z.c)
 *     ?GetPropStoreForLink@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@AEAVCPropertyStoreHelper@@@Z @ 0x1806CD53C (-GetPropStoreForLink@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@AEAVCPropertyStoreHelper@@@Z.c)
 *     ?Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z @ 0x1806CDD00 (-Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z.c)
 *     ?RemoveIfObsoleteLink@CLauncherTipContextMenu@@AEAA_NPEAUIShellItem2@@K@Z @ 0x1806CE3F4 (-RemoveIfObsoleteLink@CLauncherTipContextMenu@@AEAA_NPEAUIShellItem2@@K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712@@@details@wil@@QEAA_NXZ @ 0x1806DFB54 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_4046.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CLauncherTipContextMenu::CleanupObsoleteLinks(CLauncherTipContextMenu *this)
{
  HRESULT v1; // eax
  unsigned int v2; // ebx
  HRESULT v3; // eax
  struct IShellItem2 *v4; // rbx
  CLauncherTipContextMenu *v5; // rcx
  unsigned int v6; // edi
  int v7; // esi
  CLauncherTipContextMenu *v8; // rcx
  CLauncherTipContextMenu *v9; // rcx
  CLauncherTipContextMenu *v10; // rcx
  CLauncherTipContextMenu *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct IShellItem *v16; // [rsp+30h] [rbp-29h] BYREF
  struct IShellItem *ppv; // [rsp+38h] [rbp-21h] BYREF
  IShellItem *psiParent; // [rsp+40h] [rbp-19h] BYREF
  CLauncherTipContextMenu *v19; // [rsp+48h] [rbp-11h] BYREF
  char *v20; // [rsp+50h] [rbp-9h] BYREF
  __int64 v21; // [rsp+58h] [rbp-1h] BYREF
  __int64 v22; // [rsp+60h] [rbp+7h]
  char *v23; // [rsp+70h] [rbp+17h] BYREF
  __int64 v24; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v25; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  CLauncherTipContextMenu *v27; // [rsp+C0h] [rbp+67h] BYREF
  int v28; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v29; // [rsp+D0h] [rbp+77h] BYREF
  struct IShellItem2 *v30; // [rsp+D8h] [rbp+7Fh] BYREF

  v27 = this;
  psiParent = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&psiParent);
  v1 = SHGetKnownFolderItem(
         &FOLDERID_LocalAppData,
         KF_FLAG_DEFAULT,
         0LL,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         (void **)&psiParent);
  v2 = v1;
  if ( v1 >= 0 )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
    v3 = SHCreateItemFromRelativeName(
           psiParent,
           L"Microsoft\\Windows\\WinX",
           0LL,
           &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
           (void **)&ppv);
    v2 = v3;
    if ( v3 >= 0 )
    {
      CShallowContainerIterator::CShallowContainerIterator((CShallowContainerIterator *)&v23, ppv, 32);
      v2 = (unsigned int)v23;
      if ( (int)v23 >= 0 )
      {
        v16 = 0LL;
        while ( 1 )
        {
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
          if ( !CShallowContainerIterator::Next((CShallowContainerIterator *)&v23, (struct IShellItem2 **)&v16) )
          {
            v2 = 0;
            goto LABEL_34;
          }
          CShallowContainerIterator::CShallowContainerIterator((CShallowContainerIterator *)&v20, v16, 64);
          v2 = (unsigned int)v20;
          if ( (int)v20 < 0 )
            break;
          v30 = 0LL;
          while ( 1 )
          {
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v30);
            if ( !CShallowContainerIterator::Next((CShallowContainerIterator *)&v20, &v30) )
              break;
            v4 = v30;
            if ( ((int (__fastcall *)(struct IShellItem2 *, __int64, int *))v30->lpVtbl->GetAttributes)(
                   v30,
                   0x10000LL,
                   &v28) >= 0
              && (v28 & 0x10000) != 0 )
            {
              if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712>::GetImpl'::`2'::impl) )
              {
                v6 = 0;
                LODWORD(v27) = 0;
                v7 = -2147467259;
                v19 = 0LL;
                if ( (int)CLauncherTipContextMenu::GetPropStoreForLink(v5, v4, (struct CPropertyStoreHelper *)&v19) >= 0 )
                {
                  v7 = CLauncherTipContextMenu::_CheckLinkHash(
                         v8,
                         (const struct CPropertyStoreHelper *)&v19,
                         (unsigned int *)&v27);
                  v6 = (unsigned int)v27;
                }
                v9 = v19;
                if ( v19 )
                  (*(void (__fastcall **)(CLauncherTipContextMenu *))(*(_QWORD *)v19 + 16LL))(v19);
                if ( v7 >= 0 )
                  CLauncherTipContextMenu::RemoveIfObsoleteLink(v9, v4, v6);
              }
              else
              {
                v27 = 0LL;
                if ( (int)CLauncherTipContextMenu::GetPropStoreForLink(v5, v4, (struct CPropertyStoreHelper *)&v27) >= 0
                  && (int)CLauncherTipContextMenu::_CheckLinkHash(v10, (const struct CPropertyStoreHelper *)&v27, &v29) >= 0 )
                {
                  CLauncherTipContextMenu::RemoveIfObsoleteLink(v11, v4, v29);
                }
                if ( v27 )
                  (*(void (__fastcall **)(CLauncherTipContextMenu *))(*(_QWORD *)v27 + 16LL))(v27);
              }
            }
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v30);
          v12 = v22;
          v22 = 0LL;
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          SafeRelease<IShellItem>(&v21);
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E7,
          (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
          (const char *)(unsigned int)v20);
        v13 = v22;
        v22 = 0LL;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        SafeRelease<IShellItem>(&v21);
LABEL_34:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E1,
          (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
          (const char *)(unsigned int)v23);
      }
      v14 = v25;
      v25 = 0LL;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      SafeRelease<IShellItem>(&v24);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1DD,
        (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
        (const char *)(unsigned int)v3);
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DA,
      (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
      (const char *)(unsigned int)v1);
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&psiParent);
  return v2;
}
