/*
 * XREFs of ?Initialize@CWindowList@@QEAAJXZ @ 0x180040C6C
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800493DC (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ @ 0x18001DA8C (-IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x180040DF0 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     ?RegisterTransitionHandler@?$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBW4ShellTransition@Transitions@Udwm@3@AEBUITransitionHandler@563@@Z @ 0x180040F50 (-RegisterTransitionHandler@-$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Tra.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004C408 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation@@@detai.c)
 *     ??$make@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x180053010 (--$make@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@w.c)
 *     ??$make@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1800530AC (--$make@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@.c)
 *     ??$make@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x180053168 (--$make@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x180056870 (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 *     ?CreateRootVisual@CWindowList@@AEAAJXZ @ 0x180057BF4 (-CreateRootVisual@CWindowList@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CWindowList::Initialize(CWindowList *this)
{
  int RootVisual; // ebx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  RootVisual = CWindowList::CreateRootVisual(this);
  if ( RootVisual < 0 )
  {
    v7 = 1684LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)RootVisual,
      v8);
    return (unsigned int)RootVisual;
  }
  RootVisual = CWindowList::RegisterTransparencySystemPolicyChangeEvent(this);
  if ( RootVisual < 0 )
  {
    v7 = 1685LL;
    goto LABEL_15;
  }
  winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent(&v11);
  LOBYTE(v3) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation>::GetImpl'::`2'::impl,
    v3);
  winrt::make<winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler,>(&v12);
  v10 = 1;
  winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::RegisterTransitionHandler(
    &v11,
    &v10,
    &v12);
  if ( v12 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  if ( (unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(v5, v4) )
  {
    winrt::make<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler,>(&v12);
    v10 = 2;
    winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::RegisterTransitionHandler(
      &v11,
      &v10,
      &v12);
    v10 = 3;
    winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::RegisterTransitionHandler(
      &v11,
      &v10,
      &v12);
    v10 = 4;
    winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::RegisterTransitionHandler(
      &v11,
      &v10,
      &v12);
    v10 = 5;
    winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::RegisterTransitionHandler(
      &v11,
      &v10,
      &v12);
    if ( v12 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  }
  winrt::make<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,>(&v12);
  v10 = 6;
  winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::RegisterTransitionHandler(
    &v11,
    &v10,
    &v12);
  if ( v12 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  if ( v11 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  return 0LL;
}
