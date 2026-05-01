/*
 * XREFs of ?InternalRelease@?$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x1804A91D4
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemCollection@@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x1804A8CB8 (--$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktop.c)
 *     ??1?$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1804A8E5C (--1-$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?VirtualDesktopItemCollection_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A96F8 (-VirtualDesktopItemCollection_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIVirtualDesktopItemFactory@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableObjectArray@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1804A92A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObs_ea_1804A92A0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ObservableObjectArray,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::Release(v1);
  }
  return result;
}
