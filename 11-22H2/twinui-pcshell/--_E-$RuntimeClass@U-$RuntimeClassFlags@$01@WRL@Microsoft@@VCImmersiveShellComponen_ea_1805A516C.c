/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@U?$ChainInterfaces@UISurfaceHubPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1805A516C
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@U?$ChainInterfaces@UISurfaceHubPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@@WRL@Microsoft@@WCI@EAAPEAXI@Z @ 0x1802A5910 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_1802A5910.c)
 * Callees:
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x1800FFD58 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801026C4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CWRLObjectWithGITSite *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,Microsoft::WRL::ChainInterfaces<ISurfaceHubPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IApplicationViewChangeListener,ITabletModeChangeListener>::`vector deleting destructor'(
        CWRLObjectWithGITSite *this,
        char a2)
{
  *((_DWORD *)this + 37) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((CWRLObjectWithGITSite *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
