/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800C8A4C
 * Callers:
 *     _wil::save_cereal::JSONOutputArchive__::_1_::dtor$2 @ 0x1800F2FAE (_wil--save_cereal--JSONOutputArchive__--_1_--dtor$2.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::StopAnimation_::_1_::dtor$1 @ 0x1800F55F8 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationRejuvTransitionHa_ea_1800F55F8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::wstring::~wstring()
{
  return std::wstring::_Tidy_deallocate();
}
