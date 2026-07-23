/*
 * XREFs of sub_1403631E0 @ 0x1403631E0
 * Callers:
 *     sub_140362FA0 @ 0x140362FA0 (sub_140362FA0.c)
 *     sub_14036FC3C @ 0x14036FC3C (sub_14036FC3C.c)
 *     sub_1403C44EC @ 0x1403C44EC (sub_1403C44EC.c)
 *     RtlCreateHeap @ 0x1407F3B40 (RtlCreateHeap.c)
 * Callees:
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 */

unsigned __int64 __fastcall sub_1403631E0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rax

  v2 = sub_140363220(1LL, a2) & 0x7FFFFFFF;
  v4 = sub_140363220(1LL, v3);
  LODWORD(v4) = v4 & 0x7FFFFFFF;
  return ((unsigned __int64)v2 << 32) | v4;
}
