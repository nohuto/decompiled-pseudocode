/*
 * XREFs of ??$reverse@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@YAXQEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@0@Z @ 0x1800954D4
 * Callers:
 *     ??$_Buffered_rotate_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAU1234@00_J101@Z @ 0x180094808 (--$_Buffered_rotate_unchecked@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@.c)
 * Callees:
 *     <none>
 */

void __fastcall std::reverse<Spectre::Engine::DistanceFromCameraSceneNodeTraversal::NodeInfo *>(
        __int128 *a1,
        __int128 *a2)
{
  __int128 v2; // xmm1

  while ( a1 != a2 )
  {
    if ( a1 == --a2 )
      break;
    v2 = *a1;
    *a1++ = *a2;
    *a2 = v2;
  }
}
