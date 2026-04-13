/*
 * XREFs of ??0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@$$QEAU012@@Z @ 0x1800C714C
 * Callers:
 *     ??$_Uninit_move@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@U123@@std@@YAPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@00AEAU?$_Wrap_alloc@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800C60B8 (--$_Uninit_move@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@V-$allocator@UT.c)
 *     ?push_back@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAAX$$QEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800CCEB8 (-push_back@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@Tar.c)
 *     ??$_Insertion_sort1@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@U123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@00@Z @ 0x1800CDDD0 (--$_Insertion_sort1@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@U123@@std@@YAXPEAUT.c)
 *     ??$_Make_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0PEA_J0@Z @ 0x1800CE100 (--$_Make_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTile@.c)
 *     ??$_Pop_heap_0@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@U123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@00@Z @ 0x1800CE90C (--$_Pop_heap_0@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@U123@@std@@YAXPEAUTile@T.c)
 *     ??$swap@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXAEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800CF170 (--$swap@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXAEAUTile@TargetedContentL.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180051870 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::Tile::Tile(__int64 a1, __int64 a2)
{
  std::wstring::wstring(a1, a2);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_BYTE *)(a1 + 48) = *(_BYTE *)(a2 + 48);
  return a1;
}
