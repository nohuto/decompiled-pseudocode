/*
 * XREFs of ??$call_factory_cast@P6A?AUguid@winrt@@AEBUIGuidHelperStatics@Foundation@Windows@2@@ZUGuidHelper@452@U3452@V_lambda_ea5e3329626312b463edf2c9eea0dadc_@@@impl@winrt@@YA?A_P$$QEAV_lambda_ea5e3329626312b463edf2c9eea0dadc_@@@Z @ 0x1803F75D8
 * Callers:
 *     ?SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z @ 0x180407698 (-SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$call@P6A?AUguid@winrt@@AEBUIGuidHelperStatics@Foundation@Windows@2@@Z@?$factory_cache_entry@UGuidHelper@Foundation@Windows@winrt@@UIGuidHelperStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUguid@2@AEBUIGuidHelperStatics@Foundation@Windows@2@@Z@Z @ 0x1803F748C (--$call@P6A-AUguid@winrt@@AEBUIGuidHelperStatics@Foundation@Windows@2@@Z@-$factory_cache_entry@U.c)
 */

// Hidden C++ exception states: #wind=1
void (__fastcall ***__fastcall winrt::impl::call_factory_cast<winrt::guid (*)(winrt::Windows::Foundation::IGuidHelperStatics const &),winrt::Windows::Foundation::GuidHelper,winrt::Windows::Foundation::IGuidHelperStatics,_lambda_ea5e3329626312b463edf2c9eea0dadc_>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *)))(_QWORD, __int64 *, __int64 *)
{
  signed int v2; // eax
  void (__fastcall *v4[3])(__int64, __int64 *); // [rsp+20h] [rbp-18h] BYREF

  v4[1] = (void (__fastcall *)(__int64, __int64 *))&qword_180990808;
  _InterlockedIncrement64(&qword_180990808);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::GuidHelper,winrt::Windows::Foundation::IGuidHelperStatics> )
  {
    *(_OWORD *)a1 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64, void (__fastcall ***)(_QWORD, __int64 *, __int64 *)))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::GuidHelper,winrt::Windows::Foundation::IGuidHelperStatics>
                                                                                                 + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::GuidHelper,winrt::Windows::Foundation::IGuidHelperStatics>,
           a1);
    if ( v2 < 0 )
      winrt::throw_hresult(v2);
    _InterlockedDecrement64(&qword_180990808);
  }
  else
  {
    _InterlockedDecrement64(&qword_180990808);
    v4[0] = (void (__fastcall *)(__int64, __int64 *))_lambda_ea5e3329626312b463edf2c9eea0dadc_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::GuidHelper,winrt::Windows::Foundation::IGuidHelperStatics>::call<winrt::guid (*)(winrt::Windows::Foundation::IGuidHelperStatics const &)>(
      a1,
      (__int64)a1,
      v4);
  }
  return a1;
}
