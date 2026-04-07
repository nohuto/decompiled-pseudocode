/*
 * XREFs of ?release_ref@?$com_ptr@UTransitionManager@implementation@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18005FAAC
 * Callers:
 *     _dynamic_atexit_destructor_for__winrt::Udwm::Transitions::implementation::TransitionManager::m_instance__ @ 0x180066AE0 (_dynamic_atexit_destructor_for__winrt--Udwm--Transitions--implementation--TransitionManager--m_i.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180007AB4 (-unconditional_release_ref@-$com_ptr@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@wi.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::Udwm::Transitions::implementation::TransitionManager>::release_ref(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::unconditional_release_ref(a1);
  return result;
}
