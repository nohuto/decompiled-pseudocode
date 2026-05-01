/*
 * XREFs of ??0CDesktopPositioner@@QEAA@XZ @ 0x1800FF4C8
 * Callers:
 *     ??$MakeAndInitialize@VCDesktopPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18010C59C (--$MakeAndInitialize@VCDesktopPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 * Callees:
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x180093A9C (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z @ 0x1800FF6E8 (--0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x1801383A0 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@U?$ChainInterfaces@UIDesktopPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIDragDropViewCreationHandler@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIShellPositionerViewHandoffWithShowCommand@@UIShellPositionerViewHandoff@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerWithSnapActivation@@UIImmersiveMonitorNotification@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIPrivilegedOperationsConsumer@@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@QEAA@XZ @ 0x1802124D8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponent_ea_1802124D8.c)
 */

// Hidden C++ exception states: #wind=20
CDesktopPositioner *__fastcall CDesktopPositioner::CDesktopPositioner(CDesktopPositioner *this)
{
  size_t size_of; // rax
  _QWORD *v3; // rax
  size_t v4; // rax
  _QWORD *v5; // rax

  __0__RuntimeClass_U__RuntimeClassFlags__02_WRL_Microsoft__VCImmersiveShellComponentWithGITSite__U__ChainInterfaces_UIDesktopPositioner__UIBasicPositioner__VNil_Details_WRL_Microsoft__V3456_V3456_V3456_V3456_V3456_V3456_V3456__23_U__ChainInterfaces_UIDragDropViewCreationHandler__UIBasicPositioner__VNil_Details_WRL_Microsoft__V3456_V3456_V3456_V3456_V3456_V3456_V3456__23_U__ChainInterfaces_UIApplicationViewStatePositioner__UIBasicPositioner__VNil_Details_WRL_Microsoft__V3456_V3456_V3456_V3456_V3456_V3456_V3456__23_U__ChainInterfaces_UIShellPositionerViewHandoffWithShowCommand__UIShellPositionerViewHandoff__VNil_Details_WRL_Microsoft__V3456_V3456_V3456_V3456_V3456_V3456_V3456__23_UIShellPositionerWithSnapActivation__UIImmersiveMonitorNotification__UIApplicationViewChangeListener__UITabletModeChangeListener__UIPrivilegedOperationsConsumer__UIWindowManagementShowMoveSizeEvents___WRL_Microsoft__QEAA_XZ();
  CObjectWithThreadUseDetection::CObjectWithThreadUseDetection((char *)this + 216, 0LL);
  *(_QWORD *)this = &CDesktopPositioner::`vftable';
  *((_QWORD *)this + 1) = &CDesktopPositioner::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,Microsoft::WRL::ChainInterfaces<IDesktopPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IDragDropViewCreationHandler,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IApplicationViewStatePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IShellPositionerViewHandoffWithShowCommand,IShellPositionerViewHandoff,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IShellPositionerWithSnapActivation,IImmersiveMonitorNotification,IApplicationViewChangeListener,ITabletModeChangeListener,IPrivilegedOperationsConsumer,IWindowManagementShowMoveSizeEvents>>'};
  *((_QWORD *)this + 6) = &CDesktopPositioner::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,Microsoft::WRL::ChainInterfaces<IDesktopPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IDragDropViewCreationHandler,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IApplicationViewStatePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IShellPositionerViewHandoffWithShowCommand,IShellPositionerViewHandoff,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IShellPositionerWithSnapActivation,IImmersiveMonitorNotification,IApplicationViewChangeListener,ITabletModeChangeListener,IPrivilegedOperationsConsumer,IWindowManagementShowMoveSizeEvents>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 14) = ___7CDesktopPositioner__6B__Selector_U__ImplementsHelper_U__RuntimeClassFlags__02_WRL_Microsoft___00UIWeakReferenceSource__U__ChainInterfaces_UIDesktopPositioner__UIBasicPositioner__VNil_Details_WRL_Microsoft__V3456_V3456_V3456_V3456_V3456_V3456_V3456__23_U__ChainInterfaces_UIDragDropViewCreationHandler__UIBasicPositioner__VNil_Details_WRL_Microsoft__V3456_V3456_V3456_V3456_V3456_V3456_V3456__23_U__ChainInterfaces_UIApplicationViewStatePositioner__UIBasicPositioner__VNil_Details_WRL_Microsoft__V3456_V3456_V3456_V3456_V3456_V3456_V3456__23_U__ChainInterfaces_UIShellPositionerViewHandoffWithShowCommand__UIShellPositionerViewHandoff__VNil_Details_WRL_Microsoft__V3456_V3456_V3456_V3456_V3456_V3456_V3456__23_UIShellPositionerWithSnapActivation__UIImmersiveMonitorNotification__UIApplicationViewChangeListener__UITabletModeChangeListener__UIPrivilegedOperationsConsumer__UIWindowManagementShowMoveSizeEvents___Details_WRL_Microsoft__U__ImplementsHelper_U__RuntimeClassFlags__02_WRL_Microsoft___00U__ImplementsMarker_VCImmersiveShellComponentWithGITSite___Details_23_UIWeakReferenceSource__U__ChainInterfaces_UIDesktopPositioner__UIBasicPositioner__VNil_Details_WRL_Microsoft__V3456_V3456_V3456_V3456_V3456_V3456_V3456__23_U__ChainInterfaces_UIDragDropViewCreationHandler__UIBasicPositioner__VNil_Details_WRL_Microsoft__V3456_V3456_V3456_V3456_V3456_V3456_V3456__23_U__ChainInterfaces_UIApplicationViewStatePositioner__UIBasicPositioner__VNil_Details_WRL_Microsoft__V3456_V3456_V3456_V3456_V3456_V3456_V3456__23_U__ChainInterfaces_UIShellPositionerViewHandoffWithShowCommand__UIShellPositionerViewHandoff__VNil_Details_WRL_Microsoft__V3456_V3456_V3456_V3456_V3456_V3456_V3456__23_UIShellPositionerWithSnapActivation__UIImmersiveMonitorNotification__UIApplicationViewChangeListener__UITabletModeChangeListener__UIPrivilegedOperationsConsumer__UIWindowManagementShowMoveSizeEvents___234__Details_WRL_Microsoft___;
  *((_QWORD *)this + 15) = &CDesktopPositioner::`vftable'{for `Microsoft::WRL::ChainInterfaces<IDesktopPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 16) = &CDesktopPositioner::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IDragDropViewCreationHandler,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IApplicationViewStatePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IShellPositionerViewHandoffWithShowCommand,IShellPositionerViewHandoff,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IShellPositionerWithSnapActivation,IImmersiveMonitorNotification,IApplicationViewChangeListener,ITabletModeChangeListener,IPrivilegedOperationsConsumer,IWindowManagementShowMoveSizeEvents>'};
  *((_QWORD *)this + 17) = &CDesktopPositioner::`vftable'{for `Microsoft::WRL::ChainInterfaces<IApplicationViewStatePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 18) = &CDesktopPositioner::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IShellPositionerViewHandoffWithShowCommand,IShellPositionerViewHandoff,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IShellPositionerWithSnapActivation,IImmersiveMonitorNotification,IApplicationViewChangeListener,ITabletModeChangeListener,IPrivilegedOperationsConsumer,IWindowManagementShowMoveSizeEvents>'};
  *((_QWORD *)this + 19) = &CDesktopPositioner::`vftable'{for `IShellPositionerWithSnapActivation'};
  *((_QWORD *)this + 20) = &CDesktopPositioner::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveMonitorNotification,IApplicationViewChangeListener,ITabletModeChangeListener,IPrivilegedOperationsConsumer,IWindowManagementShowMoveSizeEvents>'};
  *((_QWORD *)this + 21) = &CDesktopPositioner::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)this + 22) = &CDesktopPositioner::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ITabletModeChangeListener,IPrivilegedOperationsConsumer,IWindowManagementShowMoveSizeEvents>'};
  *((_QWORD *)this + 23) = &CDesktopPositioner::`vftable'{for `IPrivilegedOperationsConsumer'};
  *((_QWORD *)this + 24) = &CDesktopPositioner::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWindowManagementShowMoveSizeEvents>'};
  *((_DWORD *)this + 66) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 47) = v3;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  v4 = std::_Get_size_of_n<48>(1uLL);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(v4);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *((_QWORD *)this + 49) = v5;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_DWORD *)this + 136) = 0;
  *((_QWORD *)this + 69) = 1LL;
  *((_BYTE *)this + 560) = 0;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  CObjectWithThreadUseDetection::InitApartmentId((CDesktopPositioner *)((char *)this + 216));
  return this;
}
