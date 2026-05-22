/*
 * XREFs of ?StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x180048CFC
 * Callers:
 *     ??0ViewHierarchyWithWindowManager@@QEAA@XZ @ 0x180048354 (--0ViewHierarchyWithWindowManager@@QEAA@XZ.c)
 *     ?OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z @ 0x180099370 (-OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@App.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B4FC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??$?0VViewHierarchyWithWindowManager@@P80@EAAJUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UAppViewChangedEventArgs@23456@@Z@?$TypedEventHandler@UAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UAppViewChangedEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAVViewHierarchyWithWindowManager@@P84@EAAJUAppViewWatcher@WindowManagement@ApplicationModel@Internal@23@UAppViewChangedEventArgs@67823@@Z@Z @ 0x180048E08 (--$-0VViewHierarchyWithWindowManager@@P80@EAAJUAppViewWatcher@WindowManagement@ApplicationModel@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A78C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewHierarchyWithWindowManager::StartAppViewWatcher(ViewHierarchyWithWindowManager *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+10h] BYREF
  __int64 v7; // [rsp+38h] [rbp+18h] BYREF

  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs>(
    &v6,
    this,
    ViewHierarchyWithWindowManager::OnAppViewAdded);
  v7 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)this + 1) + 80LL))(
         *((_QWORD *)this + 1),
         v6,
         &v7);
  if ( v2 < 0 )
    winrt::throw_hresult((unsigned int)v2);
  *((_QWORD *)this + 5) = v7;
  if ( v6 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v6);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs>(
    &v6,
    this,
    &ViewHierarchyWithWindowManager::OnAppViewRemoved);
  v7 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)this + 1) + 96LL))(
         *((_QWORD *)this + 1),
         v6,
         &v7);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  *((_QWORD *)this + 6) = v7;
  if ( v6 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v6);
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 424LL))(*((_QWORD *)this + 1));
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  return 0LL;
}
