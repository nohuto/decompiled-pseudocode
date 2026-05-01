/*
 * XREFs of ??$call@P6A?AULauncherOptions@System@Windows@winrt@@AEBUIActivationFactory@Foundation@34@@Z@?$factory_cache_entry@ULauncherOptions@System@Windows@winrt@@UIActivationFactory@Foundation@34@@impl@winrt@@QEAA?A_P$$QEAP6A?AULauncherOptions@System@Windows@2@AEBUIActivationFactory@Foundation@52@@Z@Z @ 0x18062EA20
 * Callers:
 *     ??0LauncherOptions@System@Windows@winrt@@QEAA@XZ @ 0x18062F140 (--0LauncherOptions@System@Windows@winrt@@QEAA@XZ.c)
 *     ?ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4ActivationKind@Activation@ApplicationModel@Windows@@EURect@Foundation@7@H@Z @ 0x18062F770 (-ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4A.c)
 *     ?LaunchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@UUri@856@@Z @ 0x180714454 (-LaunchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU-.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIActivationFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x1800B3F4C (--$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA-AUIActivation.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::System::LauncherOptions,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::System::LauncherOptions (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 v6[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v7[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+10h] BYREF
  __int64 v9; // [rsp+88h] [rbp+28h] BYREF

  v8 = a1;
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v7, L"Windows.System.LauncherOptions", 30);
  winrt::get_activation_factory<winrt::Windows::Foundation::IActivationFactory>(&v8, (__int64)v7);
  if ( v8 && (v9 = 0LL, (**v8)(v8, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v9), (v6[0] = v9) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_180990D88;
    _InterlockedIncrement64(&qword_180990D88);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::System::LauncherOptions,winrt::Windows::Foundation::IActivationFactory>,
            (signed __int64)v8,
            0LL) )
    {
      v8 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180990D90);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::System::LauncherOptions,winrt::Windows::Foundation::IActivationFactory>);
    _InterlockedDecrement64(&qword_180990D88);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v8);
  }
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return a2;
}
