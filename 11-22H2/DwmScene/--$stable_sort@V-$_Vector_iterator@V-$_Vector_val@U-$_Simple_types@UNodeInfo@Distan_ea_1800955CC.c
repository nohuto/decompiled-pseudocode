/*
 * XREFs of ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@@std@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@2@@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@@0@0U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x1800955CC
 * Callers:
 *     ?GetSceneNodes@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@UEBA?AV?$vector@PEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@PEAVSceneNode@23@AEBVCamera@23@@Z @ 0x180095840 (-GetSceneNodes@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@UEBA-AV-$vector@PEAVSceneNod.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??$?0_J@?$_Optimistic_temporary_buffer@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@QEAA@_J@Z @ 0x180093F80 (--$-0_J@-$_Optimistic_temporary_buffer@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spe.c)
 *     ??$_Insertion_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU1234@0U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094FA4 (--$_Insertion_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engi_ea_180094FA4.c)
 *     ??$_Stable_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXQEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@0_J01U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180095240 (--$_Stable_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U-$l.c)
 *     ??1?$_Optimistic_temporary_buffer@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@QEAA@XZ @ 0x1800956B0 (--1-$_Optimistic_temporary_buffer@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@.c)
 *     _alloca_probe @ 0x1800E3880 (_alloca_probe.c)
 */

char *__fastcall std::stable_sort<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>>,std::less<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
        char *a1,
        char *a2,
        char a3)
{
  __int64 v6; // rbp
  __int64 v8[514]; // [rsp+30h] [rbp-1028h] BYREF

  v6 = (a2 - a1) >> 4;
  if ( v6 <= 32 )
    return std::_Insertion_sort_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::less<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
             a1,
             a2);
  std::_Optimistic_temporary_buffer<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>::_Optimistic_temporary_buffer<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>(
    v8,
    v6 - v6 / 2);
  std::_Stable_sort_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,std::less<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>>(
    a1,
    (float *)a2,
    v6,
    v8[0],
    v8[1],
    a3);
  return (char *)std::_Optimistic_temporary_buffer<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>::~_Optimistic_temporary_buffer<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>(v8);
}
