/*
 * XREFs of sub_1403107F0 @ 0x1403107F0
 * Callers:
 *     sub_1407BC750 @ 0x1407BC750 (sub_1407BC750.c)
 *     sub_1407BC9B0 @ 0x1407BC9B0 (sub_1407BC9B0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1403107F0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx

  v3 = a1 - *(_QWORD *)(a2 + 24);
  *a3 = v3;
  a3[1] = v3 - *(_QWORD *)(a2 + 8);
}
