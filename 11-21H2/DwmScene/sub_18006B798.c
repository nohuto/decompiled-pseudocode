/*
 * XREFs of sub_18006B798 @ 0x18006B798
 * Callers:
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006B798(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &Spectre::Engine::DistanceFromCameraSceneNodeTraversal::`vftable';
  return a1;
}
