/*
 * XREFs of sub_18000B944 @ 0x18000B944
 * Callers:
 *     sub_18000B938 @ 0x18000B938 (sub_18000B938.c)
 *     sub_18000B9C3 @ 0x18000B9C3 (sub_18000B9C3.c)
 *     sub_18000B9D5 @ 0x18000B9D5 (sub_18000B9D5.c)
 *     sub_18000B9E7 @ 0x18000B9E7 (sub_18000B9E7.c)
 *     sub_18000B9F9 @ 0x18000B9F9 (sub_18000B9F9.c)
 *     sub_18000BA0B @ 0x18000BA0B (sub_18000BA0B.c)
 *     sub_18000BA1D @ 0x18000BA1D (sub_18000BA1D.c)
 *     sub_18000BA2F @ 0x18000BA2F (sub_18000BA2F.c)
 *     sub_18000BA41 @ 0x18000BA41 (sub_18000BA41.c)
 *     sub_18000BA53 @ 0x18000BA53 (sub_18000BA53.c)
 *     sub_18000BA65 @ 0x18000BA65 (sub_18000BA65.c)
 *     sub_18000BA77 @ 0x18000BA77 (sub_18000BA77.c)
 *     sub_18000BA89 @ 0x18000BA89 (sub_18000BA89.c)
 *     sub_18000BA9B @ 0x18000BA9B (sub_18000BA9B.c)
 * Callees:
 *     sub_1800092B0 @ 0x1800092B0 (sub_1800092B0.c)
 */

__int64 __fastcall sub_18000B944(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_1800092B0((__int64)&dword_18002D960, v4);
  return v5(a1, a2, a3, a4);
}
