/*
 * XREFs of sub_1800A4C0C @ 0x1800A4C0C
 * Callers:
 *     sub_1800A5AB0 @ 0x1800A5AB0 (sub_1800A5AB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800A4C0C(__int64 a1, _DWORD *a2)
{
  *(_DWORD *)(a1 + 8) = *a2;
  *(_QWORD *)a1 = &Spectre::Engine::DistanceFromCameraSceneNodeTraversal::`vftable';
  return a1;
}
