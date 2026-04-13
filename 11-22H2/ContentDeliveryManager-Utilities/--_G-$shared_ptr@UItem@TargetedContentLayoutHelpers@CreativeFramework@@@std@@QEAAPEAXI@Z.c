/*
 * XREFs of ??_G?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAPEAXI@Z @ 0x1800C7AF0
 * Callers:
 *     ?_Destroy@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEAAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@2@0@Z @ 0x1800CC890 (-_Destroy@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$.c)
 *     ??1?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAA@XZ @ 0x1800CF3DC (--1-$_Temp_iterator@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@s.c)
 *     _std::_Uninit_move_std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____std::allocator_std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____::_1_::catch$0 @ 0x1800DCA43 (_std--_Uninit_move_std--shared_ptr_CreativeFramework--TargetedContentLayoutHelpers--Item____std-.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060494 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::`scalar deleting destructor'(
        __int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  return a1;
}
