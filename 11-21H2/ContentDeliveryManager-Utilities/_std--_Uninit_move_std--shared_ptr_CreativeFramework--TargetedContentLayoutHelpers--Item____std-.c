/*
 * XREFs of _std::_Uninit_move_std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____std::allocator_std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____::_1_::catch$0 @ 0x1800F6469
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800222FC (_CxxThrowException_0.c)
 *     ??$destroy@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@?$_Wrap_alloc@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@@std@@QEAAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@1@@Z @ 0x1800DBB74 (--$destroy@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@-$_Wrap_al.c)
 */

void __fastcall __noreturn std::_Uninit_move_std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____std::allocator_std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx

  for ( i = *(_QWORD *)(a2 + 72); i != *(_QWORD *)(a2 + 64); i += 16LL )
    std::_Wrap_alloc<std::allocator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>>::destroy<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(
      a1,
      i);
  throw;
}
