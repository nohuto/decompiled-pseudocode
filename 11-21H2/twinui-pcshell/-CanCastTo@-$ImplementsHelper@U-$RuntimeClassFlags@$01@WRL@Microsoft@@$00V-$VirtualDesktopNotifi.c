/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180432014
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopThumbnailWindowFilter@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18049FC40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18049FC40.c)
 *     ?VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A0300 (-VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAU.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIInvocationAnimationHost@@UIAnimatedDismissableHost@@UIDismissalAnimationHost@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804A3C60 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIInvocationAnimationHo.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableObjectArray@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804A9200 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1804A9200.c)
 *     ?VirtualDesktopItemCollection_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A96F8 (-VirtualDesktopItemCollection_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIVirtualDesktopItemFactory@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r9

  if ( !InlineIsEqualGUID(a2, &GUID_cd403e52_deed_4c13_b437_b98380f2b1e8) )
    return 2147500034LL;
  *v2 = v3;
  return 0LL;
}
