/*
 * XREFs of ?GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800A1FBC
 * Callers:
 *     ?AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800A1520 (-AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z.c)
 *     ?RequestActivation@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x1800A2D7C (-RequestActivation@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 *     ?HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z @ 0x1800A46D4 (-HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z.c)
 *     ?IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1801B98FC (-IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z.c)
 * Callees:
 *     ?GetView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@I@Z @ 0x180002650 (-GetView@ViewHierarchyWithWindowManager@@QEAA-AUAppView@WindowManagement@ApplicationModel@Intern.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180002D04 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManage.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B4FC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1AppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180098BD4 (--1AppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?HostAppView@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18009BFA4 (-HostAppView@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPrev.c)
 *     ?IsTopLevel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18009C310 (-IsTopLevel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPrevi.c)
 *     ?AppModel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800A1428 (-AppModel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@Window.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewHierarchyWithWindowManager::GetTopLevelHostView(ViewHierarchyWithWindowManager *this, int a2)
{
  unsigned int v2; // r12d
  int v3; // r15d
  __int64 v4; // rsi
  void (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  __int64 v6; // r14
  __int64 v7; // rbx
  char IsTopLevel; // r13
  __int64 v9; // rbx
  int v10; // r15d
  unsigned int v11; // r15d
  __int64 *View; // rdi
  void (__fastcall ***v13)(_QWORD, void *, __int64 *); // rcx
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 *v16; // r13
  __int64 v17; // r14
  __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+28h] [rbp-40h] BYREF
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  __int64 v22; // [rsp+38h] [rbp-30h] BYREF
  __int64 v23; // [rsp+40h] [rbp-28h] BYREF
  __int64 v24; // [rsp+48h] [rbp-20h] BYREF
  __int64 v25; // [rsp+50h] [rbp-18h] BYREF
  __int64 v26[2]; // [rsp+58h] [rbp-10h] BYREF
  __int64 v28; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v29; // [rsp+C8h] [rbp+60h] BYREF

  v2 = a2;
  v3 = 0;
  ViewHierarchyWithWindowManager::GetView((unsigned __int64)this, &v29, a2);
  v4 = v29;
  if ( !v29 )
    goto LABEL_45;
  v5 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::AppModel(
                                                            &v29,
                                                            &v22);
  if ( v5 )
  {
    v28 = 0LL;
    (**v5)(
      v5,
      &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>,
      &v28);
    v6 = v28;
    v7 = v28;
  }
  else
  {
    v6 = 0LL;
    v7 = 0LL;
  }
  v20 = v6;
  if ( v22 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v22);
  if ( !v7 )
  {
    winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher::~AppViewWatcher((winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher *)&v20);
LABEL_45:
    winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher::~AppViewWatcher((winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher *)&v29);
    return v2;
  }
  winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>::HostAppView(
    &v20,
    &v19);
  IsTopLevel = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>::IsTopLevel(&v20);
  v9 = v19;
  while ( 1 )
  {
    v10 = v3 | 1;
    if ( !v9 || IsTopLevel )
      break;
    v11 = v10 & 0xFFFFFFFE;
    v2 = *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::Id(
            &v19,
            &v28);
    View = ViewHierarchyWithWindowManager::GetView((unsigned __int64)this, &v23, v2);
    if ( &v29 != View )
    {
      if ( v4 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v29);
      v4 = *View;
      *View = 0LL;
      v29 = v4;
    }
    if ( v23 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v23);
    v13 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::AppModel(
                                                               &v29,
                                                               &v25);
    if ( v13 )
    {
      v24 = 0LL;
      (**v13)(
        v13,
        &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>,
        &v24);
      v14 = v24;
      v15 = v24;
    }
    else
    {
      v14 = 0LL;
      v15 = 0LL;
    }
    v21 = v14;
    if ( v25 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v25);
    if ( !v15 )
    {
      v22 = 0LL;
      v16 = &v22;
      v3 = v11 | 4;
LABEL_26:
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v19);
      v9 = *v16;
      *v16 = 0LL;
      v19 = v9;
      goto LABEL_27;
    }
    v16 = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>::HostAppView(
            &v21,
            v26);
    v3 = v11 | 2;
    if ( &v19 != v16 )
      goto LABEL_26;
LABEL_27:
    if ( (v3 & 4) != 0 )
    {
      v3 &= ~4u;
      if ( v22 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v22);
    }
    if ( (v3 & 2) != 0 )
    {
      v3 &= ~2u;
      if ( v26[0] )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v26);
    }
    if ( v14 )
      IsTopLevel = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>::IsTopLevel(&v21);
    else
      IsTopLevel = 1;
    if ( v14 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v21);
  }
  v17 = v20;
  if ( v9 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v19);
  if ( v17 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v20);
  if ( v4 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v29);
  return v2;
}
