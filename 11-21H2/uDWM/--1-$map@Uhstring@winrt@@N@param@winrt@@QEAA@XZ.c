/*
 * XREFs of ??1?$map@Uhstring@winrt@@N@param@winrt@@QEAA@XZ @ 0x1800F9868
 * Callers:
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::SkipAnimationDelays_::_1_::dtor$6 @ 0x1800FB1A9 (_winrt--Udwm--Transitions--implementation--TransitionManager--SkipAnimationDelays_--_1_--dtor$6.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::UpdateAngle_::_1_::dtor$7 @ 0x1800FB495 (_winrt--Udwm--Transitions--implementation--TransitionManager--UpdateAngle_--_1_--dtor$7.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::UpdateRect_::_1_::dtor$8 @ 0x1800FB7B1 (_winrt--Udwm--Transitions--implementation--TransitionManager--UpdateRect_--_1_--dtor$8.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::param::map<winrt::hstring,double>::~map<winrt::hstring,double>(
        winrt::Windows::Foundation::IUnknown *a1)
{
  if ( *((_BYTE *)a1 + 8) )
  {
    if ( *(_QWORD *)a1 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a1);
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
  }
}
