/*
 * XREFs of ?GetPresentationModeFromViewId@ViewHelper@@SA?AW4AppModelHolographicPresentationMode@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x180117B74
 * Callers:
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x18011860C (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?GetView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@I@Z @ 0x180002AC0 (-GetView@ViewHierarchyWithWindowManager@@QEAA-AUAppView@WindowManagement@ApplicationModel@Intern.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001CCDC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1AppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x1800AB1B4 (--1AppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?AppModel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800B3A58 (-AppModel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@Window.c)
 *     ?PresentationMode@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModel@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180119274 (-PresentationMode@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppMode.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewHelper::GetPresentationModeFromViewId(unsigned __int64 a1, int a2)
{
  void (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // [rsp+20h] [rbp-10h] BYREF
  __int64 v7; // [rsp+28h] [rbp-8h] BYREF
  __int64 v8; // [rsp+50h] [rbp+20h] BYREF
  __int64 v9; // [rsp+58h] [rbp+28h] BYREF

  ViewHierarchyWithWindowManager::GetView(a1, &v8, a2);
  if ( v8 )
  {
    v3 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::AppModel(
                                                              &v8,
                                                              &v7);
    if ( v3 )
    {
      v6 = 0LL;
      (**v3)(
        v3,
        &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>,
        &v6);
      v4 = v6;
      v5 = v6;
    }
    else
    {
      v4 = 0LL;
      v5 = 0LL;
    }
    v9 = v4;
    if ( v7 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v7);
    if ( v5 )
      LODWORD(v5) = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModel<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>::PresentationMode(&v9);
    if ( v4 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v9);
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v8);
    return (unsigned int)v5;
  }
  else
  {
    winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher::~AppViewWatcher((winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher *)&v8);
    return 0LL;
  }
}
