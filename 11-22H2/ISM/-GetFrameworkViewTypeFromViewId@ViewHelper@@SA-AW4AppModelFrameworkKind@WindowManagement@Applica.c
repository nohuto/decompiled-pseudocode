/*
 * XREFs of ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x180117854
 * Callers:
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x180117610 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 * Callees:
 *     ?GetView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@I@Z @ 0x180002AC0 (-GetView@ViewHierarchyWithWindowManager@@QEAA-AUAppView@WindowManagement@ApplicationModel@Intern.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001CCDC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1AppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x1800AB1B4 (--1AppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800ACD6C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?AppModel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800B3A58 (-AppModel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@Window.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewHelper::GetFrameworkViewTypeFromViewId(unsigned __int64 a1, int a2)
{
  void (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  signed int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9; // [rsp+28h] [rbp-18h] BYREF
  __int64 v10; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v11; // [rsp+60h] [rbp+20h] BYREF
  __int64 v12; // [rsp+68h] [rbp+28h] BYREF

  ViewHierarchyWithWindowManager::GetView(a1, &v12, a2);
  if ( v12 )
  {
    v3 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::AppModel(
                                                              &v12,
                                                              &v9);
    if ( v3 )
    {
      v8 = 0LL;
      (**v3)(
        v3,
        &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>,
        &v8);
      v4 = v8;
      v5 = v8;
    }
    else
    {
      v4 = 0LL;
      v5 = 0LL;
    }
    v10 = v4;
    if ( v9 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v9);
    if ( v5 )
    {
      v11 = 0;
      v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v4 + 120LL))(v4, &v11);
      if ( v6 < 0 )
        winrt::throw_hresult(v6);
      v7 = v11;
    }
    else
    {
      v7 = 6;
    }
    if ( v4 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v10);
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v12);
    return v7;
  }
  else
  {
    winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher::~AppViewWatcher((winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher *)&v12);
    return 6LL;
  }
}
