/*
 * XREFs of ?Release@RefCountedObject@@UEAAKXZ @ 0x18004FB20
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18001C910 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x18001CEB0 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ??_GPnpDevice@@UEAAPEAXI@Z @ 0x18001D2E0 (--_GPnpDevice@@UEAAPEAXI@Z.c)
 *     ??1?$com_ptr_t@VGameInputProcessor@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180031CC4 (--1-$com_ptr_t@VGameInputProcessor@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x1800381B8 (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 *     ??4?$ComPtr@VKernelContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVKernelContextProvider@@@Z @ 0x18003E7BC (--4-$ComPtr@VKernelContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVKernelContextProvider@@@Z.c)
 *     ?Release@OneCoreUAPInputHost@@UEAAKXZ @ 0x18004FAB0 (-Release@OneCoreUAPInputHost@@UEAAKXZ.c)
 *     ?Release@InputProcess@@UEAAKXZ @ 0x18004FAD0 (-Release@InputProcess@@UEAAKXZ.c)
 *     ?Release@SystemButtonProcessor@@UEAAKXZ @ 0x18004FAE0 (-Release@SystemButtonProcessor@@UEAAKXZ.c)
 *     ?Release@GameInputProcessor@@UEAAKXZ @ 0x18004FB00 (-Release@GameInputProcessor@@UEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VGameInputProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x18005418C (-InternalRelease@-$ComPtr@VGameInputProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VKernelContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18005570C (--1-$com_ptr_t@VKernelContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ @ 0x18005A4F8 (-UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ.c)
 *     ??1?$ComPtr@VInputConfigContextProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1800601A0 (--1-$ComPtr@VInputConfigContextProvider@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4?$ComPtr@VInputConfigContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputConfigContextProvider@@@Z @ 0x180060238 (--4-$ComPtr@VInputConfigContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputConfigContextProvi.c)
 *     _LampArrayTelemetry::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x18006FF50 (_LampArrayTelemetry--GetInstance_--_2_--_dynamic_atexit_destructor_for__s_instance__.c)
 *     ??1?$ComPtr@VKernelContextProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1800E7C14 (--1-$ComPtr@VKernelContextProvider@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800E8E5C (--_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800E8EE4 (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800E9C54 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 *     ??4?$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z @ 0x1800EA14C (--4-$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z.c)
 *     ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800EA184 (--_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?Release@ConsumerControlManager@@UEAAKXZ @ 0x1800EA840 (-Release@ConsumerControlManager@@UEAAKXZ.c)
 *     ??1LampArrayDevice@@UEAA@XZ @ 0x1800EB4DC (--1LampArrayDevice@@UEAA@XZ.c)
 *     ?CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800EB8C0 (-CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800EBAF4 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ??1ConsumerControlNexusDevice@@EEAA@XZ @ 0x1800ED180 (--1ConsumerControlNexusDevice@@EEAA@XZ.c)
 *     ?TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800EE2C0 (-TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUI.c)
 *     ??1ConsumerControlGenericDevice@@EEAA@XZ @ 0x1800EE440 (--1ConsumerControlGenericDevice@@EEAA@XZ.c)
 *     ?CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800EE5AC (-CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 *     ??1HidLampArrayDevice@@UEAA@XZ @ 0x1800F00D0 (--1HidLampArrayDevice@@UEAA@XZ.c)
 *     ?CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800F0448 (-CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 *     ?CreateMultiUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampMultiUpdateReportBuilder@@@Z @ 0x1800F05E4 (-CreateMultiUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampMultiUpdateReportBuilder@.c)
 *     ?CreateRangeUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampRangeUpdateReportBuilder@@@Z @ 0x1800F065C (-CreateRangeUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampRangeUpdateReportBuilder@.c)
 *     ??1HidLampRangeUpdateReportBuilder@@UEAA@XZ @ 0x1800F31A8 (--1HidLampRangeUpdateReportBuilder@@UEAA@XZ.c)
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x1800F31E8 (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 *     ??1HidLampMultiUpdateReportBuilder@@UEAA@XZ @ 0x1800F34B0 (--1HidLampMultiUpdateReportBuilder@@UEAA@XZ.c)
 *     ?CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z @ 0x1800F35B0 (-CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z.c)
 *     ?Release@TouchProcessor@@UEAAKXZ @ 0x1800FB280 (-Release@TouchProcessor@@UEAAKXZ.c)
 *     ?Release@DWMInputRouter@@UEAAKXZ @ 0x18010AED0 (-Release@DWMInputRouter@@UEAAKXZ.c)
 *     ??1GestureServices@@UEAA@XZ @ 0x180152DB0 (--1GestureServices@@UEAA@XZ.c)
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x18019CB80 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 *     ?Release@MouseProcessor@@UEAAKXZ @ 0x1801B2370 (-Release@MouseProcessor@@UEAAKXZ.c)
 *     ?InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1801B66B0 (-InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBa.c)
 *     ?OnDisconnected@InputInjectionClientProxy@@MEAAJXZ @ 0x1801B6900 (-OnDisconnected@InputInjectionClientProxy@@MEAAJXZ.c)
 *     ??1ShellGesturesProcessor@@UEAA@XZ @ 0x1801B834C (--1ShellGesturesProcessor@@UEAA@XZ.c)
 *     ?Release@GazeProcessor@@UEAAKXZ @ 0x1801D9B70 (-Release@GazeProcessor@@UEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RefCountedObject::Release(RefCountedObject *this)
{
  unsigned __int32 v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    v4 = *(_QWORD *)this;
    *((_DWORD *)this + 2) = 1;
    (*(void (**)(void))(v4 + 32))();
    v5 = *(_QWORD *)this;
    *((_DWORD *)this + 2) = 0;
    (*(void (__fastcall **)(RefCountedObject *, __int64))(v5 + 24))(this, 1LL);
  }
  return v2;
}
