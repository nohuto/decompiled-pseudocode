/*
 * XREFs of ??1ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F4B90
 * Callers:
 *     ??_G?$heap_implements@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800F4C90 (--_G-$heap_implements@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transiti.c)
 * Callees:
 *     ?Cancel@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180016F94 (-Cancel@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@.c)
 *     ??1?$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180017C7C (--1-$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001A708 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?subtract_reference@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@impl@winrt@@IEAAIXZ @ 0x18006ED90 (-subtract_reference@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transition.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::~ScreenRotationResponsiveTransitionHandler(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *this)
{
  std::_Ref_count_base *v2; // rcx
  __int64 v3; // rax
  bool v4; // zf
  char v5; // al
  __int64 v6; // rcx
  CBaseObject *v7; // rcx

  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler>::`vftable'{for `winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler,>'};
  *((_QWORD *)this + 4) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler>::`vftable'{for `IAnimationListener'};
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::Cancel(this);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 14);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>((__int64 *)this + 12);
  v3 = *((_QWORD *)this + 11);
  if ( v3 )
  {
    v4 = (*(_DWORD *)(v3 + 8))-- == 1;
    v5 = CDesktopManager::s_fTimelineDirty;
    if ( v4 )
      v5 = 1;
    CDesktopManager::s_fTimelineDirty = v5;
  }
  v6 = *((_QWORD *)this + 8);
  if ( v6 )
    CBaseObject::Release((CBaseObject *)(v6 + 8));
  v7 = (CBaseObject *)*((_QWORD *)this + 7);
  if ( v7 )
    CBaseObject::Release(v7);
  if ( *((_QWORD *)this + 6) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *)((char *)this + 48));
  winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>::subtract_reference((__int64)this);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
