/*
 * XREFs of ?_RetrieveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C0208290
 * Callers:
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x1C0207988 (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?_SaveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJAEBU_DXGK_COLORIMETRY@@@Z @ 0x1C03CE4F4 (-_SaveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJAEBU_DXGK_COLORIMETRY@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::_RetrieveHDRParamDriverOverrides(DxgMonitor::MonitorColorState *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  int v4; // ebx
  _DXGK_COLORIMETRY v6; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)this;
  memset(&v6, 0, sizeof(v6));
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  v4 = (*(__int64 (__fastcall **)(__int64, _DXGK_COLORIMETRY *))(*(_QWORD *)v3 + 24LL))(v3, &v6);
  if ( v4 >= 0 )
    DxgMonitor::MonitorColorState::_SaveHDRParamDriverOverrides(this, &v6);
  return (unsigned int)v4;
}
