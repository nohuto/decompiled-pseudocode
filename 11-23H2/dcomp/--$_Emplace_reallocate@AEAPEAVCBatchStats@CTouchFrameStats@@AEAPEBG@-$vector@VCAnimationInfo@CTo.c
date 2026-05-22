/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAVCBatchStats@CTouchFrameStats@@AEAPEBG@?$vector@VCAnimationInfo@CTouchFrameStats@@V?$allocator@VCAnimationInfo@CTouchFrameStats@@@std@@@std@@QEAAPEAVCAnimationInfo@CTouchFrameStats@@QEAV23@AEAPEAVCBatchStats@3@AEAPEBG@Z @ 0x1801A6910
 * Callers:
 *     ??$emplace_back@AEAPEAVCBatchStats@CTouchFrameStats@@AEAPEBG@?$vector@VCAnimationInfo@CTouchFrameStats@@V?$allocator@VCAnimationInfo@CTouchFrameStats@@@std@@@std@@QEAA?A_TAEAPEAVCBatchStats@CTouchFrameStats@@AEAPEBG@Z @ 0x1801A6B6C (--$emplace_back@AEAPEAVCBatchStats@CTouchFrameStats@@AEAPEBG@-$vector@VCAnimationInfo@CTouchFram.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800691F8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800E5D98 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAVCAnimationInfo@CTouchFrameStats@@V?$allocator@VCAnimationInfo@CTouchFrameStats@@@std@@@std@@YAPEAVCAnimationInfo@CTouchFrameStats@@QEAV12@0PEAV12@AEAV?$allocator@VCAnimationInfo@CTouchFrameStats@@@0@@Z @ 0x1801A6AC0 (--$_Uninitialized_move@PEAVCAnimationInfo@CTouchFrameStats@@V-$allocator@VCAnimationInfo@CTouchF.c)
 *     ?_Change_array@?$vector@VCAnimationInfo@CTouchFrameStats@@V?$allocator@VCAnimationInfo@CTouchFrameStats@@@std@@@std@@AEAAXQEAVCAnimationInfo@CTouchFrameStats@@_K1@Z @ 0x1801A968C (-_Change_array@-$vector@VCAnimationInfo@CTouchFrameStats@@V-$allocator@VCAnimationInfo@CTouchFra.c)
 */

unsigned __int16 *__fastcall std::vector<CTouchFrameStats::CAnimationInfo>::_Emplace_reallocate<CTouchFrameStats::CBatchStats * &,unsigned short const * &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        size_t **a4)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned __int16 *v14; // r12
  size_t *v15; // rdi
  __int64 v16; // rdx
  _QWORD *v17; // r8
  __int64 v18; // rcx
  unsigned __int16 *result; // rax
  __int64 v20; // [rsp+20h] [rbp-48h]
  void *v21; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+70h] [rbp+8h]

  v6 = (a2 - *a1) / 200;
  v7 = 0x8F5C28F5C28F5C29uLL * ((a1[1] - *a1) >> 3);
  if ( v7 == 0x147AE147AE147AELL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = 0x8F5C28F5C28F5C29uLL * ((a1[2] - *a1) >> 3);
  v10 = v9 >> 1;
  if ( v9 <= 0x147AE147AE147AELL - (v9 >> 1) )
  {
    v11 = v8;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    v22 = v11;
    if ( v11 > 0x147AE147AE147AELL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0x147AE147AE147AELL;
    v22 = 0x147AE147AE147AELL;
  }
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(200 * v11);
  v13 = v12;
  v20 = v12;
  try
  {
    v14 = (unsigned __int16 *)(v12 + 200 * v6);
    v15 = *a4;
    *(_QWORD *)v14 = *a3;
    *((_QWORD *)v14 + 1) = 0LL;
    memset_0(v14 + 8, 0, 0xB4uLL);
    StringCchCopyW(v14 + 8, 0x5AuLL, v15);
    v16 = a1[1];
    v17 = (_QWORD *)v13;
    v18 = *a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<CTouchFrameStats::CAnimationInfo *>(v18, a2, v13);
      v17 = v14 + 100;
      v16 = a1[1];
      v18 = a2;
    }
    std::_Uninitialized_move<CTouchFrameStats::CAnimationInfo *>(v18, v16, v17);
    std::vector<CTouchFrameStats::CAnimationInfo>::_Change_array(a1, v13, v8, v11, v20);
    result = v14;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v21, 200 * v22);
    throw;
  }
  return result;
}
