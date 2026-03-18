/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C009F334
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C00A5850 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0005D98 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0019988 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0019BB8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00853FC (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C008EDC4 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C009E990 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C009EBB4 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C009F238 (-RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C009F618 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C009F6EC (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00A1368 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C00A3758 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00A42EC (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP::Allocate(
        VIDMM_RECYCLE_HEAP_MGR **this,
        unsigned __int64 a2,
        __int64 a3,
        struct VIDMM_RECYCLE_MULTIRANGE **a4,
        void **a5,
        void **a6,
        unsigned __int8 *a7,
        unsigned __int8 a8)
{
  __int64 v9; // rbx
  __int64 v12; // r14
  struct VIDMM_RECYCLE_MULTIRANGE *BlockAndRange; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rdx
  unsigned __int8 v18; // dl
  int v19; // eax
  unsigned __int8 v20; // r10
  unsigned int v21; // r15d
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // edx
  void *v26; // rcx
  __int64 v27; // rdx
  void *v28; // rcx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  unsigned __int8 v30; // r8
  struct VIDMM_RECYCLE_RANGE *v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // [rsp+30h] [rbp-20h] BYREF
  __int64 v35; // [rsp+38h] [rbp-18h]
  char v36; // [rsp+40h] [rbp-10h]

  v34 = -1;
  v9 = (unsigned int)a3;
  v35 = 0LL;
  if ( (qword_1C0076010 & 2) != 0 )
  {
    v36 = 1;
    v34 = 8004;
    if ( byte_1C0076981 < 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 8004);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v12 = v9;
  WdLogSingleEntry3(4LL, this, a2, v9);
  BlockAndRange = VIDMM_RECYCLE_HEAP::LookupSufficientRange((VIDMM_RECYCLE_HEAP *)this, a2, v9, a8);
  if ( BlockAndRange
    || (WdLogSingleEntry3(4LL, this, a2, v12), (BlockAndRange = VIDMM_RECYCLE_HEAP::CreateBlockAndRange(this)) != 0LL) )
  {
    v17 = *((_QWORD *)BlockAndRange + 6);
    if ( *((_QWORD *)BlockAndRange + 5) - v17 > a2 )
      VIDMM_RECYCLE_MULTIRANGE::SplitAt(BlockAndRange, a2 + v17 - *((_QWORD *)BlockAndRange + 4));
    VIDMM_RECYCLE_HEAP::RemoveOverlappingMultirangesFromSearch((VIDMM_RECYCLE_HEAP *)this, BlockAndRange);
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(this, *((unsigned int *)BlockAndRange + 22), BlockAndRange);
    v19 = VIDMM_RECYCLE_MULTIRANGE::Commit(BlockAndRange, v18, a7);
    v20 = 0;
    v21 = v19;
    if ( v19 >= 0 )
    {
      v22 = *((_QWORD *)BlockAndRange + 9);
      v23 = 0LL;
      v24 = *(_QWORD *)(v22 + 120);
      if ( v24 != *(_QWORD *)(v22 + 72) + 72LL )
        v23 = v24 - 120;
      if ( v23 && !*(_DWORD *)(v23 + 64) )
      {
        VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(*((_QWORD *)BlockAndRange + 10), v23);
        v20 = 0;
      }
      *a4 = BlockAndRange;
      v25 = **(_DWORD **)(*((_QWORD *)BlockAndRange + 10) + 32LL);
      if ( (unsigned int)(v25 - 3) > 3 || (unsigned int)(v25 - 5) <= 1 )
        v26 = (void *)*((_QWORD *)BlockAndRange + 6);
      else
        v26 = (void *)(*((_QWORD *)BlockAndRange + 20) + *((_QWORD *)BlockAndRange + 21));
      *a5 = v26;
      if ( a6 )
      {
        v27 = *((_QWORD *)BlockAndRange + 10);
        if ( (unsigned int)(**(_DWORD **)(v27 + 32) - 9) <= 1 )
          v28 = (void *)(*((_QWORD *)BlockAndRange + 6) + *(_QWORD *)(v27 + 120) - *(_QWORD *)(v27 + 40));
        else
          v28 = 0LL;
        *a6 = v28;
      }
      NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
      v30 = 1;
      v31 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 9);
      while ( 1 )
      {
        if ( *((_DWORD *)NextRange + 20) > 1u )
          v30 = v20;
        if ( NextRange == v31 )
          break;
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      }
      *a7 = v30;
      *(_QWORD *)(*((_QWORD *)this[1] + 1) + 136LL) += *((_QWORD *)BlockAndRange + 5) - *((_QWORD *)BlockAndRange + 4);
    }
    else
    {
      WdLogSingleEntry5(3LL, BlockAndRange, a2, v12, v19, **((_QWORD **)this[1] + 1));
      VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees((VIDMM_RECYCLE_HEAP *)this, BlockAndRange);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(this[1], BlockAndRange);
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( v36 && byte_1C0076981 < 0 )
      McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit, v33, v34);
    return v21;
  }
  else
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( v36 )
    {
      if ( byte_1C0076981 < 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v34);
    }
    return 3221225495LL;
  }
}
