/*
 * XREFs of ??$call_factory_cast@P6A?AW4PowerSupplyStatus@Power@System@Windows@winrt@@AEBUIPowerManagerStatics@2345@@ZUPowerManager@2345@U62345@V_lambda_d6f5de8facc06583c35b6799ac4a0daa_@@@impl@winrt@@YA?A_P$$QEAV_lambda_d6f5de8facc06583c35b6799ac4a0daa_@@@Z @ 0x18022FE28
 * Callers:
 *     ?IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x18023FEAC (-IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 * Callees:
 *     ??$call@P6A?AW4PowerSupplyStatus@Power@System@Windows@winrt@@AEBUIPowerManagerStatics@2345@@Z@?$factory_cache_entry@UPowerManager@Power@System@Windows@winrt@@UIPowerManagerStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AW4PowerSupplyStatus@Power@System@Windows@2@AEBUIPowerManagerStatics@4562@@Z@Z @ 0x18022FC58 (--$call@P6A-AW4PowerSupplyStatus@Power@System@Windows@winrt@@AEBUIPowerManagerStatics@2345@@Z@-$.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 winrt::impl::call_factory_cast<enum winrt::Windows::System::Power::PowerSupplyStatus (*)(winrt::Windows::System::Power::IPowerManagerStatics const &),winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics,_lambda_d6f5de8facc06583c35b6799ac4a0daa_>()
{
  int v0; // eax
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF
  __int64 (__fastcall *v3)(const struct winrt::Windows::System::Power::IPowerManagerStatics *); // [rsp+40h] [rbp+18h] BYREF

  _InterlockedIncrement64(&qword_18098EC48);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics> )
  {
    v2 = 0;
    v0 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics>
                                                            + 96LL))(
           winrt::impl::factory_cache_entry_v<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics>,
           &v2);
    if ( v0 < 0 )
      winrt::throw_hresult((unsigned int)v0);
    _InterlockedDecrement64(&qword_18098EC48);
    return v2;
  }
  else
  {
    _InterlockedDecrement64(&qword_18098EC48);
    v3 = _lambda_d6f5de8facc06583c35b6799ac4a0daa_::_lambda_invoker_cdecl_;
    return winrt::impl::factory_cache_entry<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics>::call<enum winrt::Windows::System::Power::PowerSupplyStatus (*)(winrt::Windows::System::Power::IPowerManagerStatics const &)>(
             0LL,
             (__int64 (__fastcall **)(__int64 *))&v3);
  }
}
