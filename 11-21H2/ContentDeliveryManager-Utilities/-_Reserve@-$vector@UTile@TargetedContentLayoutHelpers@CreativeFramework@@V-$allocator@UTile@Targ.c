/*
 * XREFs of ?_Reserve@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@IEAAX_K@Z @ 0x1800E437C
 * Callers:
 *     ?push_back@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAAX$$QEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E45F8 (-push_back@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@Tar.c)
 * Callees:
 *     ?_Xlen@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEBAXXZ @ 0x18006984C (-_Xlen@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$all.c)
 *     ?_Reallocate@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@IEAAX_K@Z @ 0x1800E4088 (-_Reallocate@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@T.c)
 */

__int64 __fastcall std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::_Reserve(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx

  v2 = a1[1];
  result = 0x6DB6DB6DB6DB6DB7LL * ((a1[2] - v2) >> 3);
  if ( !result )
  {
    v4 = 0x6DB6DB6DB6DB6DB7LL * ((v2 - *a1) >> 3);
    if ( v4 == 0x492492492492492LL )
      std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
    v5 = v4 + 1;
    v6 = 0x6DB6DB6DB6DB6DB7LL * ((a1[2] - *a1) >> 3);
    v7 = 0LL;
    if ( 0x492492492492492LL - (v6 >> 1) >= v6 )
      v7 = v6 + (v6 >> 1);
    if ( v7 >= v5 )
      v5 = v7;
    return std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::_Reallocate(a1, v5);
  }
  return result;
}
