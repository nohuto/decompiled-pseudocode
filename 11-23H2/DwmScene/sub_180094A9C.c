/*
 * XREFs of sub_180094A9C @ 0x180094A9C
 * Callers:
 *     sub_180095850 @ 0x180095850 (sub_180095850.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180094A9C(__int64 a1, _DWORD *a2)
{
  *(_DWORD *)(a1 + 8) = *a2;
  *(_QWORD *)a1 = &Spectre::Engine::DistanceFromCameraSceneNodeTraversal::`vftable';
  return a1;
}
