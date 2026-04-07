/*
 * XREFs of ??1?$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180017C7C
 * Callers:
 *     ??1CStoryboard@@UEAA@XZ @ 0x1800161E0 (--1CStoryboard@@UEAA@XZ.c)
 *     ??_ECMicaSystemBackdropVisual@@UEAAPEAXI@Z @ 0x180017C10 (--_ECMicaSystemBackdropVisual@@UEAAPEAXI@Z.c)
 *     ?SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z @ 0x180017E90 (-SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z.c)
 *     ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x180023EB0 (-UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Create@CCompositor@@SAJPEAPEAV1@@Z @ 0x18004A9E0 (-Create@CCompositor@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x18004AED8 (-InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?Initialize@CCompositionEffectCache@@AEAAJXZ @ 0x18004B174 (-Initialize@CCompositionEffectCache@@AEAAJXZ.c)
 *     _CSystemBackdropVisual::SetState_::_1_::dtor$0 @ 0x180067292 (_CSystemBackdropVisual--SetState_--_1_--dtor$0.c)
 *     _CTopLevelWindow::UpdateCaptionAccentColor_::_1_::dtor$1 @ 0x1800675D0 (_CTopLevelWindow--UpdateCaptionAccentColor_--_1_--dtor$1.c)
 *     _CDesktopManager::CDesktopManager_::_1_::dtor$1 @ 0x18006825A (_CDesktopManager--CDesktopManager_--_1_--dtor$1.c)
 *     _CCompositor::Create_::_1_::dtor$0 @ 0x180068348 (_CCompositor--Create_--_1_--dtor$0.c)
 *     _CGraphicsDeviceManager::InitializeGraphicsDevice_::_1_::dtor$3 @ 0x180068390 (_CGraphicsDeviceManager--InitializeGraphicsDevice_--_1_--dtor$3.c)
 *     _CCompositionEffectCache::Initialize_::_1_::dtor$0 @ 0x1800683A2 (_CCompositionEffectCache--Initialize_--_1_--dtor$0.c)
 *     ??1CCompositionEffectCache@@QEAA@XZ @ 0x1800AD404 (--1CCompositionEffectCache@@QEAA@XZ.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800B3C8C (--1CDesktopManager@@EEAA@XZ.c)
 *     ??1CDisplayAnimatedVisual@@MEAA@XZ @ 0x1800B75B8 (--1CDisplayAnimatedVisual@@MEAA@XZ.c)
 *     ??1CGraphicsDeviceManager@@MEAA@XZ @ 0x1800C1AA8 (--1CGraphicsDeviceManager@@MEAA@XZ.c)
 *     ??1CScreenRotation@@MEAA@XZ @ 0x1800D6C90 (--1CScreenRotation@@MEAA@XZ.c)
 *     ??_GCSystemBackdropVisual@@UEAAPEAXI@Z @ 0x1800E3760 (--_GCSystemBackdropVisual@@UEAAPEAXI@Z.c)
 *     ??1ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F4B90 (--1ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA.c)
 *     ?GetDesktopCompositor@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCCompositor@@@Z @ 0x180101AD0 (-GetDesktopCompositor@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCCompos.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
