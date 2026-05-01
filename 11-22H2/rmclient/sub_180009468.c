/*
 * XREFs of sub_180009468 @ 0x180009468
 * Callers:
 *     sub_180009430 @ 0x180009430 (sub_180009430.c)
 * Callees:
 *     sub_18001BC10 @ 0x18001BC10 (sub_18001BC10.c)
 */

__int64 __fastcall sub_180009468(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 < 0 )
    sub_18001BC10(2 * v2);
  return sub_1800099BC(a1 + 40);
}
