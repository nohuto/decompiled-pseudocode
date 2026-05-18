/*
 * XREFs of ??0DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@QEAA@W4SortingOrder@012@@Z @ 0x180095698
 * Callers:
 *     ??$_Construct_in_place@VDistanceFromCameraSceneNodeTraversal@Engine@Spectre@@$$V@std@@YAXAEAVDistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@Z @ 0x180062B24 (--$_Construct_in_place@VDistanceFromCameraSceneNodeTraversal@Engine@Spectre@@$$V@std@@YAXAEAVDis.c)
 *     ??$_Construct_in_place@VDistanceFromCameraSceneNodeTraversal@Engine@Spectre@@AEBW4SortingOrder@123@@std@@YAXAEAVDistanceFromCameraSceneNodeTraversal@Engine@Spectre@@AEBW4SortingOrder@123@@Z @ 0x180094A1C (--$_Construct_in_place@VDistanceFromCameraSceneNodeTraversal@Engine@Spectre@@AEBW4SortingOrder@1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::DistanceFromCameraSceneNodeTraversal::DistanceFromCameraSceneNodeTraversal(
        __int64 a1,
        int a2)
{
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &Spectre::Engine::DistanceFromCameraSceneNodeTraversal::`vftable';
  return a1;
}
