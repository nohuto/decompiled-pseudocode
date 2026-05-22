/*
 * XREFs of ??$_Uninitialized_move@PEAUTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAPEAUTargetingInfo@KeyboardProcessor@@QEAU12@0PEAU12@AEAV?$allocator@UTargetingInfo@KeyboardProcessor@@@0@@Z @ 0x1801BEA8C
 * Callers:
 *     ??$_Emplace_reallocate@AEAUTargetingInfo@KeyboardProcessor@@@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@QEAAPEAUTargetingInfo@KeyboardProcessor@@QEAU23@AEAU23@@Z @ 0x1801BE890 (--$_Emplace_reallocate@AEAUTargetingInfo@KeyboardProcessor@@@-$vector@UTargetingInfo@KeyboardPro.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAXPEAUTargetingInfo@KeyboardProcessor@@QEAU12@AEAV?$allocator@UTargetingInfo@KeyboardProcessor@@@0@@Z @ 0x1801BE840 (--$_Destroy_range@V-$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAXPEAUTargetingInf.c)
 *     ??0TargetingInfo@KeyboardProcessor@@QEAA@$$QEAU01@@Z @ 0x1801BED30 (--0TargetingInfo@KeyboardProcessor@@QEAA@$$QEAU01@@Z.c)
 */

__int64 *__fastcall std::_Uninitialized_move<KeyboardProcessor::TargetingInfo *>(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 i; // r11
  __int64 v6; // r11

  for ( i = a1; i != a2; i = v6 + 384 )
  {
    KeyboardProcessor::TargetingInfo::TargetingInfo(a3, i);
    a3 += 48;
  }
  std::_Destroy_range<std::allocator<KeyboardProcessor::TargetingInfo>>(a3, a3);
  return a3;
}
