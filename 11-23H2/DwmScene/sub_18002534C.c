/*
 * XREFs of sub_18002534C @ 0x18002534C
 * Callers:
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 *     sub_180070E40 @ 0x180070E40 (sub_180070E40.c)
 *     sub_18008D684 @ 0x18008D684 (sub_18008D684.c)
 *     sub_180097934 @ 0x180097934 (sub_180097934.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180024BD8 @ 0x180024BD8 (sub_180024BD8.c)
 */

_QWORD *__fastcall sub_18002534C(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = sub_18001C190();
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::DefaultSceneNodeTraversal>::`vftable';
    sub_180024BD8();
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
