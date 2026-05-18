/*
 * XREFs of ??$_Uninitialized_chunked_merge_unchecked2@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U1234@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU1234@0_JU?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180095338
 * Callers:
 *     ??$_Buffered_merge_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXQEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@0_J0U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094638 (--$_Buffered_merge_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spect.c)
 * Callees:
 *     ??$_Uninitialized_merge_move@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U1234@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@QEAU1234@11U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180095410 (--$_Uninitialized_merge_move@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U.c)
 */

__int64 __fastcall std::_Uninitialized_chunked_merge_unchecked2<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo,std::greater<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
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
    a3 = std::_Uninitialized_merge_move<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo,std::greater<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
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
