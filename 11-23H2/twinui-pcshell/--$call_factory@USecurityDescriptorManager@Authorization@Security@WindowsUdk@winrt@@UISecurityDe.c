/*
 * XREFs of ??$call_factory@USecurityDescriptorManager@Authorization@Security@WindowsUdk@winrt@@UISecurityDescriptorManagerStatics@2345@V_lambda_854d82a1e74abb924a7f571a93c2e7c9_@@@impl@winrt@@YA?A_P$$QEAV_lambda_854d82a1e74abb924a7f571a93c2e7c9_@@@Z @ 0x18022FD94
 * Callers:
 *     ?EnsureLockWidgetCanvasRegistryPath@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18023930C (-EnsureLockWidgetCanvasRegistryPath@DashboardManager@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::call_factory<winrt::WindowsUdk::Security::Authorization::SecurityDescriptorManager,winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics,_lambda_854d82a1e74abb924a7f571a93c2e7c9_>(
        unsigned int **a1)
{
  int v1; // eax

  _InterlockedIncrement64(&qword_18098EC68);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Security::Authorization::SecurityDescriptorManager,winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics> )
  {
    v1 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Security::Authorization::SecurityDescriptorManager,winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics>
                                                                    + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Security::Authorization::SecurityDescriptorManager,winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics>,
           **a1,
           *(_QWORD *)a1[1],
           *a1[2]);
    if ( v1 < 0 )
      winrt::throw_hresult((unsigned int)v1);
    _InterlockedDecrement64(&qword_18098EC68);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098EC68);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::Security::Authorization::SecurityDescriptorManager,winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics>::call<_lambda_854d82a1e74abb924a7f571a93c2e7c9_ &>(
      (__int64)a1,
      a1);
  }
}
