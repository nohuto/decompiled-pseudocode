/*
 * XREFs of sub_180095850 @ 0x180095850
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180094A9C @ 0x180094A9C (sub_180094A9C.c)
 */

_QWORD *__fastcall sub_180095850(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8

  v4 = sub_18001C190();
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::DistanceFromCameraSceneNodeTraversal>::`vftable';
    sub_180094A9C(v4 + 16, (_DWORD *)(a1 + 8));
  }
  else
  {
    v5 = 0LL;
  }
  a2[1] = v5;
  *a2 = v5 + 16;
  return a2;
}
