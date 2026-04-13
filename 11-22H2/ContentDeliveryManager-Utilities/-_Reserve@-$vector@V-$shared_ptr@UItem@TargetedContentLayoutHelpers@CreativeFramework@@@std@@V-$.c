/*
 * XREFs of ?_Reserve@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800CCD0C
 * Callers:
 *     ?push_back@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@2@@Z @ 0x1800CCF90 (-push_back@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1800049B4 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Reallocate@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800CCB28 (-_Reallocate@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@.c)
 */

void __fastcall std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Reserve(
        _QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rcx

  v2 = a1[1];
  if ( !((a1[2] - v2) >> 4) )
  {
    v3 = (v2 - *a1) >> 4;
    if ( v3 == 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v4 = v3 + 1;
    v5 = (__int64)(a1[2] - *a1) >> 4;
    v6 = 0LL;
    if ( 0xFFFFFFFFFFFFFFFLL - (v5 >> 1) >= v5 )
      v6 = v5 + (v5 >> 1);
    if ( v6 >= v4 )
      v4 = v6;
    std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Reallocate((__int64)a1, v4);
  }
}
