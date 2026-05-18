/*
 * XREFs of ??$_Buffered_inplace_merge_divide_and_conquer@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00_J1QEAU1234@_JU?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x1800941E0
 * Callers:
 *     ??$_Buffered_inplace_merge_unchecked_impl@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00_J1QEAU1234@_JU?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x1800945B0 (--$_Buffered_inplace_merge_unchecked_impl@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engi.c)
 * Callees:
 *     ??$_Buffered_inplace_merge_divide_and_conquer2@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00_J1QEAU1234@_JU?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@0011@Z @ 0x180094000 (--$_Buffered_inplace_merge_divide_and_conquer2@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal.c)
 */

__int64 __fastcall std::_Buffered_inplace_merge_divide_and_conquer<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::greater<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
        float *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        char a8)
{
  __int64 v10; // r8
  float *Src; // r10
  unsigned __int64 v12; // rcx
  unsigned __int64 v14; // rcx
  float *v15; // r10

  if ( a4 > a5 )
  {
    v14 = (a2 - (__int64)a1) >> 4;
    v15 = a1;
    while ( (__int64)v14 > 0 )
    {
      if ( *(float *)(a2 + 16 * (a5 >> 1)) <= v15[4 * (v14 >> 1)] )
      {
        v15 += 4 * (v14 >> 1) + 4;
        v14 += -1LL - (v14 >> 1);
      }
      else
      {
        v14 >>= 1;
      }
    }
    return std::_Buffered_inplace_merge_divide_and_conquer2<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::greater<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
             (int)a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             v15,
             a2 + 16 * (a5 >> 1),
             ((char *)v15 - (char *)a1) >> 4,
             a5 >> 1);
  }
  else
  {
    v10 = a2;
    Src = &a1[4 * (a4 >> 1)];
    v12 = (a3 - a2) >> 4;
    while ( (__int64)v12 > 0 )
    {
      if ( *(float *)(v10 + 16 * (v12 >> 1)) <= *Src )
      {
        v12 >>= 1;
      }
      else
      {
        v10 += 16 * (v12 >> 1) + 16;
        v12 += -1LL - (v12 >> 1);
      }
    }
    return std::_Buffered_inplace_merge_divide_and_conquer2<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::greater<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
             (int)a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             Src,
             v10,
             a4 >> 1,
             (v10 - a2) >> 4);
  }
}
