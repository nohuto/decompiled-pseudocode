/*
 * XREFs of ??$_Buffered_inplace_merge_divide_and_conquer@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00_J1QEAU1234@_JU?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094350
 * Callers:
 *     ??$_Buffered_inplace_merge_unchecked_impl@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00_J1QEAU1234@_JU?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x1800945F4 (--$_Buffered_inplace_merge_unchecked_impl@PEAUNodeInfo@DistanceFromCameraSceneNodeT_ea_1800945F4.c)
 * Callees:
 *     ??$_Buffered_inplace_merge_divide_and_conquer2@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00_J1QEAU1234@_JU?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@0011@Z @ 0x1800940F0 (--$_Buffered_inplace_merge_divide_and_conquer2@PEAUNodeInfo@DistanceFromCameraScene_ea_1800940F0.c)
 */

__int64 __fastcall std::_Buffered_inplace_merge_divide_and_conquer<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::less<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
        float *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        char a8)
{
  __int64 v11; // r8
  float *Src; // r10
  unsigned __int64 v13; // rcx
  float *v15; // r10
  float *v16; // rdx
  unsigned __int64 v17; // rcx

  if ( a4 > a5 )
  {
    v15 = a1;
    v16 = (float *)(a2 + 16 * (a5 >> 1));
    v17 = (a2 - (__int64)a1) >> 4;
    while ( (__int64)v17 > 0 )
    {
      if ( v15[4 * (v17 >> 1)] <= *v16 )
      {
        v15 += 4 * (v17 >> 1) + 4;
        v17 += -1LL - (v17 >> 1);
      }
      else
      {
        v17 >>= 1;
      }
    }
    return std::_Buffered_inplace_merge_divide_and_conquer2<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::less<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
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
    v11 = a2;
    Src = &a1[4 * (a4 >> 1)];
    v13 = (a3 - a2) >> 4;
    while ( (__int64)v13 > 0 )
    {
      if ( *Src <= *(float *)(v11 + 16 * (v13 >> 1)) )
      {
        v13 >>= 1;
      }
      else
      {
        v11 += 16 * (v13 >> 1) + 16;
        v13 += -1LL - (v13 >> 1);
      }
    }
    return std::_Buffered_inplace_merge_divide_and_conquer2<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::less<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
             (int)a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             Src,
             v11,
             a4 >> 1,
             (v11 - a2) >> 4);
  }
}
