/*
 * XREFs of ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x18012D6A4
 * Callers:
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x18012D44C (--1CStartExperienceManager@@UEAA@XZ.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x18012D560 (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$24 @ 0x180217B96 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$24.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$25 @ 0x180217BAF (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$25.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$26 @ 0x180217BC8 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$26.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$27 @ 0x180217BE1 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$27.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$28 @ 0x180217BFA (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$28.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$29 @ 0x180217C13 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$29.c)
 *     _CActionCenterExperienceManager::CActionCenterExperienceManager_::_1_::dtor$4 @ 0x18021E447 (_CActionCenterExperienceManager--CActionCenterExperienceManager_--_1_--dtor$4.c)
 *     _CActionCenterExperienceManager::CActionCenterExperienceManager_::_1_::dtor$5 @ 0x18021E460 (_CActionCenterExperienceManager--CActionCenterExperienceManager_--_1_--dtor$5.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$17 @ 0x18021E7C1 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$17.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$18 @ 0x18021E7DA (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$18.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x18034D03C (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x180362348 (--1CToastCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x18036AAF0 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x18037C8F4 (--1CVirtualTouchpadExperienceManager@@UEAA@XZ.c)
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x180393288 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x1803A543C (--1CortanaDesktopExperienceView@@UEAA@XZ.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18045B060 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIVirtualDesktopHotkeyHandlerPrivate@@UIVirtualDesktopHotkeyHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EE220 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_1800EE220.c)
 */

void __fastcall CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper(
        CExperienceManagerAnimationHelper *this,
        volatile int *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  v3 = *((_QWORD *)this + 3);
  if ( v3 )
    DestroyWindow(*(HWND *)(v3 + 24));
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    *((_QWORD *)this + 3) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktopHotkeyHandlerPrivate,IVirtualDesktopHotkeyHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release(
      v4,
      a2);
  }
}
