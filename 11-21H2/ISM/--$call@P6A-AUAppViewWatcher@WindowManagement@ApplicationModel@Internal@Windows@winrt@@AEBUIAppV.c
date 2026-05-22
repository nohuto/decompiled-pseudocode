/*
 * XREFs of ??$call@P6A?AUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIAppViewStatics@23456@@Z@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?AUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@2@$$QEAP6A?AU345672@AEBUIAppViewStatics@45672@@Z@Z @ 0x18003F2D4
 * Callers:
 *     ??0ViewHierarchyWithWindowManager@@QEAA@XZ @ 0x18003F0E0 (--0ViewHierarchyWithWindowManager@@QEAA@XZ.c)
 *     ?OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z @ 0x1800821D0 (-OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@App.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800074C4 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??$get_runtime_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x18003F638 (--$get_runtime_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Wi.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18004C289 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800836D4 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::call<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher (*)(winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics const &)>(
        __int64 a1,
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *),
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  char v8; // di
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+28h] [rbp-38h] BYREF
  __int64 v12[2]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD *v13; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v14[4]; // [rsp+48h] [rbp-18h] BYREF
  const wchar_t *v15; // [rsp+58h] [rbp-8h]
  __int64 v16; // [rsp+80h] [rbp+20h] BYREF
  void (__fastcall ***v17)(_QWORD, _QWORD, _QWORD); // [rsp+98h] [rbp+38h] BYREF

  v16 = a1;
  if ( aWindowsInterna_1[64] )
  {
    _o_terminate(a1, a2, a3, a4, (_DWORD)v10);
LABEL_15:
    v7 = 0LL;
    v12[0] = 0LL;
    goto LABEL_16;
  }
  v14[0] = 1;
  v14[1] = 64;
  v15 = L"Windows.Internal.ApplicationModel.WindowManagement.AppViewInProc";
  v13 = v14;
  v10 = 0LL;
  v6 = *(unsigned int *)winrt::impl::get_runtime_activation_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>(
                          &v16,
                          &v13,
                          &v10);
  if ( (int)v6 < 0 )
    winrt::throw_hresult(v6);
  v17 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v10;
  if ( !v10 )
    goto LABEL_15;
  v11 = 0LL;
  (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11);
  v7 = v11;
  v12[0] = v11;
  v8 = 1;
  if ( v11 )
  {
LABEL_5:
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v12);
    goto LABEL_6;
  }
LABEL_16:
  v8 = 0;
  if ( v7 )
    goto LABEL_5;
LABEL_6:
  if ( v8 )
  {
    v12[1] = (__int64)&qword_180242E18;
    _InterlockedIncrement64(&qword_180242E18);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>,
            (signed __int64)v17,
            0LL) )
    {
      v17 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &ListEntry);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>);
    _InterlockedDecrement64(&qword_180242E18);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v17);
  }
  if ( v17 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v17);
  return a2;
}
