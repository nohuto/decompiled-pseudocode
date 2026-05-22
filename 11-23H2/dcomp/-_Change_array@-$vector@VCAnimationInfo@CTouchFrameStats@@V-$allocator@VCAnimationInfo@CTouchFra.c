/*
 * XREFs of ?_Change_array@?$vector@VCAnimationInfo@CTouchFrameStats@@V?$allocator@VCAnimationInfo@CTouchFrameStats@@@std@@@std@@AEAAXQEAVCAnimationInfo@CTouchFrameStats@@_K1@Z @ 0x1801A968C
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVCBatchStats@CTouchFrameStats@@AEAPEBG@?$vector@VCAnimationInfo@CTouchFrameStats@@V?$allocator@VCAnimationInfo@CTouchFrameStats@@@std@@@std@@QEAAPEAVCAnimationInfo@CTouchFrameStats@@QEAV23@AEAPEAVCBatchStats@3@AEAPEBG@Z @ 0x1801A6910 (--$_Emplace_reallocate@AEAPEAVCBatchStats@CTouchFrameStats@@AEAPEBG@-$vector@VCAnimationInfo@CTo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CTouchFrameStats::CAnimationInfo>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 3));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 200 * a3;
  result = a2 + 200 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
