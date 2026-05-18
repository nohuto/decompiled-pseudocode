/*
 * XREFs of ??$_Insertion_sort_isort_max_chunks@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU1234@_JU?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094E70
 * Callers:
 *     ??$_Buffered_merge_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXQEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@0_J0U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094638 (--$_Buffered_merge_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spect.c)
 * Callees:
 *     ??$_Insertion_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU1234@0U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094F18 (--$_Insertion_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U.c)
 */

__int64 __fastcall std::_Insertion_sort_isort_max_chunks<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::greater<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
        void *Src,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v4; // rbx

  if ( a3 > 32 )
  {
    v4 = ((unsigned __int64)(a3 - 33) >> 5) + 1;
    do
    {
      Src = (void *)std::_Insertion_sort_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::greater<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(Src);
      --v4;
    }
    while ( v4 );
  }
  return std::_Insertion_sort_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::greater<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(Src);
}
