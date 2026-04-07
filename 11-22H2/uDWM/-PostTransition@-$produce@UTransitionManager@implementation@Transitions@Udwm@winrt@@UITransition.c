/*
 * XREFs of ?PostTransition@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransitionManager@345@@impl@winrt@@UEAAHH@Z @ 0x1800FE680
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?GetHandler@TransitionManager@implementation@Transitions@Udwm@winrt@@AEAA?AUITransitionHandler@345@W4ShellTransition@345@@Z @ 0x1800406CC (-GetHandler@TransitionManager@implementation@Transitions@Udwm@winrt@@AEAA-AUITransitionHandler@3.c)
 *     ?PostTransition@?$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800FE640 (-PostTransition@-$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Ud.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::ITransitionManager>::PostTransition(
        __int64 a1,
        int a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+38h] [rbp+10h] BYREF

  winrt::Udwm::Transitions::implementation::TransitionManager::GetHandler(
    (a1 - 8) & -(__int64)(a1 != 0),
    (winrt::Windows::Foundation::IUnknown *)&v3,
    a2);
  try
  {
    if ( v3 )
      winrt::impl::consume_Udwm_Transitions_ITransitionHandler<winrt::Udwm::Transitions::ITransitionHandler>::PostTransition(&v3);
    if ( v3 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
