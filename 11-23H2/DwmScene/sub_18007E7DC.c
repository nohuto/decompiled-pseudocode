/*
 * XREFs of sub_18007E7DC @ 0x18007E7DC
 * Callers:
 *     sub_18007CCBC @ 0x18007CCBC (sub_18007CCBC.c)
 *     sub_180086850 @ 0x180086850 (sub_180086850.c)
 *     sub_1800868D4 @ 0x1800868D4 (sub_1800868D4.c)
 *     sub_1800869BC @ 0x1800869BC (sub_1800869BC.c)
 *     sub_180087C3C @ 0x180087C3C (sub_180087C3C.c)
 *     sub_18008BE0C @ 0x18008BE0C (sub_18008BE0C.c)
 *     sub_18008BE3C @ 0x18008BE3C (sub_18008BE3C.c)
 *     sub_18008C1A0 @ 0x18008C1A0 (sub_18008C1A0.c)
 *     sub_18008C230 @ 0x18008C230 (sub_18008C230.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18007CA00 @ 0x18007CA00 (sub_18007CA00.c)
 */

__int64 __fastcall sub_18007E7DC(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_18007CA00((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_1800100E8(*(void **)a1, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
