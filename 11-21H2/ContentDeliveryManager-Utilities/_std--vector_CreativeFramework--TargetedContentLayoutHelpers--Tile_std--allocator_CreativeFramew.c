/*
 * XREFs of _std::vector_CreativeFramework::TargetedContentLayoutHelpers::Tile_std::allocator_CreativeFramework::TargetedContentLayoutHelpers::Tile___::_Reallocate_::_1_::catch$1 @ 0x1800F714D
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800222FC (_CxxThrowException_0.c)
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_K@Z @ 0x1800E44E0 (-deallocate@-$_Wrap_alloc@V-$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@st.c)
 */

void __fastcall __noreturn std::vector_CreativeFramework::TargetedContentLayoutHelpers::Tile_std::allocator_CreativeFramework::TargetedContentLayoutHelpers::Tile___::_Reallocate_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<CreativeFramework::TargetedContentLayoutHelpers::Tile>>::deallocate(
    a1,
    *(void **)(a2 + 104));
  throw;
}
