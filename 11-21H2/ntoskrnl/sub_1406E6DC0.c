/*
 * XREFs of sub_1406E6DC0 @ 0x1406E6DC0
 * Callers:
 *     sub_1406E1C68 @ 0x1406E1C68 (sub_1406E1C68.c)
 * Callees:
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140791CAC @ 0x140791CAC (sub_140791CAC.c)
 */

__int64 __fastcall sub_1406E6DC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = a1 - 16;
  sub_140347810((struct _EX_RUNDOWN_REF *)(a1 - 16 + 8));
  return sub_140791CAC(a2, v2, 0LL);
}
