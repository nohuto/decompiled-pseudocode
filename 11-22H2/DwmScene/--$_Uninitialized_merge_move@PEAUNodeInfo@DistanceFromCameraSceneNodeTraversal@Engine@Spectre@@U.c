/*
 * XREFs of ??$_Uninitialized_merge_move@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U1234@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@QEAU1234@11U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180095410
 * Callers:
 *     ??$_Uninitialized_chunked_merge_unchecked2@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U1234@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU1234@0_JU?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180095338 (--$_Uninitialized_chunked_merge_unchecked2@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Eng.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_merge_move<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo,std::greater<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
        float *a1,
        float *a2,
        float *a3,
        _OWORD *a4)
{
  float *v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm0

  v4 = a2;
  while ( *v4 > *a1 )
  {
    v5 = *(_OWORD *)v4;
    v4 += 4;
    *a4 = v5;
    if ( v4 == a3 )
      return std::_Uninitialized_move_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(
               a1,
               a2,
               a4 + 1);
LABEL_6:
    ++a4;
  }
  v6 = *(_OWORD *)a1;
  a1 += 4;
  *a4 = v6;
  if ( a1 != a2 )
    goto LABEL_6;
  a2 = a3;
  a1 = v4;
  return std::_Uninitialized_move_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(
           a1,
           a2,
           a4 + 1);
}
