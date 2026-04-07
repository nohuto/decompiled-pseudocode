/*
 * XREFs of ??1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800FABA8
 * Callers:
 *     ??_G?$heap_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800FAD7C (--_G-$heap_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winr.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_Tidy@?$_Func_class@J$$V@std@@IEAAXXZ @ 0x1800550E4 (-_Tidy@-$_Func_class@J$$V@std@@IEAAXXZ.c)
 *     ?subtract_reference@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@impl@winrt@@IEAAIXZ @ 0x18006ED90 (-subtract_reference@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transition.c)
 *     ?SetSuppressBorderUpdates@CTopLevelWindow@@QEAAX_N@Z @ 0x1800E6B94 (-SetSuppressBorderUpdates@CTopLevelWindow@@QEAAX_N@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::~TopLevelWindow3DWrapper(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *this,
        __int64 a2)
{
  __int64 v3; // rcx
  CTopLevelWindow *v4; // rcx
  CBaseObject *v5; // rcx

  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,std::tuple<winrt::Udwm::Transitions::TopLevelWindow3DWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>>'};
  *((_QWORD *)this + 2) = &winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>'};
  std::_Func_class<long,>::_Tidy(*((_QWORD *)this + 4) + 552LL, a2);
  v3 = *(_QWORD *)(*((_QWORD *)this + 4) + 336LL);
  if ( v3 )
  {
    v4 = *(CTopLevelWindow **)(v3 + 440);
    if ( v4 )
      CTopLevelWindow::SetSuppressBorderUpdates(v4, 0);
  }
  if ( *((_QWORD *)this + 5) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *)((char *)this + 40));
  v5 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v5 )
    CBaseObject::Release(v5);
  winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>::subtract_reference((__int64)this + 16);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
