/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180066768
 * Callers:
 *     ??1CTaskWindow@@UEAA@XZ @ 0x18006672C (--1CTaskWindow@@UEAA@XZ.c)
 *     ??1CNetworkExperienceManager@@UEAA@XZ @ 0x18012CE54 (--1CNetworkExperienceManager@@UEAA@XZ.c)
 *     ??1?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@Windows@@MEAA@XZ @ 0x1802DCCAC (--1-$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U-$DefaultEqualityPredica.c)
 *     ??_G?$SimpleVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@V?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z @ 0x1802DCE30 (--_G-$SimpleVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@V-$Vector@PEAV.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIImmersiveRawInputMouseNotification@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803C7DD0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIImmersiveRawInputMouseNotification@.c)
 *     ??1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ @ 0x18042A144 (--1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ.c)
 *     ??_EIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x18042A450 (--_EIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??1ImeNotificationExperienceManager@@UEAA@XZ @ 0x1804321C4 (--1ImeNotificationExperienceManager@@UEAA@XZ.c)
 *     ??_ENotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@UEAAPEAXI@Z @ 0x18043E160 (--_ENotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@UEAAPEAXI@Z.c)
 *     ??_EHostingAnimationListener@@UEAAPEAXI@Z @ 0x18050D450 (--_EHostingAnimationListener@@UEAAPEAXI@Z.c)
 *     ??_GAppViewIconLoader@@UEAAPEAXI@Z @ 0x180646FC0 (--_GAppViewIconLoader@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18012D4C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewIconLoaderNotifications>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewIconLoaderNotifications>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  result = (unsigned __int64)v1 >> 63;
  if ( v1 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(2 * v1);
  return result;
}
