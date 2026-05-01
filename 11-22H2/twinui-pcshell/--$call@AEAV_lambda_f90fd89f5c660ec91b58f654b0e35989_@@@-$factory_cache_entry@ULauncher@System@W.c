/*
 * XREFs of ??$call@AEAV_lambda_f90fd89f5c660ec91b58f654b0e35989_@@@?$factory_cache_entry@ULauncher@System@Windows@winrt@@UILauncherStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_f90fd89f5c660ec91b58f654b0e35989_@@@Z @ 0x18062E8E0
 * Callers:
 *     ?ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4ActivationKind@Activation@ApplicationModel@Windows@@EURect@Foundation@7@H@Z @ 0x18062F770 (-ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4A.c)
 *     ?LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@AEBULauncherOptions@234@@Z @ 0x180630EF4 (-LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@AEBULauncherOptions@234@.c)
 *     ?LaunchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@UUri@856@@Z @ 0x180714454 (-LaunchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU-.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UILauncherStatics@System@Windows@winrt@@@winrt@@YA?AUILauncherStatics@System@Windows@0@AEBUhstring@param@0@@Z @ 0x1803F7BA0 (--$get_activation_factory@UILauncherStatics@System@Windows@winrt@@@winrt@@YA-AUILauncherStatics@.c)
 *     ?LaunchUriAsync@?$consume_Windows_System_ILauncherStatics@UILauncherStatics@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUUri@Foundation@Windows@3@AEBULauncherOptions@System@63@@Z @ 0x180630E8C (-LaunchUriAsync@-$consume_Windows_System_ILauncherStatics@UILauncherStatics@System@_ea_180630E8C.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics>::call<_lambda_f90fd89f5c660ec91b58f654b0e35989_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  bool v6; // zf
  __int64 v8[2]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v9[5]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+20h] BYREF
  __int64 v11; // [rsp+98h] [rbp+38h] BYREF

  v10 = a1;
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v9, L"Windows.System.Launcher", 23);
  winrt::get_activation_factory<winrt::Windows::System::ILauncherStatics>(&v10, v9);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v10;
  if ( v10 && (v11 = 0LL, (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11), (v8[0] = v11) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v8);
    v8[1] = (__int64)&qword_180990CC8;
    _InterlockedIncrement64(&qword_180990CC8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180990CD0);
    }
    winrt::impl::consume_Windows_System_ILauncherStatics<winrt::Windows::System::ILauncherStatics>::LaunchUriAsync(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics>,
      a2,
      *a3,
      a3[1]);
    _InterlockedDecrement64(&qword_180990CC8);
    v6 = v10 == 0LL;
  }
  else
  {
    winrt::impl::consume_Windows_System_ILauncherStatics<winrt::Windows::System::ILauncherStatics>::LaunchUriAsync(
      &v10,
      a2,
      *a3,
      a3[1]);
    v6 = v5 == 0LL;
  }
  if ( !v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  return a2;
}
