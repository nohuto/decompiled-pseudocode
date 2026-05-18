/*
 * XREFs of ??$_Merge_move@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@QEAU1234@10U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180095038
 * Callers:
 *     ??$_Chunked_merge_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU1234@0_J_JU?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094904 (--$_Chunked_merge_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Merge_move<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::greater<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
        float *a1,
        __int64 a2,
        float *a3,
        _OWORD *a4)
{
  float *v5; // rax
  void *v6; // r8
  __int128 v7; // xmm0
  __int128 v8; // xmm0

  v5 = (float *)a2;
  do
  {
    while ( 1 )
    {
      v6 = a4 + 1;
      if ( *v5 <= *a1 )
        break;
      v7 = *(_OWORD *)v5;
      v5 += 4;
      *a4 = v7;
      if ( v5 == a3 )
        return std::_Copy_memmove<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(
                 a1,
                 a2,
                 v6);
      ++a4;
    }
    v8 = *(_OWORD *)a1;
    a1 += 4;
    *a4++ = v8;
  }
  while ( a1 != (float *)a2 );
  a2 = (__int64)a3;
  a1 = v5;
  return std::_Copy_memmove<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(
           a1,
           a2,
           v6);
}
