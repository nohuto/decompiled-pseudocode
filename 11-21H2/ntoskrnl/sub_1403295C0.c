/*
 * XREFs of sub_1403295C0 @ 0x1403295C0
 * Callers:
 *     sub_140279DB0 @ 0x140279DB0 (sub_140279DB0.c)
 *     sub_14027B820 @ 0x14027B820 (sub_14027B820.c)
 *     sub_140285D90 @ 0x140285D90 (sub_140285D90.c)
 *     sub_1402864A0 @ 0x1402864A0 (sub_1402864A0.c)
 *     sub_140319F70 @ 0x140319F70 (sub_140319F70.c)
 *     sub_14031B1C0 @ 0x14031B1C0 (sub_14031B1C0.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 *     sub_14033D860 @ 0x14033D860 (sub_14033D860.c)
 *     sub_1407BE190 @ 0x1407BE190 (sub_1407BE190.c)
 *     sub_14096CA00 @ 0x14096CA00 (sub_14096CA00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403295C0(unsigned __int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(48 * ((*(_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
                 - 0x21FFFFFFFFF0LL);
  if ( v1 )
    return v1 + 40 * ((a1 >> 18) & 7);
  else
    return 0LL;
}
