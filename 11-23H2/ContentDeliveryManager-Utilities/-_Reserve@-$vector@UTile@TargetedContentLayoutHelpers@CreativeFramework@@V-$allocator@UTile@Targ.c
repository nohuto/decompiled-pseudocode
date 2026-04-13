/*
 * XREFs of ?_Reserve@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@IEAAX_K@Z @ 0x1800CCB9C
 * Callers:
 *     ?push_back@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAAX$$QEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800CCEB8 (-push_back@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@Tar.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1800049B4 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Reallocate@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@IEAAX_K@Z @ 0x1800CC948 (-_Reallocate@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@T.c)
 */

char *__fastcall std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::_Reserve(__int64 *a1)
{
  __int64 v2; // rdx
  char *result; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx

  v2 = a1[1];
  result = (char *)(0x6DB6DB6DB6DB6DB7LL * ((a1[2] - v2) >> 3));
  if ( !result )
  {
    v4 = 0x6DB6DB6DB6DB6DB7LL * ((v2 - *a1) >> 3);
    if ( v4 == 0x492492492492492LL )
      std::_Xlength_error("vector<T> too long");
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
