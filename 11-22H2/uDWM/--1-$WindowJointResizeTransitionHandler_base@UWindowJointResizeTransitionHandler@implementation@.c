/*
 * XREFs of ??1?$WindowJointResizeTransitionHandler_base@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UIBitmapManager@45@@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F8FA4
 * Callers:
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::WindowJointResizeTransitionHandler_::_1_::dtor$0 @ 0x1800685AA (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransitionHandler--WindowJo.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@45@@impl@winrt@@IEAAIXZ @ 0x180055320 (-subtract_reference@-$root_implements@UWindowJointResizeTransitionHandler@implementation@Private.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler_base<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,Udwm::Transitions::IBitmapManager>::~WindowJointResizeTransitionHandler_base<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,Udwm::Transitions::IBitmapManager>(
        __int64 a1)
{
  winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::Private::WindowJointResizeTransitionHandler,Udwm::Transitions::IBitmapManager>::subtract_reference(a1 + 16);
  return winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
