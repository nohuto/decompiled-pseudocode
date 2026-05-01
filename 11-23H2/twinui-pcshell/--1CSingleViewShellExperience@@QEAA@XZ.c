/*
 * XREFs of ??1CSingleViewShellExperience@@QEAA@XZ @ 0x180174C24
 * Callers:
 *     ??1CScreenClippingExperienceManager@@EEAA@XZ @ 0x18012CBCC (--1CScreenClippingExperienceManager@@EEAA@XZ.c)
 *     ??1CInsightsExperienceManager@@EEAA@XZ @ 0x18012CD54 (--1CInsightsExperienceManager@@EEAA@XZ.c)
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x18012CEA4 (--1CStartExperienceManager@@UEAA@XZ.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x18012D02C (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x18012D1A0 (--1CVirtualTouchpadExperienceManager@@UEAA@XZ.c)
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x18012D280 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     _CActionCenterExperienceManager::CActionCenterExperienceManager_::_1_::dtor$2 @ 0x1802C1DCE (_CActionCenterExperienceManager--CActionCenterExperienceManager_--_1_--dtor$2.c)
 *     _CControlCenterExperienceManager::CControlCenterExperienceManager_::_1_::dtor$2 @ 0x1802C2038 (_CControlCenterExperienceManager--CControlCenterExperienceManager_--_1_--dtor$2.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$12 @ 0x1802C22B5 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$12.c)
 *     _CVirtualTouchpadExperienceManager::CVirtualTouchpadExperienceManager_::_1_::dtor$1 @ 0x1802C2470 (_CVirtualTouchpadExperienceManager--CVirtualTouchpadExperienceManager_--_1_--dtor$1.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x1804172CC (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x18041DC28 (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 *     ??1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ @ 0x18042A144 (--1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ.c)
 *     ??1ImeNotificationExperienceManager@@UEAA@XZ @ 0x1804321C4 (--1ImeNotificationExperienceManager@@UEAA@XZ.c)
 *     ??1CTaskContinuityActivitiesExperienceManager@@UEAA@XZ @ 0x180433060 (--1CTaskContinuityActivitiesExperienceManager@@UEAA@XZ.c)
 *     ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x180435284 (--1CToastCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarFlyoutExperienceManager@@UEAA@XZ @ 0x18043DB7C (--1CPeopleBarFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x180440854 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CShoulderTapExperienceManager@@UEAA@XZ @ 0x1804422F8 (--1CShoulderTapExperienceManager@@UEAA@XZ.c)
 *     ??1CQuickConnectExperienceManager@@UEAA@XZ @ 0x18044C0C0 (--1CQuickConnectExperienceManager@@UEAA@XZ.c)
 *     _MeetNowExperienceManager::MeetNowExperienceManager_::_1_::dtor$9 @ 0x180471388 (_MeetNowExperienceManager--MeetNowExperienceManager_--_1_--dtor$9.c)
 *     ??1MeetNowExperienceManager@@UEAA@XZ @ 0x18047148C (--1MeetNowExperienceManager@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x180174D70 (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x18038D934 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 */

void __fastcall CSingleViewShellExperience::~CSingleViewShellExperience(CSingleViewShellExperience *this)
{
  __int64 *v2; // rdi
  struct _TP_TIMER *v3; // rcx
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  v2 = (__int64 *)((char *)this + 104);
  if ( *((_QWORD *)this + 14) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 56LL))(*v2);
  CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation(this);
  if ( *((_QWORD *)this + 22) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 56LL))(*v2);
  if ( *((_QWORD *)this + 24) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 56LL))(*v2);
  WindowsDeleteString(*((HSTRING *)this + 23));
  *((_QWORD *)this + 23) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 21));
  *((_QWORD *)this + 21) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 19);
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 18);
  if ( v3 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v3);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 12);
  v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v4 )
    (**v4)(v4, 1LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 3);
  WindowsDeleteString(*((HSTRING *)this + 2));
  *((_QWORD *)this + 2) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 1));
  *((_QWORD *)this + 1) = 0LL;
  WindowsDeleteString(*(HSTRING *)this);
  *(_QWORD *)this = 0LL;
}
