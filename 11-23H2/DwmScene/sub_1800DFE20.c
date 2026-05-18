/*
 * XREFs of sub_1800DFE20 @ 0x1800DFE20
 * Callers:
 *     sub_1800DFEFC @ 0x1800DFEFC (sub_1800DFEFC.c)
 *     sub_1800E0100 @ 0x1800E0100 (sub_1800E0100.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

__int64 *__fastcall sub_1800DFE20(__int64 *a1)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_18001C190();
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *a1 = v2;
  return a1;
}
