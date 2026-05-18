/*
 * XREFs of sub_180047DEC @ 0x180047DEC
 * Callers:
 *     sub_18005B3E0 @ 0x18005B3E0 (sub_18005B3E0.c)
 *     sub_18005BFC0 @ 0x18005BFC0 (sub_18005BFC0.c)
 *     sub_180071B9C @ 0x180071B9C (sub_180071B9C.c)
 *     sub_180089050 @ 0x180089050 (sub_180089050.c)
 *     sub_1800D8A00 @ 0x1800D8A00 (sub_1800D8A00.c)
 *     sub_1800E36A0 @ 0x1800E36A0 (sub_1800E36A0.c)
 *     sub_1800E36E0 @ 0x1800E36E0 (sub_1800E36E0.c)
 *     sub_1800E3720 @ 0x1800E3720 (sub_1800E3720.c)
 *     sub_1800E3760 @ 0x1800E3760 (sub_1800E3760.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180047DEC(__int64 a1, __int64 a2)
{
  return (unsigned int)_std_type_info_compare(a1 + 8, a2 + 8) == 0;
}
