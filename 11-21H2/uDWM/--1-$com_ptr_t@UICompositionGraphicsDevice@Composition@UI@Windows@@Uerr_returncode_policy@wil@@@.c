/*
 * XREFs of ??1?$com_ptr_t@UICompositionGraphicsDevice@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FDF0
 * Callers:
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x18000FD6C (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ?Initialize@CCompositor@@IEAAJXZ @ 0x180052A5C (-Initialize@CCompositor@@IEAAJXZ.c)
 *     ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180056214 (-InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ??1CDisplayAnimatedVisual@@MEAA@XZ @ 0x18005ABC8 (--1CDisplayAnimatedVisual@@MEAA@XZ.c)
 *     _CCompositor::Initialize_::_1_::dtor$0 @ 0x180065DF6 (_CCompositor--Initialize_--_1_--dtor$0.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::ScreenRotationRejuvTransitionHandler_::_1_::dtor$5 @ 0x180065EF2 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationRejuvTransitionHa_ea_180065EF2.c)
 *     _CGraphicsDeviceManager::InitializeGraphicsDevice_::_1_::dtor$3 @ 0x180066094 (_CGraphicsDeviceManager--InitializeGraphicsDevice_--_1_--dtor$3.c)
 *     ??1CCompositor@@MEAA@XZ @ 0x1800A9804 (--1CCompositor@@MEAA@XZ.c)
 *     ??1CGraphicsDeviceManager@@MEAA@XZ @ 0x1800BD774 (--1CGraphicsDeviceManager@@MEAA@XZ.c)
 *     ??1CScreenRotation@@MEAA@XZ @ 0x1800D2060 (--1CScreenRotation@@MEAA@XZ.c)
 *     ??1CStoryboard@@UEAA@XZ @ 0x1800D499C (--1CStoryboard@@UEAA@XZ.c)
 *     ??1ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F3660 (--1ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::UI::Composition::ICompositionGraphicsDevice,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionGraphicsDevice,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
