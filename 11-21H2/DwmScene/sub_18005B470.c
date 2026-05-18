/*
 * XREFs of sub_18005B470 @ 0x18005B470
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_180059950 @ 0x180059950 (sub_180059950.c)
 *     sub_180059A68 @ 0x180059A68 (sub_180059A68.c)
 */

_QWORD *__fastcall sub_18005B470(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_18001D684();
  v4 = v3;
  if ( v3 )
  {
    *(_DWORD *)(v3 + 8) = 1;
    *(_DWORD *)(v3 + 12) = 1;
    *(_QWORD *)v3 = &std::_Ref_count_obj2<Spectre::Engine::VertexLayoutGeneric>::`vftable';
    sub_180059950((_QWORD *)(v3 + 16));
  }
  else
  {
    v4 = 0LL;
  }
  v6[1] = v4;
  v6[0] = v4 + 16;
  sub_180059A68(a2, v6);
  sub_180010910((__int64)v6);
  return a2;
}
