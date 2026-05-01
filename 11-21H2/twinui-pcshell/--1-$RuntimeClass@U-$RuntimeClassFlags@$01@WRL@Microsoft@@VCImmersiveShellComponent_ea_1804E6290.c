/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIDesktopVisibilityService@@UIFullScreenPositionerNotification@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x1804E6290
 * Callers:
 *     _CPerMonitorDesktopVisibilityService::CPerMonitorDesktopVisibilityService_::_1_::dtor$0 @ 0x18021CD71 (_CPerMonitorDesktopVisibilityService--CPerMonitorDesktopVisibilityService_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1800D2460 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IDesktopVisibilityService,IFullScreenPositionerNotification,Microsoft::WRL::FtmBase>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IDesktopVisibilityService,IFullScreenPositionerNotification,Microsoft::WRL::FtmBase>(
        CWRLObjectWithGITSite *this)
{
  *((_DWORD *)this + 39) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 18);
  CImmersiveShellComponent::~CImmersiveShellComponent((CWRLObjectWithGITSite *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
}
