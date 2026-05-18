/*
 * XREFs of ??$_Uninitialized_chunked_merge_unchecked2@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U1234@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU1234@0_JU?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x1800953A4
 * Callers:
 *     ??$_Buffered_merge_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXQEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@0_J0U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094720 (--$_Buffered_merge_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal_ea_180094720.c)
 * Callees:
 *     ??$_Uninitialized_merge_move@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U1234@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@QEAU1234@11U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180095460 (--$_Uninitialized_merge_move@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engi_ea_180095460.c)
 */

__int64 __fastcall std::_Uninitialized_chunked_merge_unchecked2<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo,std::less<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 i; // rbx
  __int64 v7; // rbx
  __int64 v8; // r11
  __int64 v9; // r11

  for ( i = a4; i > 32; a1 = v9 )
  {
    v7 = i - 32;
    v8 = 32LL;
    if ( v7 < 32 )
      v8 = v7;
    i = v7 - v8;
    a3 = std::_Uninitialized_merge_move<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo,std::less<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
           a1,
           a1 + 512,
           a1 + 512 + 16 * v8,
           a3);
  }
  return std::_Uninitialized_move_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(
           a1,
           a2,
           a3);
}
