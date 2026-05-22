/*
 * XREFs of ??$emplace_back@AEAPEAVCBatchStats@CTouchFrameStats@@AEAPEBG@?$vector@VCAnimationInfo@CTouchFrameStats@@V?$allocator@VCAnimationInfo@CTouchFrameStats@@@std@@@std@@QEAA?A_TAEAPEAVCBatchStats@CTouchFrameStats@@AEAPEBG@Z @ 0x1801A6B6C
 * Callers:
 *     ?StartAnimation@CTouchFrameStats@@UEAAXPEBG@Z @ 0x1801A9440 (-StartAnimation@CTouchFrameStats@@UEAAXPEBG@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800691F8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??$_Emplace_reallocate@AEAPEAVCBatchStats@CTouchFrameStats@@AEAPEBG@?$vector@VCAnimationInfo@CTouchFrameStats@@V?$allocator@VCAnimationInfo@CTouchFrameStats@@@std@@@std@@QEAAPEAVCAnimationInfo@CTouchFrameStats@@QEAV23@AEAPEAVCBatchStats@3@AEAPEBG@Z @ 0x1801A6910 (--$_Emplace_reallocate@AEAPEAVCBatchStats@CTouchFrameStats@@AEAPEBG@-$vector@VCAnimationInfo@CTo.c)
 */

unsigned __int16 *__fastcall std::vector<CTouchFrameStats::CAnimationInfo>::emplace_back<CTouchFrameStats::CBatchStats * &,unsigned short const * &>(
        __int64 *a1,
        __int64 *a2,
        size_t **a3)
{
  _QWORD *v5; // rdx
  size_t *v6; // rdi
  unsigned __int16 *v7; // rbx
  __int64 v8; // rax
  unsigned __int16 *result; // rax

  v5 = (_QWORD *)a1[1];
  if ( v5 == (_QWORD *)a1[2] )
    return std::vector<CTouchFrameStats::CAnimationInfo>::_Emplace_reallocate<CTouchFrameStats::CBatchStats * &,unsigned short const * &>(
             a1,
             (__int64)v5,
             a2,
             a3);
  v6 = *a3;
  v7 = (unsigned __int16 *)(v5 + 2);
  v8 = *a2;
  v5[1] = 0LL;
  *v5 = v8;
  memset_0(v5 + 2, 0, 0xB4uLL);
  StringCchCopyW(v7, 0x5AuLL, v6);
  result = (unsigned __int16 *)a1[1];
  a1[1] = (__int64)(result + 100);
  return result;
}
