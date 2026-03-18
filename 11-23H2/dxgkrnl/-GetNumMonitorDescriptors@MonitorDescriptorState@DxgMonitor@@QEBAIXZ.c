/*
 * XREFs of ?GetNumMonitorDescriptors@MonitorDescriptorState@DxgMonitor@@QEBAIXZ @ 0x1C020E75C
 * Callers:
 *     ?GetNumDescriptors@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEA_K@Z @ 0x1C020C4D0 (-GetNumDescriptors@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTO.c)
 *     ?HasDescriptor@DXGMONITOR@@UEBA_NXZ @ 0x1C03C9070 (-HasDescriptor@DXGMONITOR@@UEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::GetNumMonitorDescriptors(
        DxgMonitor::MonitorDescriptorState *this)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  v1 = *((_QWORD *)this + 16);
  if ( v1 && (v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1)) != 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  else
    return 0LL;
}
