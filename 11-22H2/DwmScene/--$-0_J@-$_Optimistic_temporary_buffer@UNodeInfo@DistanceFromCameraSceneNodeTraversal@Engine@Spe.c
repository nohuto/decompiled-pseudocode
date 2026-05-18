/*
 * XREFs of ??$?0_J@?$_Optimistic_temporary_buffer@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@QEAA@_J@Z @ 0x180093F80
 * Callers:
 *     ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@@std@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@2@@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@@0@0U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180095500 (--$stable_sort@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UNodeInfo@DistanceFromCameraS.c)
 *     ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@@std@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@2@@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@@0@0U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x1800955CC (--$stable_sort@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UNodeInfo@Distan_ea_1800955CC.c)
 * Callees:
 *     ??$_Get_temporary_buffer@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@YA?AU?$pair@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@_J@0@_J@Z @ 0x18003A430 (--$_Get_temporary_buffer@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@YA.c)
 *     ??$_Return_temporary_buffer@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@YAXQEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@Z @ 0x1800950D8 (--$_Return_temporary_buffer@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@.c)
 */

_QWORD *__fastcall std::_Optimistic_temporary_buffer<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>::_Optimistic_temporary_buffer<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>(
        _QWORD *a1,
        unsigned __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v5; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-10h]

  if ( a2 > 0x100 )
  {
    if ( a2 == 0x7FFFFFFFFFFFFFFFLL )
      a2 = 0x7FFFFFFFFFFFFFFFLL;
    std::_Get_temporary_buffer<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>(&v5, a2);
    if ( v6 <= 0x100 )
    {
      std::_Return_temporary_buffer<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>(v5);
      v3 = a1 + 2;
      a1[1] = 256LL;
    }
    else
    {
      v3 = v5;
      a1[1] = v6;
    }
    *a1 = v3;
  }
  else
  {
    a1[1] = a2;
    *a1 = a1 + 2;
  }
  return a1;
}
