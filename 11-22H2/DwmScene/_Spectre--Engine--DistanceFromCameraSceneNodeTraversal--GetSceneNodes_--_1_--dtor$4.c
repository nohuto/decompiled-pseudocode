/*
 * XREFs of _Spectre::Engine::DistanceFromCameraSceneNodeTraversal::GetSceneNodes_::_1_::dtor$4 @ 0x1800EAB15
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@PEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18003FFB0 (--1-$vector@PEAVSceneNode@Engine@Spectre@@V-$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@.c)
 */

void __fastcall Spectre::Engine::DistanceFromCameraSceneNodeTraversal::GetSceneNodes_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 52) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    std::vector<Spectre::Engine::SceneNode *>::~vector<Spectre::Engine::SceneNode *>(*(_QWORD *)(a2 + 128));
  }
}
