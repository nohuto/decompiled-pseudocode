/*
 * XREFs of ?StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x18003F7E0
 * Callers:
 *     ??0ViewHierarchyWithWindowManager@@QEAA@XZ @ 0x18003F0E0 (--0ViewHierarchyWithWindowManager@@QEAA@XZ.c)
 *     ?OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z @ 0x1800821D0 (-OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@App.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800074C4 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800836D4 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewHierarchyWithWindowManager::StartAppViewWatcher(ViewHierarchyWithWindowManager *this)
{
  char *v2; // rax
  int v3; // eax
  char *v4; // rax
  int v5; // eax
  int v6; // eax
  __int128 v8; // [rsp+20h] [rbp-28h]
  __int128 v9; // [rsp+20h] [rbp-28h]
  char *v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  char *v12; // [rsp+60h] [rbp+18h] BYREF
  char *v13; // [rsp+68h] [rbp+20h] BYREF

  *(_QWORD *)&v8 = this;
  *((_QWORD *)&v8 + 1) = ViewHierarchyWithWindowManager::OnAppViewAdded;
  v2 = (char *)operator new(0x20uLL);
  *(_OWORD *)(v2 + 8) = v8;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v2 + 6) = 1;
  *(_QWORD *)v2 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs>,_lambda_e811ed625de1c9f36d6dae6db721db2b_>::`vftable';
  v12 = v2;
  v10 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, char *, char **))(**((_QWORD **)this + 1) + 80LL))(
         *((_QWORD *)this + 1),
         v2,
         &v10);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  *((_QWORD *)this + 5) = v10;
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v12);
  *(_QWORD *)&v9 = this;
  *((_QWORD *)&v9 + 1) = &ViewHierarchyWithWindowManager::OnAppViewRemoved;
  v4 = (char *)operator new(0x20uLL);
  v10 = v4;
  *(_OWORD *)(v4 + 8) = v9;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v4 + 6) = 1;
  *(_QWORD *)v4 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs>,_lambda_e811ed625de1c9f36d6dae6db721db2b_>::`vftable';
  v13 = v4;
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**((_QWORD **)this + 1) + 96LL))(
         *((_QWORD *)this + 1),
         v4,
         &v11);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  *((_QWORD *)this + 6) = v11;
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v13);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 424LL))(*((_QWORD *)this + 1));
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  return 0LL;
}
