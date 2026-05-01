/*
 * XREFs of ?AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ @ 0x1801D8390
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DB10C (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ @ 0x18019BCE0 (--1-$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ.c)
 *     ??C?$tip_test@U_tip_WinXMenuEnumerationTest@@@tip@@QEAA?AV?$test_data_control@U_tip_WinXMenuEnumerationTest@@@1@XZ @ 0x1801D78C4 (--C-$tip_test@U_tip_WinXMenuEnumerationTest@@@tip@@QEAA-AV-$test_data_control@U_tip_WinXMenuEnum.c)
 *     ?_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z @ 0x1801DA504 (-_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z.c)
 *     ??0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z @ 0x1805D8230 (--0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z.c)
 *     ??1CShallowContainerIterator@@QEAA@XZ @ 0x1805D848C (--1CShallowContainerIterator@@QEAA@XZ.c)
 *     ?Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z @ 0x1805D97E0 (-Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CLauncherTipContextMenu::AddMissingLinksFromDefaultProfile(CLauncherTipContextMenu *this)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  HRESULT v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // esi
  HRESULT v7; // eax
  int v8; // eax
  __int64 v9; // rbx
  unsigned int v10; // edx
  __int64 v12[2]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v13[8]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct IShellItem2 *v15; // [rsp+80h] [rbp+20h] BYREF
  struct IShellItem *ppv; // [rsp+88h] [rbp+28h] BYREF
  IShellItem *psiParent; // [rsp+90h] [rbp+30h] BYREF

  if ( *((_QWORD *)this + 45) == *((_QWORD *)this + 46) )
    return 0LL;
  v2 = *tip::tip_test<_tip_WinXMenuEnumerationTest>::operator->((__int64)this + 408, v12);
  v3 = v2 + 152;
  if ( !v2 )
    v3 = 8LL;
  *(_BYTE *)v3 = 1;
  tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>(v12);
  psiParent = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&psiParent);
  v4 = SHGetKnownFolderItem(
         &FOLDERID_UserProfiles,
         KF_FLAG_DEFAULT,
         0LL,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         (void **)&psiParent);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = 0;
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
    v7 = SHCreateItemFromRelativeName(
           psiParent,
           L"Default\\AppData\\Local\\Microsoft\\Windows\\WinX",
           0LL,
           &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
           (void **)&ppv);
    v5 = v7;
    if ( v7 >= 0 )
    {
      CShallowContainerIterator::CShallowContainerIterator((CShallowContainerIterator *)v13, ppv, 0x20u);
      v5 = v13[0];
      if ( (v13[0] & 0x80000000) == 0 )
      {
        v15 = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v15);
        while ( 1 )
        {
          if ( !CShallowContainerIterator::Next((CShallowContainerIterator *)v13, &v15) )
          {
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v15);
            CShallowContainerIterator::~CShallowContainerIterator((CShallowContainerIterator *)v13);
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&psiParent);
            return 0LL;
          }
          v8 = CLauncherTipContextMenu::_AddFolderLinksToCommands(this, v15, 1, v6);
          v5 = v8;
          if ( v8 < 0 )
            break;
          v9 = (__int64)(*((_QWORD *)this + 49) - *((_QWORD *)this + 48)) >> 2;
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v15);
          v10 = v6 + 1;
          if ( v6 >= (unsigned __int64)(v9 - 1) )
            v10 = v6;
          v6 = v10;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x48B,
          (__int64)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
          (const char *)(unsigned int)v8);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v15);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x486,
          (__int64)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
          (const char *)v13[0]);
      }
      CShallowContainerIterator::~CShallowContainerIterator((CShallowContainerIterator *)v13);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x483,
        (__int64)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x480,
      (__int64)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&psiParent);
  return v5;
}
