/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopSwitchAnimator@@UIVirtualDesktopSwitchAnimator2@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18012D448
 * Callers:
 *     ??1CScreenClippingExperienceManager@@EEAA@XZ @ 0x18012CBCC (--1CScreenClippingExperienceManager@@EEAA@XZ.c)
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x18012D280 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1AltEscHotkeyHandler@@MEAA@XZ @ 0x1802E1962 (--1AltEscHotkeyHandler@@MEAA@XZ.c)
 *     ??1CortanaSharedExperienceManager@@UEAA@XZ @ 0x180429F5C (--1CortanaSharedExperienceManager@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VICortanaExperienceManagerNotification@Cortana@TwinUI@@UIClosable@Foundation@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18042A300 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VICortanaExperienceManagerNotificatio.c)
 *     ??_ECortanaExperienceManagerNotification@@UEAAPEAXI@Z @ 0x18042A3D0 (--_ECortanaExperienceManagerNotification@@UEAAPEAXI@Z.c)
 *     ??1CTaskContinuityActivitiesExperienceManager@@UEAA@XZ @ 0x180433060 (--1CTaskContinuityActivitiesExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x180440854 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CQuickConnectExperienceManager@@UEAA@XZ @ 0x18044C0C0 (--1CQuickConnectExperienceManager@@UEAA@XZ.c)
 *     ??1SearchAppExperienceManager@@UEAA@XZ @ 0x18045D870 (--1SearchAppExperienceManager@@UEAA@XZ.c)
 *     ??_GSearchAppExperienceManagerNotification@@UEAAPEAXI@Z @ 0x18045DAA0 (--_GSearchAppExperienceManagerNotification@@UEAAPEAXI@Z.c)
 *     ??1UndockedSearchAppExperienceManager@@UEAA@XZ @ 0x180466528 (--1UndockedSearchAppExperienceManager@@UEAA@XZ.c)
 *     ??1CIconLoaderInternal@@UEAA@XZ @ 0x1805517A8 (--1CIconLoaderInternal@@UEAA@XZ.c)
 *     ??1VirtualDesktopSwitchAnimator@@UEAA@XZ @ 0x180616744 (--1VirtualDesktopSwitchAnimator@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18012D4C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IVirtualDesktopSwitchAnimator,IVirtualDesktopSwitchAnimator2>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IVirtualDesktopSwitchAnimator,IVirtualDesktopSwitchAnimator2>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  result = (unsigned __int64)v1 >> 63;
  if ( v1 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(2 * v1);
  return result;
}
