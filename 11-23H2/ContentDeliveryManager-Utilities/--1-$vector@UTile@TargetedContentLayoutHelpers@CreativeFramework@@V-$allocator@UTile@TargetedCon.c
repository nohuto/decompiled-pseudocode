/*
 * XREFs of ??1?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAA@XZ @ 0x1800C72D0
 * Callers:
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::LayoutResolver_::_1_::dtor$4 @ 0x1800DCB67 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--LayoutResolver_--_1_--dtor$4.c)
 * Callees:
 *     ?_Destroy@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@IEAAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800CC800 (-_Destroy@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@Targ.c)
 */

void __fastcall std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::~vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>(
        _QWORD *a1)
{
  if ( *a1 )
  {
    std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::_Destroy(a1, *a1, a1[1]);
    operator delete((void *)*a1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
