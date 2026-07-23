/*
 * XREFs of sub_140A3631C @ 0x140A3631C
 * Callers:
 *     sub_1408301C0 @ 0x1408301C0 (sub_1408301C0.c)
 * Callees:
 *     sub_140A36378 @ 0x140A36378 (sub_140A36378.c)
 */

__int64 __fastcall sub_140A3631C(__int64 a1, __int64 a2, _BYTE *a3)
{
  if ( !a1 || !a2 || !a3 || (*a3 & 2) == 0 )
    return 3221225485LL;
  if ( (int)sub_140A36378(a1) < 0 )
    *(_WORD *)a3 |= 0x1000u;
  *(_WORD *)a3 |= 0x1000u;
  return 0LL;
}
