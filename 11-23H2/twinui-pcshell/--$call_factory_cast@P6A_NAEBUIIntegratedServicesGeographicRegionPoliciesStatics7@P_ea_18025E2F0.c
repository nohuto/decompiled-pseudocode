/*
 * XREFs of ??$call_factory_cast@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics7@Profile@System@WindowsUdk@winrt@@@ZUIntegratedServicesGeographicRegionPolicies@2345@U12345@V_lambda_4e5520e07e2a58037a4a6cdfef71092b_@@@impl@winrt@@YA?A_P$$QEAV_lambda_4e5520e07e2a58037a4a6cdfef71092b_@@@Z @ 0x18025E2F0
 * Callers:
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180264890 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ??$call@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics7@Profile@System@WindowsUdk@winrt@@@Z@?$factory_cache_entry@UIntegratedServicesGeographicRegionPolicies@Profile@System@WindowsUdk@winrt@@UIIntegratedServicesGeographicRegionPoliciesStatics7@2345@@impl@winrt@@QEAA?A_P$$QEAP6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics7@Profile@System@WindowsUdk@2@@Z@Z @ 0x18025E118 (--$call@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics7@Profile@System@WindowsUdk@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

char winrt::impl::call_factory_cast<bool (*)(winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics7 const &),winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics7,_lambda_4e5520e07e2a58037a4a6cdfef71092b_>()
{
  int v0; // eax
  char v2; // [rsp+38h] [rbp+10h] BYREF
  char (__fastcall *v3)(const struct winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics7 *); // [rsp+40h] [rbp+18h] BYREF

  _InterlockedIncrement64(&qword_18098E428);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics7> )
  {
    v2 = 0;
    v0 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics7>
                                                    + 56LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics7>,
           &v2);
    if ( v0 < 0 )
      winrt::throw_hresult((unsigned int)v0);
    _InterlockedDecrement64(&qword_18098E428);
    return v2;
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E428);
    v3 = _lambda_4e5520e07e2a58037a4a6cdfef71092b_::_lambda_invoker_cdecl_;
    return winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics7>::call<bool (*)(winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics7 const &)>(
             0LL,
             (__int64 (__fastcall **)(__int64 *))&v3);
  }
}
