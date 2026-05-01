/*
 * XREFs of ??$MakeAndInitialize@VCDesktopPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18010C59C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCDesktopPositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18010C520 (-CreateInstance@-$SimpleClassFactory@VCDesktopPositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@.c)
 * Callees:
 *     ??0CDesktopPositioner@@QEAA@XZ @ 0x1800FF4C8 (--0CDesktopPositioner@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CDesktopPositioner@@QEAAJXZ @ 0x18010C648 (-RuntimeClassInitialize@CDesktopPositioner@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@U?$ChainInterfaces@UIDesktopPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIDragDropViewCreationHandler@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIShellPositionerViewHandoffWithShowCommand@@UIShellPositionerViewHandoff@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerWithSnapActivation@@UIImmersiveMonitorNotification@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIPrivilegedOperationsConsumer@@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180211C20 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180211C20.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180211CB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180211CB0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDesktopPositioner,IUnknown,>(_QWORD *a1)
{
  CDesktopPositioner *v2; // rax
  CDesktopPositioner *v3; // rdi
  int Interface; // esi

  *a1 = 0LL;
  v2 = (CDesktopPositioner *)operator new(0x248uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = CDesktopPositioner::CDesktopPositioner(v2);
    Interface = CDesktopPositioner::RuntimeClassInitialize(v3);
    if ( Interface >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::ChainInterfaces<IDesktopPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IDragDropViewCreationHandler,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IApplicationViewStatePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IShellPositionerViewHandoffWithShowCommand,IShellPositionerViewHandoff,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IShellPositionerWithSnapActivation,IImmersiveMonitorNotification,IApplicationViewChangeListener,ITabletModeChangeListener,IPrivilegedOperationsConsumer,IWindowManagementShowMoveSizeEvents>::QueryInterface(
                    v3,
                    &GUID_00000000_0000_0000_c000_000000000046,
                    a1);
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ISnapComponent,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>::Release(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)Interface;
}
