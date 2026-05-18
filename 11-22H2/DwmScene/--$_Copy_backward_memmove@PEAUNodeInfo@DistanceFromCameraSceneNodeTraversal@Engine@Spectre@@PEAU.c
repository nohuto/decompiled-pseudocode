/*
 * XREFs of ??$_Copy_backward_memmove@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@00@Z @ 0x180094A2C
 * Callers:
 *     ??$_Buffered_rotate_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU1234@00_J101@Z @ 0x180094808 (--$_Buffered_rotate_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@.c)
 *     ??$_Inplace_merge_buffer_right@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00QEAU1234@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094D00 (--$_Inplace_merge_buffer_right@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@.c)
 *     ??$_Inplace_merge_buffer_right@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00QEAU1234@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094DB8 (--$_Inplace_merge_buffer_right@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@En_ea_180094DB8.c)
 *     ??$_Insertion_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU1234@0U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094F18 (--$_Insertion_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U.c)
 *     ??$_Insertion_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU1234@0U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094FA4 (--$_Insertion_sort_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engi_ea_180094FA4.c)
 *     ??$_Rotate_one_right@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00@Z @ 0x18009511C (--$_Rotate_one_right@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@YAX.c)
 * Callees:
 *     <none>
 */

void *__fastcall std::_Copy_backward_memmove<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(
        void *Src,
        __int64 a2,
        __int64 a3)
{
  return memmove_0((void *)(a3 - (a2 - (_QWORD)Src)), Src, a2 - (_QWORD)Src);
}
