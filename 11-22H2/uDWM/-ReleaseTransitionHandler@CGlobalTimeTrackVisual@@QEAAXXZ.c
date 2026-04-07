/*
 * XREFs of ?ReleaseTransitionHandler@CGlobalTimeTrackVisual@@QEAAXXZ @ 0x180105584
 * Callers:
 *     ?UnregisterGlobalTimeChanged@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F6890 (-UnregisterGlobalTimeChanged@ScreenRotationResponsiveTransitionHandler@implementation@Private@Tr.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004C408 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation@@@detai.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009E730 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800D6D18 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

void __fastcall CGlobalTimeTrackVisual::ReleaseTransitionHandler(CGlobalTimeTrackVisual *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)this + 36, &v4);
  if ( v4 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v4);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation>::GetImpl'::`2'::impl,
    1u,
    v2,
    v3);
  v4 = 0LL;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)this + 37, &v4);
  if ( v4 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v4);
}
