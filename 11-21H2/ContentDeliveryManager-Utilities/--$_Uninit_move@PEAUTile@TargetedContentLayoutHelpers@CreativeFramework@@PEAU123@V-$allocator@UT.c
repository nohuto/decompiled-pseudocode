/*
 * XREFs of ??$_Uninit_move@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@U123@@std@@YAPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@00AEAU?$_Wrap_alloc@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800DBA00
 * Callers:
 *     ?_Reallocate@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@IEAAX_K@Z @ 0x1800E4088 (-_Reallocate@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@T.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180066A7C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 */

__int64 __fastcall std::_Uninit_move<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *,std::allocator<CreativeFramework::TargetedContentLayoutHelpers::Tile>,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdi

  if ( a1 != a2 )
  {
    v5 = a1 + 40;
    do
    {
      *(_QWORD *)(a3 + 24) = 7LL;
      *(_QWORD *)(a3 + 16) = 0LL;
      *(_WORD *)a3 = 0;
      std::wstring::_Assign_rv((_QWORD *)a3, (_QWORD *)(v5 - 40));
      *(_QWORD *)(a3 + 32) = *(_QWORD *)(v5 - 8);
      *(_QWORD *)(a3 + 40) = *(_QWORD *)v5;
      *(_BYTE *)(a3 + 48) = *(_BYTE *)(v5 + 8);
      a3 += 56LL;
      v5 += 56LL;
    }
    while ( v5 - 40 != a2 );
  }
  return a3;
}
