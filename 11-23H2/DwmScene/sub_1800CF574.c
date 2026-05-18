/*
 * XREFs of sub_1800CF574 @ 0x1800CF574
 * Callers:
 *     sub_1800CF5CC @ 0x1800CF5CC (sub_1800CF5CC.c)
 *     sub_1800CFA84 @ 0x1800CFA84 (sub_1800CFA84.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800CF574(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *a1 = a3;
  a1[1] = *(_QWORD *)(a2 + 8);
  return a1;
}
