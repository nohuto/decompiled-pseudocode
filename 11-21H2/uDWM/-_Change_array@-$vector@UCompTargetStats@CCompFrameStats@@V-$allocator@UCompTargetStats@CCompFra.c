/*
 * XREFs of ?_Change_array@?$vector@UCompTargetStats@CCompFrameStats@@V?$allocator@UCompTargetStats@CCompFrameStats@@@std@@@std@@AEAAXQEAUCompTargetStats@CCompFrameStats@@_K1@Z @ 0x18000391C
 * Callers:
 *     ??$_Emplace_reallocate@AEBUCompTargetStats@CCompFrameStats@@@?$vector@UCompTargetStats@CCompFrameStats@@V?$allocator@UCompTargetStats@CCompFrameStats@@@std@@@std@@QEAAPEAUCompTargetStats@CCompFrameStats@@QEAU23@AEBU23@@Z @ 0x180003794 (--$_Emplace_reallocate@AEBUCompTargetStats@CCompFrameStats@@@-$vector@UCompTargetStats@CCompFram.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CCompFrameStats::CompTargetStats>::_Change_array(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 8 * ((a1[2] - v6) >> 3));
  *a1 = a2;
  a1[1] = a2 + 136 * a3;
  result = a2 + 136 * a4;
  a1[2] = result;
  return result;
}
