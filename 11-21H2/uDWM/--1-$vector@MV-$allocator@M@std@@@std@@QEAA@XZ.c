/*
 * XREFs of ??1?$vector@MV?$allocator@M@std@@@std@@QEAA@XZ @ 0x18010AB14
 * Callers:
 *     _CCompFrameStats::TargetAverageFrameDuration_::_1_::dtor$0 @ 0x180064EF0 (_CCompFrameStats--TargetAverageFrameDuration_--_1_--dtor$0.c)
 *     _CCompFrameStats::TargetAverageGlitchDuration_::_1_::dtor$0 @ 0x18010AED6 (_CCompFrameStats--TargetAverageGlitchDuration_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<float>::~vector<float>(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
