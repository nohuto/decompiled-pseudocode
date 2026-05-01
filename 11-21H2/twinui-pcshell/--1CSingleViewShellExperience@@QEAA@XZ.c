/*
 * XREFs of ??1CSingleViewShellExperience@@QEAA@XZ @ 0x180069558
 * Callers:
 *     ??1CScreenClippingExperienceManager@@EEAA@XZ @ 0x18012D2AC (--1CScreenClippingExperienceManager@@EEAA@XZ.c)
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x18012D44C (--1CStartExperienceManager@@UEAA@XZ.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x18012D560 (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CInsightsExperienceManager@@EEAA@XZ @ 0x18012D72C (--1CInsightsExperienceManager@@EEAA@XZ.c)
 *     _CActionCenterExperienceManager::CActionCenterExperienceManager_::_1_::dtor$2 @ 0x18021E415 (_CActionCenterExperienceManager--CActionCenterExperienceManager_--_1_--dtor$2.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$12 @ 0x18021E744 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$12.c)
 *     _CControlCenterExperienceManager::CControlCenterExperienceManager_::_1_::dtor$2 @ 0x18021E81E (_CControlCenterExperienceManager--CControlCenterExperienceManager_--_1_--dtor$2.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x18034D03C (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x18035335C (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 *     ??1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ @ 0x180357DDC (--1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ.c)
 *     ??1ImeNotificationExperienceManager@@UEAA@XZ @ 0x1803600C8 (--1ImeNotificationExperienceManager@@UEAA@XZ.c)
 *     ??1CTaskContinuityActivitiesExperienceManager@@UEAA@XZ @ 0x180360F34 (--1CTaskContinuityActivitiesExperienceManager@@UEAA@XZ.c)
 *     ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x180362348 (--1CToastCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarFlyoutExperienceManager@@UEAA@XZ @ 0x180367C04 (--1CPeopleBarFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x18036AAF0 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CShoulderTapExperienceManager@@UEAA@XZ @ 0x18036C698 (--1CShoulderTapExperienceManager@@UEAA@XZ.c)
 *     ??1CQuickConnectExperienceManager@@UEAA@XZ @ 0x180376398 (--1CQuickConnectExperienceManager@@UEAA@XZ.c)
 *     ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x18037C8F4 (--1CVirtualTouchpadExperienceManager@@UEAA@XZ.c)
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x180393288 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180069820 (--1-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadPool.c)
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x180069E24 (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSingleViewShellExperience::~CSingleViewShellExperience(CSingleViewShellExperience *this)
{
  __int64 *v2; // rdi
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

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
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>((char *)this + 144);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 12);
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v3 )
    (**v3)(v3, 1LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 3);
  WindowsDeleteString(*((HSTRING *)this + 2));
  *((_QWORD *)this + 2) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 1));
  *((_QWORD *)this + 1) = 0LL;
  WindowsDeleteString(*(HSTRING *)this);
  *(_QWORD *)this = 0LL;
}
