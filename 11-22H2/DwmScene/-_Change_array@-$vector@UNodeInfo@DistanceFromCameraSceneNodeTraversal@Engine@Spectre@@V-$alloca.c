/*
 * XREFs of ?_Change_array@?$vector@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@V?$allocator@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@AEAAXQEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@_K1@Z @ 0x180095B34
 * Callers:
 *     ??$_Emplace_reallocate@AEAMAEAPEAVSceneNode@Engine@Spectre@@@?$vector@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@V?$allocator@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@QEAAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU2345@AEAMAEAPEAVSceneNode@45@@Z @ 0x180094A84 (--$_Emplace_reallocate@AEAMAEAPEAVSceneNode@Engine@Spectre@@@-$vector@UNodeInfo@DistanceFromCame.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
