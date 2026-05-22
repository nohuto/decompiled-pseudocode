/*
 * XREFs of ??4?$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBamoDeviceDockClientProxy@@@Z @ 0x18019BEC8
 * Callers:
 *     ?RegisterDeviceDockClient@DeviceDockServer@@UEAAJPEAVBamoDeviceDockServerStub@@PEAVBamoDeviceDockClientProxy@@W4DockWatcherRoutingPolicy@Input@Internal@UI@Windows@@@Z @ 0x18019DF20 (-RegisterDeviceDockClient@DeviceDockServer@@UEAAJPEAVBamoDeviceDockServerStub@@PEAVBamoDeviceDoc.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<BamoDeviceDockClientProxy,wil::err_returncode_policy>::operator=(
        __int64 *a1,
        void (__fastcall ***a2)(_QWORD))
{
  __int64 v3; // rdi

  v3 = *a1;
  *a1 = (__int64)a2;
  if ( a2 )
    (**a2)(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}
