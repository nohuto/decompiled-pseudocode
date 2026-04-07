/*
 * XREFs of ?Initialize@CWindowList@@QEAAJXZ @ 0x180053924
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x180052CB0 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ @ 0x18000D5F8 (-IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x1800420E4 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TATest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004225C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TATest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?RegisterTransitionHandler@?$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Udwm@winrt@@@impl@winrt@@QEBAXAEBW4ShellTransition@Transitions@Udwm@3@AEBUITransitionHandler@563@@Z @ 0x180053AC8 (-RegisterTransitionHandler@-$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Tra.c)
 *     ??$make@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?AUScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@0@XZ @ 0x180053B04 (--$make@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V.c)
 *     ??$make@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?AUWindowMaximizeSnapTransitionHandler@Private@Transitions@Udwm@0@XZ @ 0x180053C64 (--$make@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@.c)
 *     ??$make@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?AUWindowJointResizeTransitionHandler@Private@Transitions@Udwm@0@XZ @ 0x180053D30 (--$make@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@w.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SRITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180053DD0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SRITest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005403C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x1800542B0 (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 *     ?CreateRootVisual@CWindowList@@AEAAJXZ @ 0x180054560 (-CreateRootVisual@CWindowList@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CWindowList::Initialize(CWindowList *this)
{
  int RootVisual; // ebx
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v12; // [rsp+38h] [rbp+10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  RootVisual = CWindowList::CreateRootVisual(this);
  if ( RootVisual < 0 )
  {
    v10 = 1566LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)RootVisual);
    return (unsigned int)RootVisual;
  }
  RootVisual = CWindowList::RegisterTransparencySystemPolicyChangeEvent(this);
  if ( RootVisual < 0 )
  {
    v10 = 1567LL;
    goto LABEL_15;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TATest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TATest>::GetImpl'::`2'::impl,
    1u,
    3u,
    v3);
  winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent((__int64)&v13);
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SRITest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SRITest>::GetImpl'::`2'::impl,
    v4);
  winrt::make<winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler,>(&v14);
  v12 = 1;
  winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::RegisterTransitionHandler(
    &v13,
    &v12,
    &v14);
  if ( v14 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  if ( (unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(v6, v5, v7) )
  {
    winrt::make<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler,>(&v14);
    v12 = 2;
    winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::RegisterTransitionHandler(
      &v13,
      &v12,
      &v14);
    v12 = 3;
    winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::RegisterTransitionHandler(
      &v13,
      &v12,
      &v14);
    v12 = 4;
    winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::RegisterTransitionHandler(
      &v13,
      &v12,
      &v14);
    v12 = 5;
    winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::RegisterTransitionHandler(
      &v13,
      &v12,
      &v14);
    if ( v14 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  }
  LOBYTE(v8) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_JRITest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_JRITest>::GetImpl'::`2'::impl,
    v8);
  winrt::make<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,>(&v14);
  v12 = 6;
  winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::RegisterTransitionHandler(
    &v13,
    &v12,
    &v14);
  if ( v14 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  if ( v13 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
  return 0LL;
}
