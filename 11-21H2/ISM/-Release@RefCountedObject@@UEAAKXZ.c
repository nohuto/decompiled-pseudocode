/*
 * XREFs of ?Release@RefCountedObject@@UEAAKXZ @ 0x180047390
 * Callers:
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x18003D6C4 (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18003D980 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x18003DF70 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ??_GPnpDevice@@UEAAPEAXI@Z @ 0x18003E550 (--_GPnpDevice@@UEAAPEAXI@Z.c)
 *     ?Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z @ 0x180040FF8 (-Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z.c)
 *     ??1?$com_ptr_t@VGameInputProcessor@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180043C5C (--1-$com_ptr_t@VGameInputProcessor@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VShellGesturesProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVShellGesturesProcessor@@@Z @ 0x180047020 (--$MakeAndInitialize@VShellGesturesProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVShellGestu.c)
 *     ?Release@TouchProcessor@@UEAAKXZ @ 0x180047340 (-Release@TouchProcessor@@UEAAKXZ.c)
 *     ?Release@InputProcess@@UEAAKXZ @ 0x180047360 (-Release@InputProcess@@UEAAKXZ.c)
 *     ?Release@HeatProcessor@@UEAAKXZ @ 0x180047370 (-Release@HeatProcessor@@UEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VGameInputProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180048B48 (-InternalRelease@-$ComPtr@VGameInputProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VKernelContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800494A4 (--1-$com_ptr_t@VKernelContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _LampArrayTelemetry::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180058BA0 (_LampArrayTelemetry--GetInstance_--_2_--_dynamic_atexit_destructor_for__s_instance__.c)
 *     ?Release@MPCFocusTarget@@UEAAKXZ @ 0x180080490 (-Release@MPCFocusTarget@@UEAAKXZ.c)
 *     ??1?$ComPtr@VInjectionRawInputProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1800CE568 (--1-$ComPtr@VInjectionRawInputProvider@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Create@InjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800CE860 (-Create@InjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 *     ??_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800CF7A4 (--_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800CF82C (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800D0314 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 *     ??4?$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z @ 0x1800D080C (--4-$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z.c)
 *     ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800D0848 (--_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?Release@ConsumerControlManager@@UEAAKXZ @ 0x1800D0EE0 (-Release@ConsumerControlManager@@UEAAKXZ.c)
 *     ??1LampArrayDevice@@UEAA@XZ @ 0x1800D1B18 (--1LampArrayDevice@@UEAA@XZ.c)
 *     ?CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800D1EA0 (-CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800D20F4 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ??1ConsumerControlNexusDevice@@EEAA@XZ @ 0x1800D3570 (--1ConsumerControlNexusDevice@@EEAA@XZ.c)
 *     ?TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800D46A0 (-TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUI.c)
 *     ??1ConsumerControlGenericDevice@@EEAA@XZ @ 0x1800D4820 (--1ConsumerControlGenericDevice@@EEAA@XZ.c)
 *     ?CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800D498C (-CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 *     ??1HidLampArrayDevice@@UEAA@XZ @ 0x1800D6690 (--1HidLampArrayDevice@@UEAA@XZ.c)
 *     ?CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800D6A0C (-CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 *     ?CreateMultiUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampMultiUpdateReportBuilder@@@Z @ 0x1800D6BA8 (-CreateMultiUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampMultiUpdateReportBuilder@.c)
 *     ?CreateRangeUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampRangeUpdateReportBuilder@@@Z @ 0x1800D6C20 (-CreateRangeUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampRangeUpdateReportBuilder@.c)
 *     ??1HidLampRangeUpdateReportBuilder@@UEAA@XZ @ 0x1800D9728 (--1HidLampRangeUpdateReportBuilder@@UEAA@XZ.c)
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x1800D9768 (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 *     ??1HidLampMultiUpdateReportBuilder@@UEAA@XZ @ 0x1800D9A30 (--1HidLampMultiUpdateReportBuilder@@UEAA@XZ.c)
 *     ?CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z @ 0x1800D9B30 (-CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z.c)
 *     ?Release@DWMInputRouter@@UEAAKXZ @ 0x1800F1A80 (-Release@DWMInputRouter@@UEAAKXZ.c)
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x18017D9DC (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 *     ?Release@MouseProcessor@@UEAAKXZ @ 0x180194460 (-Release@MouseProcessor@@UEAAKXZ.c)
 *     ?InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1801986A0 (-InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBa.c)
 *     ?OnDisconnected@InputInjectionClientProxy@@MEAAJXZ @ 0x1801988F0 (-OnDisconnected@InputInjectionClientProxy@@MEAAJXZ.c)
 *     ??_GShellGesturesProcessor@@UEAAPEAXI@Z @ 0x18019A1D0 (--_GShellGesturesProcessor@@UEAAPEAXI@Z.c)
 *     ?Release@GazeProcessor@@UEAAKXZ @ 0x1801BB7F0 (-Release@GazeProcessor@@UEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
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
