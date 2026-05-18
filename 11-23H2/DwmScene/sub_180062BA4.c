/*
 * XREFs of sub_180062BA4 @ 0x180062BA4
 * Callers:
 *     sub_18006393C @ 0x18006393C (sub_18006393C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180062BA4(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &Spectre::Engine::DistanceFromCameraSceneNodeTraversal::`vftable';
  return a1;
}
