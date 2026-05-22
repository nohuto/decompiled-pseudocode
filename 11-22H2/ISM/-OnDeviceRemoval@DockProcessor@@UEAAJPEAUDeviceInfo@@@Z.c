/*
 * XREFs of ?OnDeviceRemoval@DockProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801E6640
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnDockDeviceRemoval@DeviceDockServer@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x1801AAA00 (-OnDockDeviceRemoval@DeviceDockServer@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 */

__int64 __fastcall DockProcessor::OnDeviceRemoval(DeviceDockServer **this, struct DeviceInfo *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = DeviceDockServer::OnDockDeviceRemoval(this[9], this[5]);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x50,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\lib\\dockprocessor.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
