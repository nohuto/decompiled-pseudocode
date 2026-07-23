/*
 * XREFs of sub_1402A08BC @ 0x1402A08BC
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     sub_1402A08EC @ 0x1402A08EC (sub_1402A08EC.c)
 *     sub_1405723CC @ 0x1405723CC (sub_1405723CC.c)
 */

__int64 __fastcall sub_1402A08BC(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // r10

  v3 = a2;
  if ( a3 )
  {
    sub_1405723CC(a1, *a3);
    *(_DWORD *)(a1 + 12) |= 1u;
  }
  return sub_1402A08EC(v3, a1, a1 + 16, a1 + 4);
}
