/*
 * XREFs of ??$MakeAndInitialize@VKioskPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18019A29C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VKioskPositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18019A220 (-CreateInstance@-$SimpleClassFactory@VKioskPositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AE.c)
 * Callees:
 *     ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x1800EFA3C (-RuntimeClassInitialize@KioskPositioner@@QEAAJXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@U?$ChainInterfaces@UIKioskPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIPositionerApplicationClosePolicy@@UIApplicationViewChangeListener@@UIInternalFullScreenHandler@@UIWindowManagementShowMoveSizeEvents@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@U?$ChainInterfaces@UIKioskPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIPositionerApplicationClosePolicy@@UIApplicationViewChangeListener@@UIInternalFullScreenHandler@@UIWindowManagementShowMoveSizeEvents@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800EFBCC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCI_ea_1800EFBCC.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@U?$ChainInterfaces@UIKioskPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIPositionerApplicationClosePolicy@@UIApplicationViewChangeListener@@UIInternalFullScreenHandler@@UIWindowManagementShowMoveSizeEvents@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141F40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180141F40.c)
 *     ??0KioskPositioner@@QEAA@XZ @ 0x18019A324 (--0KioskPositioner@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<KioskPositioner,IUnknown,>(_QWORD *a1)
{
  KioskPositioner *v2; // rax
  KioskPositioner *v3; // rdi
  volatile int *v4; // rdx
  int v5; // ebx

  *a1 = 0LL;
  v2 = (KioskPositioner *)operator new(0x2A8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = KioskPositioner::KioskPositioner(v2);
    v5 = KioskPositioner::RuntimeClassInitialize(v3);
    if ( v5 >= 0 )
      v5 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::ChainInterfaces<IKioskPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IPositionerApplicationClosePolicy,IApplicationViewChangeListener,IInternalFullScreenHandler,IWindowManagementShowMoveSizeEvents,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>>(
             (__int64)v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::ChainInterfaces<IKioskPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IPositionerApplicationClosePolicy,IApplicationViewChangeListener,IInternalFullScreenHandler,IWindowManagementShowMoveSizeEvents,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::Release(
        (__int64)v3,
        v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
