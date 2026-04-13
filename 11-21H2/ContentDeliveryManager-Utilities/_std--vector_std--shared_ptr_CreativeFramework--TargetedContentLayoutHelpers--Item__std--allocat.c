/*
 * XREFs of _std::vector_std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item__std::allocator_std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item_____::_Reallocate_::_1_::catch$0 @ 0x1800F7199
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800222FC (_CxxThrowException_0.c)
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@@std@@QEAAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@2@_K@Z @ 0x1800E44F8 (-deallocate@-$_Wrap_alloc@V-$allocator@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@Creative.c)
 */

void __fastcall __noreturn std::vector_std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item__std::allocator_std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item_____::_Reallocate_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>>::deallocate(
    a1,
    *(void **)(a2 + 88));
  throw;
}
