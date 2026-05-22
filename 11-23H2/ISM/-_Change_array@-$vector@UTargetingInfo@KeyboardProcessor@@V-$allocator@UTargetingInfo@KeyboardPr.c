/*
 * XREFs of ?_Change_array@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@AEAAXQEAUTargetingInfo@KeyboardProcessor@@_K1@Z @ 0x1801B1B5C
 * Callers:
 *     ??$_Emplace_reallocate@AEAUTargetingInfo@KeyboardProcessor@@@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@QEAAPEAUTargetingInfo@KeyboardProcessor@@QEAU23@AEAU23@@Z @ 0x1801B08B0 (--$_Emplace_reallocate@AEAUTargetingInfo@KeyboardProcessor@@@-$vector@UTargetingInfo@KeyboardPro.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAXPEAUTargetingInfo@KeyboardProcessor@@QEAU12@AEAV?$allocator@UTargetingInfo@KeyboardProcessor@@@0@@Z @ 0x1801B0860 (--$_Destroy_range@V-$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAXPEAUTargetingInf.c)
 */

__int64 __fastcall std::vector<KeyboardProcessor::TargetingInfo>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v6; // rcx
  __int64 result; // rax

  v6 = *(__int64 **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<KeyboardProcessor::TargetingInfo>>(v6, *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 7 << 7);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 384 * a3;
  result = a2 + 384 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
