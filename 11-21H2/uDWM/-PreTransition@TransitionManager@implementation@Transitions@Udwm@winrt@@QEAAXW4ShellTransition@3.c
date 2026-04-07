/*
 * XREFs of ?PreTransition@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@345@@Z @ 0x1800FACD8
 * Callers:
 *     ?PreTransition@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransitionManager@345@@impl@winrt@@UEAAHH@Z @ 0x1800FAC80 (-PreTransition@-$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransitionM.c)
 * Callees:
 *     ?PreTransition@?$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udwm@winrt@@@impl@winrt@@QEBAXAEBW4ShellTransition@Transitions@Udwm@3@AEBUTransitionState@563@@Z @ 0x180013D58 (-PreTransition@-$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udw.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?GetHandler@TransitionManager@implementation@Transitions@Udwm@winrt@@AEAA?AUITransitionHandler@345@W4ShellTransition@345@@Z @ 0x180040C14 (-GetHandler@TransitionManager@implementation@Transitions@Udwm@winrt@@AEAA-AUITransitionHandler@3.c)
 *     ??$make@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA?AUTransitionState@Transitions@Udwm@0@XZ @ 0x180044C10 (--$make@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA-AUTransitionState@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Udwm::Transitions::implementation::TransitionManager::PreTransition(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  v3 = a2;
  winrt::Udwm::Transitions::implementation::TransitionManager::GetHandler(
    a1,
    (winrt::Windows::Foundation::IUnknown *)&v4,
    a2);
  if ( v4 )
  {
    winrt::make<winrt::Udwm::Transitions::implementation::TransitionState,>(&v5);
    if ( a2 == 1 )
      *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52) + 696LL) = 1;
    winrt::impl::consume_Udwm_Transitions_ITransitionHandler<winrt::Udwm::Transitions::ITransitionHandler>::PreTransition(
      &v4,
      (unsigned int *)&v3,
      &v5);
    if ( v5 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
  }
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
}
