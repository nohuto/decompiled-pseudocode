/*
 * XREFs of ?OnDisconnected@DeviceDockClientProxy@@MEAAJXZ @ 0x1801AD960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UnregisterDeviceDockClient@DeviceDockServer@@QEAAJPEAVBamoDeviceDockClientProxy@@@Z @ 0x1801ACDDC (-UnregisterDeviceDockClient@DeviceDockServer@@QEAAJPEAVBamoDeviceDockClientProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DeviceDockClientProxy::OnDisconnected(DeviceDockServer **this)
{
  DeviceDockServer *v2; // rcx

  DeviceDockServer::UnregisterDeviceDockClient(this[6], (struct BamoDeviceDockClientProxy *)this);
  v2 = this[6];
  this[6] = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v2 + 2) + 8LL))((__int64)v2 + 16);
  return 0LL;
}
