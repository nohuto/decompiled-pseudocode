/*
 * XREFs of sub_1402802DC @ 0x1402802DC
 * Callers:
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     sub_14028EDD0 @ 0x14028EDD0 (sub_14028EDD0.c)
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 *     sub_1402DBA28 @ 0x1402DBA28 (sub_1402DBA28.c)
 *     sub_140319160 @ 0x140319160 (sub_140319160.c)
 *     sub_14033D80C @ 0x14033D80C (sub_14033D80C.c)
 *     sub_14033E5D0 @ 0x14033E5D0 (sub_14033E5D0.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_14057FA8C @ 0x14057FA8C (sub_14057FA8C.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 * Callees:
 *     sub_1402806A0 @ 0x1402806A0 (sub_1402806A0.c)
 */

bool __fastcall sub_1402802DC(__int64 a1)
{
  __int16 v1; // dx

  return !(unsigned int)sub_1402806A0(a1) && (v1 & 0x800) != 0LL;
}
