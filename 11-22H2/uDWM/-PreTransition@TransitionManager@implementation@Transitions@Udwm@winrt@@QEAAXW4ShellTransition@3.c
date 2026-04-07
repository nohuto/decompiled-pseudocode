/*
 * XREFs of ?PreTransition@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@345@@Z @ 0x1800FE7A8
 * Callers:
 *     ?PreTransition@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransitionManager@345@@impl@winrt@@UEAAHH@Z @ 0x1800FE750 (-PreTransition@-$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransitionM.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?GetHandler@TransitionManager@implementation@Transitions@Udwm@winrt@@AEAA?AUITransitionHandler@345@W4ShellTransition@345@@Z @ 0x1800406CC (-GetHandler@TransitionManager@implementation@Transitions@Udwm@winrt@@AEAA-AUITransitionHandler@3.c)
 *     ??$make@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1800FC704 (--$make@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA-A_PXZ.c)
 *     ?PreTransition@?$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBW4ShellTransition@Transitions@Udwm@3@AEBUTransitionState@563@@Z @ 0x1800FE710 (-PreTransition@-$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udw.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Udwm::Transitions::implementation::TransitionManager::PreTransition(unsigned __int64 a1, int a2)
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
      *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54) + 680LL) = 1;
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
