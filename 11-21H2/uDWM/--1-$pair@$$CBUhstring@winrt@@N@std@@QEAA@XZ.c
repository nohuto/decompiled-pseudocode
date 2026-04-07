/*
 * XREFs of ??1?$pair@$$CBUhstring@winrt@@N@std@@QEAA@XZ @ 0x1800F98A0
 * Callers:
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::UpdateAngle_::_1_::dtor$2 @ 0x1800FB446 (_winrt--Udwm--Transitions--implementation--TransitionManager--UpdateAngle_--_1_--dtor$2.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::UpdateRect_::_1_::dtor$1 @ 0x1800FB74A (_winrt--Udwm--Transitions--implementation--TransitionManager--UpdateRect_--_1_--dtor$1.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::UpdateRect_::_1_::dtor$2 @ 0x1800FB756 (_winrt--Udwm--Transitions--implementation--TransitionManager--UpdateRect_--_1_--dtor$2.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::UpdateRect_::_1_::dtor$3 @ 0x1800FB762 (_winrt--Udwm--Transitions--implementation--TransitionManager--UpdateRect_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::pair<winrt::hstring const,double>::~pair<winrt::hstring const,double>(
        volatile signed __int32 **a1)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
}
