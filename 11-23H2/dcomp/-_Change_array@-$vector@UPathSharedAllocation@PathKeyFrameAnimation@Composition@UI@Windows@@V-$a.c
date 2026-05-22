/*
 * XREFs of ?_Change_array@?$vector@UPathSharedAllocation@PathKeyFrameAnimation@Composition@UI@Windows@@V?$allocator@UPathSharedAllocation@PathKeyFrameAnimation@Composition@UI@Windows@@@std@@@std@@AEAAXQEAUPathSharedAllocation@PathKeyFrameAnimation@Composition@UI@Windows@@_K1@Z @ 0x1801789B0
 * Callers:
 *     ??$_Emplace_reallocate@UPathSharedAllocation@PathKeyFrameAnimation@Composition@UI@Windows@@@?$vector@UPathSharedAllocation@PathKeyFrameAnimation@Composition@UI@Windows@@V?$allocator@UPathSharedAllocation@PathKeyFrameAnimation@Composition@UI@Windows@@@std@@@std@@QEAAPEAUPathSharedAllocation@PathKeyFrameAnimation@Composition@UI@Windows@@QEAU23456@$$QEAU23456@@Z @ 0x180177ECC (--$_Emplace_reallocate@UPathSharedAllocation@PathKeyFrameAnimation@Composition@UI@Windows@@@-$ve.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Windows::UI::Composition::PathKeyFrameAnimation::PathSharedAllocation>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
