/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@@std@@QEAAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@2@_K@Z @ 0x1800E44F8
 * Callers:
 *     _std::vector_std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item__std::allocator_std::shared_ptr_CreativeFramework::TargetedContentLayoutHelpers::Item_____::_Reallocate_::_1_::catch$0 @ 0x1800F7199 (_std--vector_std--shared_ptr_CreativeFramework--TargetedContentLayoutHelpers--Item__std--allocat.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>>::deallocate(
        __int64 a1,
        void *a2)
{
  operator delete(a2);
}
