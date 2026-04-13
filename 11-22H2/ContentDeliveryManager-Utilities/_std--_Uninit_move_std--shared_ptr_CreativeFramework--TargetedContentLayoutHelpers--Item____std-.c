/*
 * XREFs of _std::_Uninit_move_std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____std::allocator_std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____::_1_::catch$0 @ 0x1800DCA43
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180022B0C (_CxxThrowException_0.c)
 *     ??_G?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAPEAXI@Z @ 0x1800C7AF0 (--_G-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAPEAXI@Z.c)
 */

void __fastcall __noreturn std::_Uninit_move_std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____std::allocator_std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx

  for ( i = *(_QWORD *)(a2 + 72); i != *(_QWORD *)(a2 + 64); i += 16LL )
    std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::`scalar deleting destructor'(i);
  throw;
}
