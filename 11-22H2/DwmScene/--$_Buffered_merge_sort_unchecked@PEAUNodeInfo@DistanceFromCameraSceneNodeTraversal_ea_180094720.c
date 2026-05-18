/*
 * XREFs of ??$_Buffered_merge_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXQEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@0_J0U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094720
 * Callers:
 *     ??$_Stable_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXQEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@0_J01U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180095240 (--$_Stable_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U-$l.c)
 * Callees:
 *     ??$_Chunked_merge_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU1234@0_J_JU?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094990 (--$_Chunked_merge_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engin_ea_180094990.c)
 *     ??$_Insertion_sort_isort_max_chunks@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU1234@_JU?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094EC4 (--$_Insertion_sort_isort_max_chunks@PEAUNodeInfo@DistanceFromCameraSceneNodeTravers_ea_180094EC4.c)
 *     ??$_Uninitialized_chunked_merge_unchecked2@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U1234@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU1234@0_JU?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x1800953A4 (--$_Uninitialized_chunked_merge_unchecked2@PEAUNodeInfo@DistanceFromCameraSceneNode_ea_1800953A4.c)
 */

__int64 __fastcall std::_Buffered_merge_sort_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::less<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 result; // rax
  __int64 i; // rsi
  __int64 v11; // rsi

  result = std::_Insertion_sort_isort_max_chunks<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::less<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(a1);
  if ( a3 > 32 )
  {
    std::_Uninitialized_chunked_merge_unchecked2<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo,std::less<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
      a1,
      a2,
      a4,
      a3,
      a5);
    result = std::_Chunked_merge_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::less<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
               a4,
               (int)a4 + 16 * (int)a3,
               (_DWORD)a1,
               64,
               a3);
    for ( i = 128LL; a3 > i; i = 2 * v11 )
    {
      std::_Chunked_merge_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::less<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
        (_DWORD)a1,
        a2,
        a4,
        i,
        a3);
      v11 = 2 * i;
      result = std::_Chunked_merge_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::less<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
                 a4,
                 (int)a4 + 16 * (int)a3,
                 (_DWORD)a1,
                 v11,
                 a3);
    }
  }
  return result;
}
