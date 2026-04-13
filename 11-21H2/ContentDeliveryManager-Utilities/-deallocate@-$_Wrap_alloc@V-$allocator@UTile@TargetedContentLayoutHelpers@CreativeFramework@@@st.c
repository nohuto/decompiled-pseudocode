/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_K@Z @ 0x1800E44E0
 * Callers:
 *     _std::vector_CreativeFramework::TargetedContentLayoutHelpers::Tile_std::allocator_CreativeFramework::TargetedContentLayoutHelpers::Tile___::_Reallocate_::_1_::catch$1 @ 0x1800F714D (_std--vector_CreativeFramework--TargetedContentLayoutHelpers--Tile_std--allocator_CreativeFramew.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<CreativeFramework::TargetedContentLayoutHelpers::Tile>>::deallocate(
        __int64 a1,
        void *a2)
{
  operator delete(a2);
}
