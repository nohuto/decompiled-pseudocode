/*
 * XREFs of sub_180017DEC @ 0x180017DEC
 * Callers:
 *     sub_18001568C @ 0x18001568C (sub_18001568C.c)
 *     sub_180070DA0 @ 0x180070DA0 (sub_180070DA0.c)
 *     sub_180095770 @ 0x180095770 (sub_180095770.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180017DEC(__int64 a1, __int64 a2)
{
  return (unsigned int)_std_type_info_compare(a1 + 8, a2 + 8) != 0;
}
