/*
 * XREFs of ??$_Rotate_one_right@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00@Z @ 0x18009511C
 * Callers:
 *     ??$_Buffered_inplace_merge_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00_J1QEAU1234@_JU?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x1800944C0 (--$_Buffered_inplace_merge_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Sp.c)
 *     ??$_Buffered_inplace_merge_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00_J1QEAU1234@_JU?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094538 (--$_Buffered_inplace_merge_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraver_ea_180094538.c)
 * Callees:
 *     ??$_Copy_backward_memmove@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@00@Z @ 0x180094A2C (--$_Copy_backward_memmove@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU.c)
 */

void *__fastcall std::_Rotate_one_right<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(
        _OWORD *a1,
        __int128 *a2,
        __int64 a3)
{
  __int128 v4; // xmm6
  void *result; // rax

  v4 = *a2;
  result = std::_Copy_backward_memmove<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(
             a1,
             (__int64)a2,
             a3);
  *a1 = v4;
  return result;
}
