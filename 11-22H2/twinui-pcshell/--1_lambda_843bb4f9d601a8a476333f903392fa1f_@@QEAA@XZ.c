/*
 * XREFs of ??1_lambda_843bb4f9d601a8a476333f903392fa1f_@@QEAA@XZ @ 0x18069E3B8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18024D250 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18024D250.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor$2 @ 0x18024DCB4 (_winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemA_ea_18024DCB4.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ @ 0x18069ED24 (--1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ.c)
 */

void __fastcall _lambda_843bb4f9d601a8a476333f903392fa1f_::~_lambda_843bb4f9d601a8a476333f903392fa1f_(
        _lambda_843bb4f9d601a8a476333f903392fa1f_ *this)
{
  std::_Ref_count_base *v2; // rcx

  PinManagerTelemetry::PinManagerRequestPinItem::~PinManagerRequestPinItem((_lambda_843bb4f9d601a8a476333f903392fa1f_ *)((char *)this + 48));
  std::wstring::_Tidy_deallocate((__int64)this + 16);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
