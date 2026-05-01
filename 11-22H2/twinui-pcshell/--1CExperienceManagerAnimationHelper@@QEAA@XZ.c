/*
 * XREFs of ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x18012D354
 * Callers:
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x18012CEA4 (--1CStartExperienceManager@@UEAA@XZ.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x18012D02C (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x18012D1A0 (--1CVirtualTouchpadExperienceManager@@UEAA@XZ.c)
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x18012D280 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$23 @ 0x1802B6D4B (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$23.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$24 @ 0x1802B6D64 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$24.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$25 @ 0x1802B6D7D (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$25.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$26 @ 0x1802B6D96 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$26.c)
 *     _CActionCenterExperienceManager::CActionCenterExperienceManager_::_1_::dtor$5 @ 0x1802C1E19 (_CActionCenterExperienceManager--CActionCenterExperienceManager_--_1_--dtor$5.c)
 *     _CActionCenterExperienceManager::CActionCenterExperienceManager_::_1_::dtor$6 @ 0x1802C1E32 (_CActionCenterExperienceManager--CActionCenterExperienceManager_--_1_--dtor$6.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$20 @ 0x1802C237D (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$20.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$21 @ 0x1802C2396 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$21.c)
 *     _CVirtualTouchpadExperienceManager::CVirtualTouchpadExperienceManager_::_1_::dtor$7 @ 0x1802C24EA (_CVirtualTouchpadExperienceManager--CVirtualTouchpadExperienceManager_--_1_--dtor$7.c)
 *     _CVirtualTouchpadExperienceManager::CVirtualTouchpadExperienceManager_::_1_::dtor$8 @ 0x1802C2503 (_CVirtualTouchpadExperienceManager--CVirtualTouchpadExperienceManager_--_1_--dtor$8.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x1804172CC (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x180435284 (--1CToastCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x180440854 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 *     _MeetNowExperienceManager::MeetNowExperienceManager_::_1_::dtor$6 @ 0x180471352 (_MeetNowExperienceManager--MeetNowExperienceManager_--_1_--dtor$6.c)
 *     _MeetNowExperienceManager::MeetNowExperienceManager_::_1_::dtor$7 @ 0x180471362 (_MeetNowExperienceManager--MeetNowExperienceManager_--_1_--dtor$7.c)
 *     ??1MeetNowExperienceManager@@UEAA@XZ @ 0x18047148C (--1MeetNowExperienceManager@@UEAA@XZ.c)
 *     ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x180480968 (--1CortanaDesktopExperienceView@@UEAA@XZ.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18050C644 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper(
        CExperienceManagerAnimationHelper *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    DestroyWindow(*(HWND *)(v2 + 24));
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    *((_QWORD *)this + 3) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveMonitorNotification>::Release(v3);
  }
}
