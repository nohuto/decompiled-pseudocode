/*
 * XREFs of ?GetSceneNodes@DefaultSceneNodeTraversal@Engine@Spectre@@UEBA?AV?$vector@PEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@PEAVSceneNode@23@AEBVCamera@23@@Z @ 0x180070E10
 * Callers:
 *     <none>
 * Callees:
 *     ?Traverse@DefaultSceneNodeTraversal@Engine@Spectre@@AEBAXPEAVSceneNode@23@AEBVCamera@23@AEAV?$vector@PEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@@Z @ 0x180070E5C (-Traverse@DefaultSceneNodeTraversal@Engine@Spectre@@AEBAXPEAVSceneNode@23@AEBVCamera@23@AEAV-$ve.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Spectre::Engine::DefaultSceneNodeTraversal::GetSceneNodes(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  Spectre::Engine::DefaultSceneNodeTraversal::Traverse(a1, a3, a4, a2, 1);
  return a2;
}
