/*
 * XREFs of ??0ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x180053BA0
 * Callers:
 *     ??$make@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?AUScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@0@XZ @ 0x180053B04 (--$make@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000D62C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

// Hidden C++ exception states: #wind=8
winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *__fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::ScreenRotationRejuvTransitionHandler(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler,winrt::Udwm::Transitions::ITransitionHandler>::`vftable';
  *((_QWORD *)this + 3) = &winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler,winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::`vftable'{for `winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler,>'};
  *((_QWORD *)this + 4) = &winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = -1;
  *((_DWORD *)this + 17) = -1;
  *((_DWORD *)this + 19) = 16777472;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 999;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_BYTE *)this + 108) = 0;
  *((_BYTE *)this + 116) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  *((_DWORD *)this + 23) = 103;
  return this;
}
