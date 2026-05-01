/*
 * XREFs of sub_18000B31D @ 0x18000B31D
 * Callers:
 *     sub_18000B311 @ 0x18000B311 (sub_18000B311.c)
 *     sub_18000B3AE @ 0x18000B3AE (sub_18000B3AE.c)
 *     sub_18000BC89 @ 0x18000BC89 (sub_18000BC89.c)
 *     sub_18000BC9B @ 0x18000BC9B (sub_18000BC9B.c)
 *     sub_18000BCAD @ 0x18000BCAD (sub_18000BCAD.c)
 *     sub_18000BCBF @ 0x18000BCBF (sub_18000BCBF.c)
 *     sub_18000BCD1 @ 0x18000BCD1 (sub_18000BCD1.c)
 * Callees:
 *     sub_1800092B0 @ 0x1800092B0 (sub_1800092B0.c)
 */

__int64 __fastcall sub_18000B31D(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_1800092B0((__int64)&dword_18002D840, v4);
  return v5(a1, a2, a3, a4);
}
