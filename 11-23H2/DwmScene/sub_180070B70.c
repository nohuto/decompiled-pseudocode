/*
 * XREFs of sub_180070B70 @ 0x180070B70
 * Callers:
 *     sub_1800291D8 @ 0x1800291D8 (sub_1800291D8.c)
 *     sub_18002920C @ 0x18002920C (sub_18002920C.c)
 *     sub_18002933C @ 0x18002933C (sub_18002933C.c)
 *     sub_180029368 @ 0x180029368 (sub_180029368.c)
 *     sub_1800297B0 @ 0x1800297B0 (sub_1800297B0.c)
 *     sub_180048C84 @ 0x180048C84 (sub_180048C84.c)
 *     sub_1800D1500 @ 0x1800D1500 (sub_1800D1500.c)
 *     sub_1800D25B0 @ 0x1800D25B0 (sub_1800D25B0.c)
 *     sub_1800D2850 @ 0x1800D2850 (sub_1800D2850.c)
 *     sub_1800D2980 @ 0x1800D2980 (sub_1800D2980.c)
 * Callees:
 *     sub_180012030 @ 0x180012030 (sub_180012030.c)
 *     sub_180070B54 @ 0x180070B54 (sub_180070B54.c)
 */

volatile signed __int64 *__fastcall sub_180070B70(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax
  volatile signed __int64 *result; // rax
  unsigned __int64 v5; // r9

  v3 = sub_180070B54(a1, a2, a3);
  result = (volatile signed __int64 *)sub_180012030(v3);
  _InterlockedExchangeAdd64(result, v5);
  return result;
}
