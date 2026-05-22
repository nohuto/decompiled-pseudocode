/*
 * XREFs of ??$_Uninitialized_move@PEAVCAnimationInfo@CTouchFrameStats@@V?$allocator@VCAnimationInfo@CTouchFrameStats@@@std@@@std@@YAPEAVCAnimationInfo@CTouchFrameStats@@QEAV12@0PEAV12@AEAV?$allocator@VCAnimationInfo@CTouchFrameStats@@@0@@Z @ 0x1801A6AC0
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVCBatchStats@CTouchFrameStats@@AEAPEBG@?$vector@VCAnimationInfo@CTouchFrameStats@@V?$allocator@VCAnimationInfo@CTouchFrameStats@@@std@@@std@@QEAAPEAVCAnimationInfo@CTouchFrameStats@@QEAV23@AEAPEAVCBatchStats@3@AEAPEBG@Z @ 0x1801A6910 (--$_Emplace_reallocate@AEAPEAVCBatchStats@CTouchFrameStats@@AEAPEBG@-$vector@VCAnimationInfo@CTo.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall std::_Uninitialized_move<CTouchFrameStats::CAnimationInfo *>(_OWORD *a1, _OWORD *a2, _OWORD *a3)
{
  _OWORD *result; // rax
  _OWORD *i; // r9
  _OWORD *v5; // r8
  _OWORD *v6; // rcx
  __int128 v7; // xmm1

  result = a3;
  for ( i = a1; i != a2; *((_QWORD *)v5 + 8) = *((_QWORD *)v6 + 8) )
  {
    v5 = result + 8;
    v6 = i + 8;
    *result = *i;
    result[1] = i[1];
    result[2] = i[2];
    result[3] = i[3];
    result[4] = i[4];
    result[5] = i[5];
    result[6] = i[6];
    result = (_OWORD *)((char *)result + 200);
    v7 = i[7];
    i = (_OWORD *)((char *)i + 200);
    *(v5 - 1) = v7;
    *v5 = *v6;
    v5[1] = v6[1];
    v5[2] = v6[2];
    v5[3] = v6[3];
  }
  return result;
}
