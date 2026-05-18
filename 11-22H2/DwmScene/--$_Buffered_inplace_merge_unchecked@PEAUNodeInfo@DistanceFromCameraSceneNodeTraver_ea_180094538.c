/*
 * XREFs of ??$_Buffered_inplace_merge_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00_J1QEAU1234@_JU?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094538
 * Callers:
 *     ??$_Buffered_inplace_merge_divide_and_conquer2@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00_J1QEAU1234@_JU?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@0011@Z @ 0x1800940F0 (--$_Buffered_inplace_merge_divide_and_conquer2@PEAUNodeInfo@DistanceFromCameraScene_ea_1800940F0.c)
 *     ??$_Stable_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXQEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@0_J01U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180095240 (--$_Stable_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U-$l.c)
 * Callees:
 *     ??$_Rotate_one_right@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00@Z @ 0x18009511C (--$_Rotate_one_right@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@YAX.c)
 */

void __fastcall std::_Buffered_inplace_merge_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::less<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
        float *a1,
        float *a2,
        float *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  __int64 v8; // r11
  float *v9; // r10

  if ( a2 != a3 )
  {
    while ( a1 != a2 )
    {
      if ( *a1 > *a2 )
      {
        do
        {
          v8 = a5;
          v9 = a3;
          a3 -= 4;
          --a5;
          if ( a2 == a3 )
          {
            std::_Rotate_one_right<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(a1, a2, v9);
            return;
          }
        }
        while ( *(a2 - 4) <= *a3 );
        if ( a4 == 1 )
          std::_Rotate_one_left<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(a1, a2, v9);
        else
          std::_Buffered_inplace_merge_unchecked_impl<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::less<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
            (_DWORD)a1,
            (_DWORD)a2,
            (_DWORD)v9,
            a4,
            v8,
            a6,
            a7);
        return;
      }
      a1 += 4;
      --a4;
    }
  }
}
