/*
 * XREFs of sub_1800A28B0 @ 0x1800A28B0
 * Callers:
 *     sub_1800A23F4 @ 0x1800A23F4 (sub_1800A23F4.c)
 *     sub_1800EB3B6 @ 0x1800EB3B6 (sub_1800EB3B6.c)
 * Callees:
 *     sub_1800A0CE8 @ 0x1800A0CE8 (sub_1800A0CE8.c)
 */

__int64 __fastcall sub_1800A28B0(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_1800A0CE8(v2 + 32);
  return sub_1800A285C(a1);
}
