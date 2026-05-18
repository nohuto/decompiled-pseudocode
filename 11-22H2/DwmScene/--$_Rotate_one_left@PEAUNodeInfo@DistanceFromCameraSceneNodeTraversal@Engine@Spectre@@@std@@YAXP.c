/*
 * XREFs of ??$_Rotate_one_left@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00@Z @ 0x1800950E4
 * Callers:
 *     ??$_Buffered_inplace_merge_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00_J1QEAU1234@_JU?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x1800944C0 (--$_Buffered_inplace_merge_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Sp.c)
 *     ??$_Buffered_inplace_merge_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00_J1QEAU1234@_JU?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094538 (--$_Buffered_inplace_merge_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraver_ea_180094538.c)
 * Callees:
 *     ??$_Copy_memmove@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@00@Z @ 0x180094A4C (--$_Copy_memmove@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@@std.c)
 */

_OWORD *__fastcall std::_Rotate_one_left<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(
        __int128 *a1,
        void *a2,
        __int64 a3)
{
  __int128 v3; // xmm6
  _OWORD *result; // rax

  v3 = *a1;
  result = (_OWORD *)std::_Copy_memmove<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(
                       a2,
                       a3,
                       a1);
  *result = v3;
  return result;
}
