/*
 * XREFs of ??$call@AEAV_lambda_f90fd89f5c660ec91b58f654b0e35989_@@@?$factory_cache_entry@ULauncher@System@Windows@winrt@@UILauncherStatics@234@@impl@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@Windows@2@AEAV_lambda_f90fd89f5c660ec91b58f654b0e35989_@@@Z @ 0x18057044C
 * Callers:
 *     ?ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4ActivationKind@Activation@ApplicationModel@Windows@@EURect@Foundation@7@H@Z @ 0x180571950 (-ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4A.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18018F6EB (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UILauncherStatics@System@Windows@winrt@@@winrt@@YA?AUILauncherStatics@System@Windows@0@AEBUhstring@param@0@@Z @ 0x18057070C (--$get_activation_factory@UILauncherStatics@System@Windows@winrt@@@winrt@@YA-AUILauncherStatics@.c)
 *     ?LaunchUriAsync@?$consume_Windows_System_ILauncherStatics@UILauncherStatics@System@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@_N@Foundation@Windows@3@AEBUUri@563@AEBULauncherOptions@System@63@@Z @ 0x180573060 (-LaunchUriAsync@-$consume_Windows_System_ILauncherStatics@UILauncherStatics@System@Windows@winrt.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics>::call<_lambda_f90fd89f5c660ec91b58f654b0e35989_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v6; // rax
  char v7; // r14
  bool v8; // zf
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v11; // [rsp+28h] [rbp-28h]
  _BYTE v12[32]; // [rsp+30h] [rbp-20h] BYREF
  void (__fastcall ***v13)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+20h] BYREF
  __int64 v14; // [rsp+88h] [rbp+38h] BYREF

  v13 = a1;
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v12, L"Windows.System.Launcher", 23LL);
  winrt::get_activation_factory<winrt::Windows::System::ILauncherStatics>(&v13, v12);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v13;
  if ( !v13 )
  {
    v6 = 0LL;
    v10 = 0LL;
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  v14 = 0LL;
  (**v13)(v13, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v14);
  v6 = v14;
  v10 = v14;
  if ( !v14 )
    goto LABEL_3;
  v7 = 1;
LABEL_4:
  if ( v6 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v10);
  if ( v7 )
  {
    v11 = &qword_1807B5D88;
    _InterlockedIncrement64(&qword_1807B5D88);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics>,
            (signed __int64)v13,
            0LL) )
    {
      v13 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1807B5D90);
    }
    winrt::impl::consume_Windows_System_ILauncherStatics<winrt::Windows::System::ILauncherStatics>::LaunchUriAsync(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics>,
      a2,
      *a3,
      a3[1],
      v10,
      v11);
    _InterlockedDecrement64(&qword_1807B5D88);
    v8 = v13 == 0LL;
  }
  else
  {
    winrt::impl::consume_Windows_System_ILauncherStatics<winrt::Windows::System::ILauncherStatics>::LaunchUriAsync(
      &v13,
      a2,
      *a3,
      a3[1],
      v10,
      v11);
    v8 = v5 == 0LL;
  }
  if ( !v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
  return a2;
}
