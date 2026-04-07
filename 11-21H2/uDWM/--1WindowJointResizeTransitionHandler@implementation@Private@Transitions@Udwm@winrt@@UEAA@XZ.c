/*
 * XREFs of ??1WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F79BC
 * Callers:
 *     ??_EWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAAPEAXI@Z @ 0x1800F7B90 (--_EWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAAPEAXI@.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?subtract_reference@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@impl@winrt@@IEAAIXZ @ 0x180045348 (-subtract_reference@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transition.c)
 *     ?Cleanup@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F7C48 (-Cleanup@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAX.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::~WindowJointResizeTransitionHandler(
        winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *this)
{
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler>::`vftable';
  winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::Cleanup(this);
  if ( *((_QWORD *)this + 4) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *)((char *)this + 32));
  if ( *((_QWORD *)this + 3) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *)((char *)this + 24));
  winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>::subtract_reference((__int64)this);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
