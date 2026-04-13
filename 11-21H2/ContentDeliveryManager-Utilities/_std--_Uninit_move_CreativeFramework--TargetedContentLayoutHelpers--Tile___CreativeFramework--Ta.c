/*
 * XREFs of _std::_Uninit_move_CreativeFramework::TargetedContentLayoutHelpers::Tile___CreativeFramework::TargetedContentLayoutHelpers::Tile___std::allocator_CreativeFramework::TargetedContentLayoutHelpers::Tile__CreativeFramework::TargetedContentLayoutHelpers::Tile__::_1_::catch$1 @ 0x1800F63FD
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800222FC (_CxxThrowException_0.c)
 *     ??$destroy@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@?$_Wrap_alloc@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800DBB34 (--$destroy@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@-$_Wrap_alloc@V-$allocator@UTi.c)
 */

void __fastcall __noreturn std::_Uninit_move_CreativeFramework::TargetedContentLayoutHelpers::Tile___CreativeFramework::TargetedContentLayoutHelpers::Tile___std::allocator_CreativeFramework::TargetedContentLayoutHelpers::Tile__CreativeFramework::TargetedContentLayoutHelpers::Tile__::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx

  for ( i = *(_QWORD *)(a2 + 88); i != *(_QWORD *)(a2 + 80); i += 56LL )
    std::_Wrap_alloc<std::allocator<CreativeFramework::TargetedContentLayoutHelpers::Tile>>::destroy<CreativeFramework::TargetedContentLayoutHelpers::Tile>(
      a1,
      i);
  throw;
}
