/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopThumbnailWindowFilter@@QEAAJPEAUIVirtualDesktopManagerInternal@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1804A0010
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopThumbnailWindowFilter@@V1@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUITabletModeController@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUITabletModeController@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x18049F3D4 (--$MakeAndInitialize@VVirtualDesktopThumbnailWindowFilter@@V1@AEAPEAUIVirtualDesktopManagerInter.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerInternal@@@Z @ 0x1800A25DC (--4-$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopMana.c)
 *     ??4?$ComPtr@UITabletModeController@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabletModeController@@@Z @ 0x1800FD9E4 (--4-$ComPtr@UITabletModeController@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabletModeController@@@Z.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_0 @ 0x18049FCD8 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_18049FCD8.c)
 */

__int64 __fastcall VirtualDesktopThumbnailWindowFilter::RuntimeClassInitialize(
        VirtualDesktopThumbnailWindowFilter *this,
        struct IVirtualDesktopManagerInternal *a2,
        struct ITabletModeController *a3,
        struct IVirtualDesktopNotificationService *a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<IVirtualDesktopManagerInternal>::operator=((__int64 *)this + 3, (__int64)a2);
  Microsoft::WRL::ComPtr<ITabletModeController>::operator=((__int64 *)this + 4, (__int64)a3);
  v7 = EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_0(
         (_QWORD *)this + 6,
         (__int64)a4);
  v8 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7E,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopthumbnailwindowfilter.cpp",
      (const char *)(unsigned int)v7);
  return v8;
}
