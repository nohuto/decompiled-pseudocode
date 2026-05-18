/*
 * XREFs of ??$_Uninitialized_move_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@QEAU1234@0@Z @ 0x1800954B0
 * Callers:
 *     ??$_Buffered_rotate_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU1234@00_J101@Z @ 0x180094808 (--$_Buffered_rotate_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@.c)
 *     ??$_Inplace_merge_buffer_left@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00QEAU1234@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094BC8 (--$_Inplace_merge_buffer_left@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@.c)
 *     ??$_Inplace_merge_buffer_left@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00QEAU1234@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094C64 (--$_Inplace_merge_buffer_left@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Eng_ea_180094C64.c)
 *     ??$_Inplace_merge_buffer_right@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00QEAU1234@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094D00 (--$_Inplace_merge_buffer_right@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@.c)
 *     ??$_Inplace_merge_buffer_right@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@00QEAU1234@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180094DB8 (--$_Inplace_merge_buffer_right@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@En_ea_180094DB8.c)
 *     ??$_Uninitialized_chunked_merge_unchecked2@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U1234@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU1234@0_JU?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180095338 (--$_Uninitialized_chunked_merge_unchecked2@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Eng.c)
 *     ??$_Uninitialized_chunked_merge_unchecked2@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U1234@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAXPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU1234@0_JU?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x1800953A4 (--$_Uninitialized_chunked_merge_unchecked2@PEAUNodeInfo@DistanceFromCameraSceneNode_ea_1800953A4.c)
 *     ??$_Uninitialized_merge_move@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U1234@U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@QEAU1234@11U?$greater@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180095410 (--$_Uninitialized_merge_move@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U.c)
 *     ??$_Uninitialized_merge_move@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@U1234@U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@QEAU1234@11U?$less@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@@Z @ 0x180095460 (--$_Uninitialized_merge_move@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engi_ea_180095460.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall std::_Uninitialized_move_unchecked<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *,Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(
        _OWORD *a1,
        _OWORD *a2,
        _OWORD *a3)
{
  while ( a1 != a2 )
    *a3++ = *a1++;
  return a3;
}
