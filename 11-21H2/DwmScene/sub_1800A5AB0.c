/*
 * XREFs of sub_1800A5AB0 @ 0x1800A5AB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_1800A4C0C @ 0x1800A4C0C (sub_1800A4C0C.c)
 */

_QWORD *__fastcall sub_1800A5AB0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v4 = sub_18001D684();
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::DistanceFromCameraSceneNodeTraversal>::`vftable';
    sub_1800A4C0C(v4 + 16, (_DWORD *)(a1 + 8));
  }
  else
  {
    v5 = 0LL;
  }
  a2[1] = v5;
  *a2 = v5 + 16;
  v7 = 0LL;
  sub_180010910((__int64)&v7);
  return a2;
}
