/*
 * XREFs of sub_1800A8F64 @ 0x1800A8F64
 * Callers:
 *     sub_1800AB310 @ 0x1800AB310 (sub_1800AB310.c)
 * Callees:
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_1800670BC @ 0x1800670BC (sub_1800670BC.c)
 *     sub_18008F18C @ 0x18008F18C (sub_18008F18C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800A8F64(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 64LL )
  {
    sub_18001875C((__int64 *)a3, i);
    *(_DWORD *)(a3 + 32) = *(_DWORD *)(i + 32);
    sub_18008F18C((char **)(a3 + 40), i + 40);
    a3 += 64LL;
  }
  sub_1800670BC((_QWORD *)a3, (_QWORD *)a3);
  return a3;
}
