/*
 * XREFs of sub_1800FB5CC @ 0x1800FB5CC
 * Callers:
 *     sub_1800FA384 @ 0x1800FA384 (sub_1800FA384.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_1800FAC80 @ 0x1800FAC80 (sub_1800FAC80.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800FB5CC(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v2 = sub_18001D684();
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Utils::Internal::SimpleCancellationToken>::`vftable';
    sub_1800FAC80();
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  v5 = 0LL;
  sub_180010910((__int64)&v5);
  return a1;
}
