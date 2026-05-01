/*
 * XREFs of ??$call_factory_cast@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@ZUIntegratedServicesGeographicRegionPolicies@2345@U12345@V_lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_@@@impl@winrt@@YA?A_P$$QEAV_lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_@@@Z @ 0x1801E7194
 * Callers:
 *     ?IsWebSearchProvidersThirdPartyExtensionsEnabled@IntegratedServicesGeographicRegionPolicies@Profile@System@WindowsUdk@winrt@@SA@XZ @ 0x1801EDAC0 (-IsWebSearchProvidersThirdPartyExtensionsEnabled@IntegratedServicesGeographicRegionPolicies@Prof.c)
 * Callees:
 *     ??$call@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@Z@?$factory_cache_entry@UIntegratedServicesGeographicRegionPolicies@Profile@System@WindowsUdk@winrt@@UIIntegratedServicesGeographicRegionPoliciesStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@2@@Z@Z @ 0x1801E7058 (--$call@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@wi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char winrt::impl::call_factory_cast<bool (*)(winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics const &),winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics,_lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_>()
{
  int v0; // eax
  char v2; // [rsp+38h] [rbp+10h] BYREF
  char (__fastcall *v3)(const struct winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics *); // [rsp+40h] [rbp+18h] BYREF

  _InterlockedIncrement64(&qword_18098E448);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics> )
  {
    v2 = 0;
    v0 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>
                                                    + 72LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>,
           &v2);
    if ( v0 < 0 )
      winrt::throw_hresult((unsigned int)v0);
    _InterlockedDecrement64(&qword_18098E448);
    return v2;
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E448);
    v3 = _lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_::_lambda_invoker_cdecl_;
    return winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>::call<bool (*)(winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics const &)>(
             0LL,
             (__int64 (__fastcall **)(__int64 *))&v3);
  }
}
