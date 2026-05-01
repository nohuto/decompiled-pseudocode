/*
 * XREFs of ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x1801D8694
 * Callers:
 *     CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_ResumeCoro$1 @ 0x1801DA2F0 (CLauncherTipContextMenu--RunMigrationTasksAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetPropStoreForLink@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@AEAVCPropertyStoreHelper@@@Z @ 0x1801D9BDC (-GetPropStoreForLink@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@AEAVCPropertyStoreHelper@@@Z.c)
 *     ?RemoveIfObsoleteLink@CLauncherTipContextMenu@@AEAA_NPEAUIShellItem2@@K@Z @ 0x1801DA078 (-RemoveIfObsoleteLink@CLauncherTipContextMenu@@AEAA_NPEAUIShellItem2@@K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z @ 0x18023985E (-_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z.c)
 *     ??1CPropertyStoreHelper@@QEAA@XZ @ 0x18031E41C (--1CPropertyStoreHelper@@QEAA@XZ.c)
 *     ??0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z @ 0x1805D8230 (--0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z.c)
 *     ??1CShallowContainerIterator@@QEAA@XZ @ 0x1805D848C (--1CShallowContainerIterator@@QEAA@XZ.c)
 *     ?Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z @ 0x1805D97E0 (-Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CLauncherTipContextMenu::CleanupObsoleteLinks(CLauncherTipContextMenu *this)
{
  HRESULT v1; // eax
  unsigned int v2; // ebx
  HRESULT v3; // eax
  struct IShellItem2 *v4; // rbx
  CLauncherTipContextMenu *v5; // rcx
  CLauncherTipContextMenu *v6; // rcx
  CLauncherTipContextMenu *v7; // rcx
  struct IShellItem *ppv; // [rsp+30h] [rbp-19h] BYREF
  IShellItem *psiParent; // [rsp+38h] [rbp-11h] BYREF
  __int64 v11; // [rsp+40h] [rbp-9h] BYREF
  unsigned int v12[8]; // [rsp+48h] [rbp-1h] BYREF
  unsigned int v13[14]; // [rsp+68h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  CLauncherTipContextMenu *v15; // [rsp+B0h] [rbp+67h] BYREF
  unsigned int v16; // [rsp+B8h] [rbp+6Fh] BYREF
  struct IShellItem2 *v17; // [rsp+C0h] [rbp+77h] BYREF
  struct IShellItem *v18; // [rsp+C8h] [rbp+7Fh] BYREF

  v15 = this;
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
      CShallowContainerIterator::CShallowContainerIterator((CShallowContainerIterator *)v13, ppv, 0x20u);
      v2 = v13[0];
      if ( (v13[0] & 0x80000000) == 0 )
      {
        v18 = 0LL;
        while ( 1 )
        {
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v18);
          if ( !CShallowContainerIterator::Next((CShallowContainerIterator *)v13, (struct IShellItem2 **)&v18) )
          {
            v2 = 0;
            goto LABEL_20;
          }
          CShallowContainerIterator::CShallowContainerIterator((CShallowContainerIterator *)v12, v18, 0x40u);
          v2 = v12[0];
          if ( (v12[0] & 0x80000000) != 0 )
            break;
          v17 = 0LL;
          while ( 1 )
          {
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v17);
            if ( !CShallowContainerIterator::Next((CShallowContainerIterator *)v12, &v17) )
              break;
            v4 = v17;
            if ( ((int (__fastcall *)(struct IShellItem2 *, __int64, CLauncherTipContextMenu **))v17->lpVtbl->GetAttributes)(
                   v17,
                   0x10000LL,
                   &v15) >= 0
              && ((unsigned int)v15 & 0x10000) != 0 )
            {
              v11 = 0LL;
              if ( (int)CLauncherTipContextMenu::GetPropStoreForLink(v5, v4, (struct CPropertyStoreHelper *)&v11) >= 0
                && (int)CLauncherTipContextMenu::_CheckLinkHash(v6, (const struct CPropertyStoreHelper *)&v11, &v16) >= 0 )
              {
                CLauncherTipContextMenu::RemoveIfObsoleteLink(v7, v4, v16);
              }
              CPropertyStoreHelper::~CPropertyStoreHelper((CPropertyStoreHelper *)&v11);
            }
          }
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v17);
          CShallowContainerIterator::~CShallowContainerIterator((CShallowContainerIterator *)v12);
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1DB,
          (__int64)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
          (const char *)v12[0]);
        CShallowContainerIterator::~CShallowContainerIterator((CShallowContainerIterator *)v12);
LABEL_20:
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v18);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D5,
          (__int64)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
          (const char *)v13[0]);
      }
      CShallowContainerIterator::~CShallowContainerIterator((CShallowContainerIterator *)v13);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D1,
        (__int64)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
        (const char *)(unsigned int)v3);
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CE,
      (__int64)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
      (const char *)(unsigned int)v1);
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&psiParent);
  return v2;
}
