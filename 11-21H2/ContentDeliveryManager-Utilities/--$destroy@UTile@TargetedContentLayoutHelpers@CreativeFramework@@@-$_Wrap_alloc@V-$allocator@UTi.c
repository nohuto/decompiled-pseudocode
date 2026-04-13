/*
 * XREFs of ??$destroy@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@?$_Wrap_alloc@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800DBB34
 * Callers:
 *     _std::_Uninit_move_CreativeFramework::TargetedContentLayoutHelpers::Tile___CreativeFramework::TargetedContentLayoutHelpers::Tile___std::allocator_CreativeFramework::TargetedContentLayoutHelpers::Tile__CreativeFramework::TargetedContentLayoutHelpers::Tile__::_1_::catch$1 @ 0x1800F63FD (_std--_Uninit_move_CreativeFramework--TargetedContentLayoutHelpers--Tile___CreativeFramework--Ta.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Wrap_alloc<std::allocator<CreativeFramework::TargetedContentLayoutHelpers::Tile>>::destroy<CreativeFramework::TargetedContentLayoutHelpers::Tile>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    operator delete(*(void **)a2);
  result = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)a2 = 0;
  return result;
}
