/*
 * XREFs of ??0?$heap_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z @ 0x180100E48
 * Callers:
 *     ?PutTransitionVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCTopLevelWindow3D@@@Z @ 0x180102550 (-PutTransitionVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCTopLevelWi.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::heap_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(
        _QWORD *a1,
        __int64 a2)
{
  a1[1] = &winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::`vftable';
  *a1 = &winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TransitionManager,std::tuple<winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,winrt::Udwm::Transitions::Private::IAnimationsTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  a1[3] = 1LL;
  *a1 = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,std::tuple<winrt::Udwm::Transitions::TopLevelWindow3DWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>>'};
  a1[2] = &winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>'};
  a1[4] = a2;
  if ( a2 )
    _InterlockedAdd((volatile signed __int32 *)(a2 + 8), 1u);
  a1[5] = 0LL;
  *a1 = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,std::tuple<winrt::Udwm::Transitions::TopLevelWindow3DWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>>'};
  a1[2] = &winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>'};
  return a1;
}
