/*
 * XREFs of ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@@std@@@std@@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@@std@@@0@0Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800CF090
 * Callers:
 *     ?SortAndValidateLists@TargetedContentLayoutHelpers@CreativeFramework@@YAXAEBQEB_WAEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@1AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@4@@Z @ 0x1800CF888 (-SortAndValidateLists@TargetedContentLayoutHelpers@CreativeFramework@@YAXAEBQEB_WAEAV-$vector@V-.c)
 * Callees:
 *     ??$_Stable_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800CECC0 (--$_Stable_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV.c)
 *     ??1?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAA@XZ @ 0x1800CF38C (--1-$_Temp_iterator@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@s.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::stable_sort<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>>>,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
        char *a1,
        __int64 *a2,
        char a3)
{
  __int64 result; // rax
  __int128 v4; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-28h]
  __int64 v6; // [rsp+48h] [rbp-20h]
  __int128 *v7; // [rsp+50h] [rbp-18h]

  if ( a1 != (char *)a2 )
  {
    v4 = 0LL;
    v5 = 0LL;
    v6 = ((((char *)a2 - a1) >> 4) + 1) / 2;
    v7 = &v4;
    std::_Stable_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,__int64,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
      a1,
      a2,
      ((char *)a2 - a1) >> 4,
      (__int64)&v4,
      a3);
    return std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(&v4);
  }
  return result;
}
