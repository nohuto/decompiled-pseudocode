/*
 * XREFs of ??1?$_Optimistic_temporary_buffer@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@QEAA@XZ @ 0x1800956B0
 * Callers:
 *     ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@@std@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@2@@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@@0@0U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180095500 (--$stable_sort@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UNodeInfo@DistanceFromCameraS.c)
 *     ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@@std@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@2@@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@@0@0U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x1800955CC (--$stable_sort@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UNodeInfo@Distan_ea_1800955CC.c)
 *     _std::stable_sort_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo______std::less_Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo____::_1_::dtor$0 @ 0x1800EAAF1 (_std--stable_sort_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Spectre--Engine--Dis.c)
 * Callees:
 *     ??$_Return_temporary_buffer@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@YAXQEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@Z @ 0x1800950D8 (--$_Return_temporary_buffer@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@.c)
 */

void __fastcall std::_Optimistic_temporary_buffer<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>::~_Optimistic_temporary_buffer<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) > 0x100uLL )
    std::_Return_temporary_buffer<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>(*(void **)a1);
}
