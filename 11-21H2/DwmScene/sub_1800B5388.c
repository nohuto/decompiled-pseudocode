/*
 * XREFs of sub_1800B5388 @ 0x1800B5388
 * Callers:
 *     sub_1800B5ED0 @ 0x1800B5ED0 (sub_1800B5ED0.c)
 *     sub_1800B5FAC @ 0x1800B5FAC (sub_1800B5FAC.c)
 * Callees:
 *     sub_1800B52F0 @ 0x1800B52F0 (sub_1800B52F0.c)
 */

char __fastcall sub_1800B5388(__int64 a1)
{
  __int64 v2; // rcx

  sub_1800B52F0(a1, a1 + 32, (_QWORD *)(a1 + 208));
  return sub_1800B52F0(v2, a1 + 216, (_QWORD *)(a1 + 392));
}
