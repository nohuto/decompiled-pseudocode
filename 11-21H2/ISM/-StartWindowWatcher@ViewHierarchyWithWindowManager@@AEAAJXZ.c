/*
 * XREFs of ?StartWindowWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x18003F948
 * Callers:
 *     ??0ViewHierarchyWithWindowManager@@QEAA@XZ @ 0x18003F0E0 (--0ViewHierarchyWithWindowManager@@QEAA@XZ.c)
 *     ?OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z @ 0x1800821D0 (-OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@App.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800074C4 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800836D4 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewHierarchyWithWindowManager::StartWindowWatcher(ViewHierarchyWithWindowManager *this)
{
  char *v2; // rax
  int v3; // eax
  char *v4; // rax
  int v5; // eax
  char *v6; // rax
  int v7; // eax
  int v8; // eax
  char *v10; // [rsp+20h] [rbp-20h] BYREF
  char *v11; // [rsp+28h] [rbp-18h] BYREF
  __int128 v12; // [rsp+30h] [rbp-10h]
  char *v13; // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF
  __int64 v15; // [rsp+80h] [rbp+40h] BYREF
  char *v16; // [rsp+88h] [rbp+48h] BYREF

  *(_QWORD *)&v12 = this;
  *((_QWORD *)&v12 + 1) = ViewHierarchyWithWindowManager::OnWindowAdded;
  v2 = (char *)operator new(0x20uLL);
  *(_OWORD *)(v2 + 8) = v12;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v2 + 6) = 1;
  *(_QWORD *)v2 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs>,_lambda_66ed2df52651243ff863a12d97446406_>::`vftable';
  v16 = v2;
  v13 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, char *, char **))(**(_QWORD **)this + 80LL))(*(_QWORD *)this, v2, &v13);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  *((_QWORD *)this + 2) = v13;
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v16);
  *(_QWORD *)&v12 = this;
  *((_QWORD *)&v12 + 1) = &ViewHierarchyWithWindowManager::OnWindowRemoved;
  v4 = (char *)operator new(0x20uLL);
  *(_OWORD *)(v4 + 8) = v12;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v4 + 6) = 1;
  *(_QWORD *)v4 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs>,_lambda_66ed2df52651243ff863a12d97446406_>::`vftable';
  v10 = v4;
  v14 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**(_QWORD **)this + 96LL))(*(_QWORD *)this, v4, &v14);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  *((_QWORD *)this + 3) = v14;
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v10);
  *(_QWORD *)&v12 = this;
  *((_QWORD *)&v12 + 1) = &ViewHierarchyWithWindowManager::OnWindowWatcherStopped;
  v6 = (char *)operator new(0x20uLL);
  v13 = v6;
  *(_OWORD *)(v6 + 8) = v12;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 6) = 1;
  *(_QWORD *)v6 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Foundation::IInspectable>,_lambda_1fc43c971fd1247187255afbf1b5936c_>::`vftable';
  v11 = v6;
  v15 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**(_QWORD **)this + 64LL))(*(_QWORD *)this, v6, &v15);
  if ( v7 < 0 )
    winrt::throw_hresult((unsigned int)v7);
  *((_QWORD *)this + 4) = v15;
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v11);
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 168LL))(*(_QWORD *)this);
  if ( v8 < 0 )
    winrt::throw_hresult((unsigned int)v8);
  return 0LL;
}
