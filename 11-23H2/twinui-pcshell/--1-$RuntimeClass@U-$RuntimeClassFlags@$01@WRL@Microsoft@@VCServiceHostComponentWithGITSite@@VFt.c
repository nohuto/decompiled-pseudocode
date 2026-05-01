/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCServiceHostComponentWithGITSite@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x18063DCD0
 * Callers:
 *     _StartupAppMonitor::StartupAppMonitor_::_1_::dtor$0 @ 0x1802B975F (_StartupAppMonitor--StartupAppMonitor_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CServiceHostComponent@@UEAA@XZ @ 0x18063DF84 (--1CServiceHostComponent@@UEAA@XZ.c)
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CServiceHostComponentWithGITSite,Microsoft::WRL::FtmBase>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CServiceHostComponentWithGITSite,Microsoft::WRL::FtmBase>(
        CWRLObjectWithGITSite *this)
{
  *((_DWORD *)this + 35) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 16);
  CServiceHostComponent::~CServiceHostComponent((CWRLObjectWithGITSite *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
}
