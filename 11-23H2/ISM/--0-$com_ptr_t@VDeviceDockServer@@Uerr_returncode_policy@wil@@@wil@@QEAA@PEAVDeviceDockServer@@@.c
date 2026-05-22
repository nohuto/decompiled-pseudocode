/*
 * XREFs of ??0?$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@Z @ 0x1800E2F7C
 * Callers:
 *     ?OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z @ 0x1800E38A0 (-OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z.c)
 *     ?ProcessFeatureReport@DockableDeviceCollection@@AEAAJAEBUGetFeatureReportResult@1@@Z @ 0x1800E3E04 (-ProcessFeatureReport@DockableDeviceCollection@@AEAAJAEBUGetFeatureReportResult@1@@Z.c)
 *     ??0DeviceDockClientProxy@@QEAA@PEAVDeviceDockServer@@@Z @ 0x18019F7C8 (--0DeviceDockClientProxy@@QEAA@PEAVDeviceDockServer@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (**(void (__fastcall ***)(__int64))(a2 + 16))(a2 + 16);
  return a1;
}
