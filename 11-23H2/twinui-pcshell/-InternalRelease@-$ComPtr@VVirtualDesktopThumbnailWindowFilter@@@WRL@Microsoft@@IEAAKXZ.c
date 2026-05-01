/*
 * XREFs of ?InternalRelease@?$ComPtr@VVirtualDesktopThumbnailWindowFilter@@@WRL@Microsoft@@IEAAKXZ @ 0x18055F65C
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopThumbnailWindowFilter@@V1@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUITabletModeController@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUITabletModeController@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x18055ED4C (--$MakeAndInitialize@VVirtualDesktopThumbnailWindowFilter@@V1@AEAPEAUIVirtualDesktopManagerInter.c)
 *     ??1?$ComPtr@VVirtualDesktopThumbnailWindowFilter@@@WRL@Microsoft@@QEAA@XZ @ 0x18055EF3C (--1-$ComPtr@VVirtualDesktopThumbnailWindowFilter@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x18055FCE0 (-VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAU.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopThumbnailWindowFilter@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18055F990 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVi_ea_18055F990.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopThumbnailWindowFilter>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopThumbnailWindowFilter,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::Release(v1);
  }
  return result;
}
