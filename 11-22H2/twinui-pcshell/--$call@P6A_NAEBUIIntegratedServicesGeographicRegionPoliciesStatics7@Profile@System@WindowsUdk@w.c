/*
 * XREFs of ??$call@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics7@Profile@System@WindowsUdk@winrt@@@Z@?$factory_cache_entry@UIntegratedServicesGeographicRegionPolicies@Profile@System@WindowsUdk@winrt@@UIIntegratedServicesGeographicRegionPoliciesStatics7@2345@@impl@winrt@@QEAA?A_P$$QEAP6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics7@Profile@System@WindowsUdk@2@@Z@Z @ 0x18025E118
 * Callers:
 *     ??$call_factory_cast@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics7@Profile@System@WindowsUdk@winrt@@@ZUIntegratedServicesGeographicRegionPolicies@2345@U12345@V_lambda_45962ca3e1ade70bce395d2c61b5b2dd_@@@impl@winrt@@YA?A_P$$QEAV_lambda_45962ca3e1ade70bce395d2c61b5b2dd_@@@Z @ 0x18025E254 (--$call_factory_cast@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics7@Profile@System.c)
 *     ??$call_factory_cast@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics7@Profile@System@WindowsUdk@winrt@@@ZUIntegratedServicesGeographicRegionPolicies@2345@U12345@V_lambda_4e5520e07e2a58037a4a6cdfef71092b_@@@impl@winrt@@YA?A_P$$QEAV_lambda_4e5520e07e2a58037a4a6cdfef71092b_@@@Z @ 0x18025E2F0 (--$call_factory_cast@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics7@P_ea_18025E2F0.c)
 * Callees:
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180087AA4 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B4384 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1802CECBA (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-A_PXZ.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

char __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics7>::call<bool (*)(winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics7 const &)>(
        __int64 a1,
        __int64 (__fastcall **a2)(__int64 *))
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v6[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v8[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v9; // [rsp+80h] [rbp+20h] BYREF
  signed __int64 v10; // [rsp+90h] [rbp+30h] BYREF
  signed __int64 v11; // [rsp+98h] [rbp+38h] BYREF

  v9 = a1;
  v7[0] = L"WindowsUdk.System.Profile.IntegratedServicesGeographicRegionPolicies";
  v7[1] = 68LL;
  winrt::param::hstring::hstring((winrt::param::hstring *)v8, (__int64)v7);
  v11 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v9,
    v8,
    (__int64)&winrt::impl::guid_v<winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics7>,
    (__int64)&v11);
  if ( (int)v9 < 0 )
    winrt::throw_hresult((unsigned int)v9);
  v10 = v11;
  v3 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v10, v6);
  if ( v6[0] )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v6);
  if ( v3 )
  {
    v6[1] = (__int64)&qword_18098E428;
    _InterlockedIncrement64(&qword_18098E428);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics7>,
            v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098E430);
    }
    LOBYTE(v4) = (*a2)(&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics7>);
    _InterlockedDecrement64(&qword_18098E428);
  }
  else
  {
    v4 = (unsigned __int8)(*a2)(&v10);
  }
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v10);
  return v4;
}
