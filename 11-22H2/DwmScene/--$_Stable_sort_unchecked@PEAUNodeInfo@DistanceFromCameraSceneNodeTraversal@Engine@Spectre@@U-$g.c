/*
 * XREFs of ??$_Stable_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXQEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@0_J01U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180095148
 * Callers:
 *     ??$_Stable_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXQEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@0_J01U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180095148 (--$_Stable_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U-$g.c)
 *     ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@@std@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@2@@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@@0@0U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180095500 (--$stable_sort@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UNodeInfo@DistanceFromCameraS.c)
 * Callees:
 *     ??$_Buffered_inplace_merge_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00_J1QEAU1234@_JU?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x1800944C0 (--$_Buffered_inplace_merge_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Sp.c)
 *     ??$_Buffered_merge_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXQEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@0_J0U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094638 (--$_Buffered_merge_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spect.c)
 *     ??$_Insertion_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU1234@0U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094F18 (--$_Insertion_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U.c)
 *     ??$_Stable_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXQEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@0_J01U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180095148 (--$_Stable_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U-$g.c)
 */

void __fastcall std::_Stable_sort_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::greater<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
        char *a1,
        float *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rdx

  if ( a3 > 32 )
  {
    v9 = (unsigned __int64)a3 >> 1;
    v10 = a3 - ((unsigned __int64)a3 >> 1);
    v11 = (__int64)&a1[16 * v10];
    if ( v10 > a5 )
    {
      std::_Stable_sort_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::greater<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
        (_DWORD)a1,
        v11,
        v10,
        a4,
        a5,
        a6);
      std::_Stable_sort_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::greater<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
        (_DWORD)a1 + 16 * v10,
        (_DWORD)a2,
        v9,
        a4,
        a5,
        a6);
    }
    else
    {
      std::_Buffered_merge_sort_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::greater<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
        a1,
        v11,
        v10,
        a4,
        a6);
      std::_Buffered_merge_sort_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::greater<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
        &a1[16 * v10],
        (__int64)a2,
        v9,
        a4,
        a6);
    }
    std::_Buffered_inplace_merge_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::greater<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
      (float *)a1,
      (float *)&a1[16 * v10],
      a2,
      v10,
      v9,
      a4,
      a5);
  }
  else
  {
    std::_Insertion_sort_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::greater<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
      a1,
      (char *)a2);
  }
}
