/*
 * XREFs of sub_1405B3340 @ 0x1405B3340
 * Callers:
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402C3410 @ 0x1402C3410 (sub_1402C3410.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 *     sub_1403377E0 @ 0x1403377E0 (sub_1403377E0.c)
 *     sub_1403CF51C @ 0x1403CF51C (sub_1403CF51C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1405B3340(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax

  v2 = *(_QWORD *)(a1 + 16056);
  if ( v2 )
  {
    v3 = a2;
    if ( a2 > v2 )
      v3 = *(_QWORD *)(a1 + 16056);
    *(_QWORD *)(a1 + 16056) = v2 - v3;
    a2 -= v3;
  }
  return a2;
}
