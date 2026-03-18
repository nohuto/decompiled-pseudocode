/*
 * XREFs of ??$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z @ 0x1800FB7DC
 * Callers:
 *     ?DeleteUnusedDevices@CDeviceManager@@AEAAXXZ @ 0x1800CE390 (-DeleteUnusedDevices@CDeviceManager@@AEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDeviceManager@@QEAV12@AEAV?$allocator@VDeviceInfo@CDeviceManager@@@0@@Z @ 0x1800FD8E8 (--$_Destroy_range@V-$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDevice.c)
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x1802225EC (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800AEEE0 (-Release@CD3DDevice@@UEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CD3DDevice>(CD3DDevice **a1)
{
  CD3DDevice *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CD3DDevice::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
