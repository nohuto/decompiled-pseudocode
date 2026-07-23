/*
 * XREFs of sub_1407A1AC0 @ 0x1407A1AC0
 * Callers:
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 *     sub_1406AB574 @ 0x1406AB574 (sub_1406AB574.c)
 *     sub_1406BB808 @ 0x1406BB808 (sub_1406BB808.c)
 *     sub_1406C5878 @ 0x1406C5878 (sub_1406C5878.c)
 *     sub_1407A0920 @ 0x1407A0920 (sub_1407A0920.c)
 *     sub_1407A1A30 @ 0x1407A1A30 (sub_1407A1A30.c)
 *     ObSetHandleAttributes @ 0x1407A1B10 (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x1407A2A70 (ObQueryObjectAuditingByHandle.c)
 *     sub_1407A41E0 @ 0x1407A41E0 (sub_1407A41E0.c)
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 * Callees:
 *     sub_1402F344C @ 0x1402F344C (sub_1402F344C.c)
 *     sub_140733340 @ 0x140733340 (sub_140733340.c)
 */

_QWORD *__fastcall sub_1407A1AC0(unsigned int *a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r9
  _QWORD *v4; // rbx

  if ( (a2 & 0x3FC) != 0 && (v2 = (_QWORD *)sub_140733340(a1, a2), (v4 = v2) != 0LL) && sub_1402F344C(v3, v2) )
    return v4;
  else
    return 0LL;
}
