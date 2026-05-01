/*
 * XREFs of ??1_lambda_753097bedced4ae9c1dc4d5cb6b36f6c_@@QEAA@XZ @ 0x18069E380
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18024C520 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerPinItemToTaskbarShim__::_1_::dtor$2 @ 0x18024CF84 (_winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemA_ea_18024CF84.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAA@XZ @ 0x18069ECF8 (--1PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAA@XZ.c)
 */

void __fastcall _lambda_753097bedced4ae9c1dc4d5cb6b36f6c_::~_lambda_753097bedced4ae9c1dc4d5cb6b36f6c_(
        _lambda_753097bedced4ae9c1dc4d5cb6b36f6c_ *this)
{
  std::_Ref_count_base *v2; // rcx

  PinManagerTelemetry::PinManagerPinItemToTaskbarShim::~PinManagerPinItemToTaskbarShim((_lambda_753097bedced4ae9c1dc4d5cb6b36f6c_ *)((char *)this + 48));
  std::wstring::_Tidy_deallocate((__int64)this + 16);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
