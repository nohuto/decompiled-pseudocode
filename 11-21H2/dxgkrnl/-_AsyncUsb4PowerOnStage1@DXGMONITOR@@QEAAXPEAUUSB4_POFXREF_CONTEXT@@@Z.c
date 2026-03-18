/*
 * XREFs of ?_AsyncUsb4PowerOnStage1@DXGMONITOR@@QEAAXPEAUUSB4_POFXREF_CONTEXT@@@Z @ 0x1C0157938
 * Callers:
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1C03B62E0 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?AddUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor@@QEAAJPEAUUSB4_POFXREF_CONTEXT@@@Z @ 0x1C0157F9C (-AddUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor@@QEAAJPEAUUSB4_POFXREF_CONTEXT@@@Z.c)
 */

void __fastcall DXGMONITOR::_AsyncUsb4PowerOnStage1(DXGMONITOR *this, struct USB4_POFXREF_CONTEXT *a2)
{
  _QWORD *v2; // rbx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 33);
  if ( *((_BYTE *)v2 + 8) )
  {
    DxgMonitor::Usb4HostRouterPoFxRef::AddUsb4HRPowerRef((DxgMonitor::Usb4HostRouterPoFxRef *)(v2 + 8), a2);
    *((_DWORD *)a2 + 6) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2);
    *(_QWORD *)((char *)a2 + 28) = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v2 + 8LL))(
                                                *v2,
                                                &v4);
  }
}
