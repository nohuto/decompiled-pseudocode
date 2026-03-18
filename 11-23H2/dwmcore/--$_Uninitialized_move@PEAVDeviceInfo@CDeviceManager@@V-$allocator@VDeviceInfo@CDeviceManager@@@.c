/*
 * XREFs of ??$_Uninitialized_move@PEAVDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAPEAVDeviceInfo@CDeviceManager@@QEAV12@0PEAV12@AEAV?$allocator@VDeviceInfo@CDeviceManager@@@0@@Z @ 0x180100430
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVCD3DDevice@@@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@QEAAPEAVDeviceInfo@CDeviceManager@@QEAV23@AEAPEAVCD3DDevice@@@Z @ 0x180100334 (--$_Emplace_reallocate@AEAPEAVCD3DDevice@@@-$vector@VDeviceInfo@CDeviceManager@@V-$allocator@VDe.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDeviceManager@@QEAV12@AEAV?$allocator@VDeviceInfo@CDeviceManager@@@0@@Z @ 0x1800FD8E8 (--$_Destroy_range@V-$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDevice.c)
 */

CD3DDevice **__fastcall std::_Uninitialized_move<CDeviceManager::DeviceInfo *>(
        CD3DDevice **a1,
        CD3DDevice **a2,
        CD3DDevice **a3)
{
  CD3DDevice **v5; // rax
  signed __int64 v6; // r9
  char *v7; // r10
  char *v8; // rdx

  v5 = a1;
  if ( a1 != a2 )
  {
    v6 = (char *)a1 - (char *)a3;
    v7 = (char *)((char *)a3 - (char *)a1);
    do
    {
      *a3 = 0LL;
      v8 = (char *)v5 + (_QWORD)v7;
      v8[8] = 0;
      *a3 = *v5;
      a3 += 2;
      v8[8] = *((_BYTE *)v5 + (_QWORD)v7 + v6 + 8);
      *v5 = 0LL;
      v5 += 2;
    }
    while ( v5 != a2 );
  }
  std::_Destroy_range<std::allocator<CDeviceManager::DeviceInfo>>(a3, a3);
  return a3;
}
