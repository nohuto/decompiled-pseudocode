/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIShellPositionerViewHandoffWithShowCommand@@UIShellPositionerViewHandoff@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerWithSnapActivation@@UIImmersiveMonitorNotification@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIPrivilegedOperationsConsumer@@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180212B78
 * Callers:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIWeakReferenceSource@@U?$ChainInterfaces@UIDesktopPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIDragDropViewCreationHandler@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIShellPositionerViewHandoffWithShowCommand@@UIShellPositionerViewHandoff@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerWithSnapActivation@@UIImmersiveMonitorNotification@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIPrivilegedOperationsConsumer@@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180212C64 (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$ImplementsMar.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IApplicationViewStatePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IShellPositionerViewHandoffWithShowCommand,IShellPositionerViewHandoff,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IShellPositionerWithSnapActivation,IImmersiveMonitorNotification,IApplicationViewChangeListener,ITabletModeChangeListener,IPrivilegedOperationsConsumer,IWindowManagementShowMoveSizeEvents>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_329d2470_eefd_4972_9d8a_9e7cffe3b767;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 1)) = GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 2)) = GUID_ce1ad7e6_6f3e_45e0_bbf3_cca1181639d0;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 3)) = GUID_ee010e17_919a_4068_868b_675acf787303;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 4)) = GUID_78316bfe_418a_43f2_b998_912548d9625e;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 5)) = GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 6)) = GUID_727f9e97_76ee_497b_a942_b6371328485c;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 7)) = GUID_86fb57a6_3c81_4f40_a971_6280be4e526e;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 8)) = GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 9)) = GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc;
  result = (unsigned int)(v3 + 10);
  *a2 = result;
  return result;
}
