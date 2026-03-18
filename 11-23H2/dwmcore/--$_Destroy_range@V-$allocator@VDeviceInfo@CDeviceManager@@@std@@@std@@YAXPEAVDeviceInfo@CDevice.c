/*
 * XREFs of ??$_Destroy_range@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDeviceManager@@QEAV12@AEAV?$allocator@VDeviceInfo@CDeviceManager@@@0@@Z @ 0x1800FD8E8
 * Callers:
 *     ?_Change_array@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@AEAAXQEAVDeviceInfo@CDeviceManager@@_K1@Z @ 0x1800FF974 (-_Change_array@-$vector@VDeviceInfo@CDeviceManager@@V-$allocator@VDeviceInfo@CDeviceManager@@@st.c)
 *     ??$_Uninitialized_move@PEAVDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAPEAVDeviceInfo@CDeviceManager@@QEAV12@0PEAV12@AEAV?$allocator@VDeviceInfo@CDeviceManager@@@0@@Z @ 0x180100430 (--$_Uninitialized_move@PEAVDeviceInfo@CDeviceManager@@V-$allocator@VDeviceInfo@CDeviceManager@@@.c)
 *     ??1CDeviceManager@@QEAA@XZ @ 0x18010E9E0 (--1CDeviceManager@@QEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801B381C (--1CComposition@@MEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1801B4774 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z @ 0x1800FB7DC (--$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<CDeviceManager::DeviceInfo>>(CD3DDevice **a1, CD3DDevice **a2)
{
  CD3DDevice **v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = ReleaseInterface<CD3DDevice>(v3);
      v3 += 2;
    }
    while ( v3 != a2 );
  }
  return result;
}
