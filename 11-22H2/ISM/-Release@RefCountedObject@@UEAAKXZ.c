/*
 * XREFs of ?Release@RefCountedObject@@UEAAKXZ @ 0x18004C900
 * Callers:
 *     ??_GPnpDevice@@UEAAPEAXI@Z @ 0x18000EE30 (--_GPnpDevice@@UEAAPEAXI@Z.c)
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x18001BF80 (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18001C160 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ??4?$ComPtr@VKernelContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVKernelContextProvider@@@Z @ 0x180038E6C (--4-$ComPtr@VKernelContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVKernelContextProvider@@@Z.c)
 *     ?Release@OneCoreUAPInputHost@@UEAAKXZ @ 0x18004C890 (-Release@OneCoreUAPInputHost@@UEAAKXZ.c)
 *     ?Release@InputProcess@@UEAAKXZ @ 0x18004C8B0 (-Release@InputProcess@@UEAAKXZ.c)
 *     ?Release@SystemButtonProcessor@@UEAAKXZ @ 0x18004C8C0 (-Release@SystemButtonProcessor@@UEAAKXZ.c)
 *     ?Release@GameInputProcessor@@UEAAKXZ @ 0x18004C8E0 (-Release@GameInputProcessor@@UEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VGameInputProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180054F08 (-InternalRelease@-$ComPtr@VGameInputProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VGameInputProcessor@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180055B8C (--1-$com_ptr_t@VGameInputProcessor@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VKernelContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18005649C (--1-$com_ptr_t@VKernelContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ @ 0x180062EDC (-UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ.c)
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z @ 0x180063A48 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z.c)
 *     ??1?$ComPtr@VInputConfigContextProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1800729D0 (--1-$ComPtr@VInputConfigContextProvider@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4?$ComPtr@VInputConfigContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputConfigContextProvider@@@Z @ 0x180072A68 (--4-$ComPtr@VInputConfigContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputConfigContextProvi.c)
 *     _LampArrayTelemetry::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180083AD0 (_LampArrayTelemetry--GetInstance_--_2_--_dynamic_atexit_destructor_for__s_instance__.c)
 *     ??1?$ComPtr@VKernelContextProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F6B94 (--1-$ComPtr@VKernelContextProvider@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800F7DDC (--_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800F7E64 (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800F8B70 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 *     ??4?$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z @ 0x1800F9068 (--4-$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z.c)
 *     ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800F90A0 (--_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?Release@ConsumerControlManager@@UEAAKXZ @ 0x1800F9750 (-Release@ConsumerControlManager@@UEAAKXZ.c)
 *     ??1LampArrayDevice@@UEAA@XZ @ 0x1800FA47C (--1LampArrayDevice@@UEAA@XZ.c)
 *     ?CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800FA860 (-CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800FAA94 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ??1ConsumerControlNexusDevice@@EEAA@XZ @ 0x1800FC294 (--1ConsumerControlNexusDevice@@EEAA@XZ.c)
 *     ?TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800FD3D0 (-TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUI.c)
 *     ??1ConsumerControlGenericDevice@@EEAA@XZ @ 0x1800FD550 (--1ConsumerControlGenericDevice@@EEAA@XZ.c)
 *     ?CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800FD6BC (-CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 *     ??1HidLampArrayDevice@@UEAA@XZ @ 0x1800FF2FC (--1HidLampArrayDevice@@UEAA@XZ.c)
 *     ?CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800FF678 (-CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 *     ?CreateMultiUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampMultiUpdateReportBuilder@@@Z @ 0x1800FF814 (-CreateMultiUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampMultiUpdateReportBuilder@.c)
 *     ?CreateRangeUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampRangeUpdateReportBuilder@@@Z @ 0x1800FF88C (-CreateRangeUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampRangeUpdateReportBuilder@.c)
 *     ??1HidLampRangeUpdateReportBuilder@@UEAA@XZ @ 0x1801032D4 (--1HidLampRangeUpdateReportBuilder@@UEAA@XZ.c)
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x180103314 (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 *     ??1HidLampMultiUpdateReportBuilder@@UEAA@XZ @ 0x1801035D0 (--1HidLampMultiUpdateReportBuilder@@UEAA@XZ.c)
 *     ?CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z @ 0x1801036D0 (-CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z.c)
 *     ?Release@TouchProcessor@@UEAAKXZ @ 0x180109D10 (-Release@TouchProcessor@@UEAAKXZ.c)
 *     ?Release@DWMInputRouter@@UEAAKXZ @ 0x1801192C0 (-Release@DWMInputRouter@@UEAAKXZ.c)
 *     ??1GestureServices@@UEAA@XZ @ 0x180161090 (--1GestureServices@@UEAA@XZ.c)
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x1801AAB60 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 *     ?Release@MouseProcessor@@UEAAKXZ @ 0x1801C0350 (-Release@MouseProcessor@@UEAAKXZ.c)
 *     ?InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1801C3DD0 (-InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBa.c)
 *     ?OnDisconnected@InputInjectionClientProxy@@MEAAJXZ @ 0x1801C4020 (-OnDisconnected@InputInjectionClientProxy@@MEAAJXZ.c)
 *     ??1ShellGesturesProcessor@@UEAA@XZ @ 0x1801C5A78 (--1ShellGesturesProcessor@@UEAA@XZ.c)
 *     ?Release@GazeProcessor@@UEAAKXZ @ 0x1801E73E0 (-Release@GazeProcessor@@UEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
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
