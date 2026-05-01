/*
 * XREFs of sub_18000B3CC @ 0x18000B3CC
 * Callers:
 *     sub_18000B3C0 @ 0x18000B3C0 (sub_18000B3C0.c)
 *     sub_18000B44B @ 0x18000B44B (sub_18000B44B.c)
 *     sub_18000BB19 @ 0x18000BB19 (sub_18000BB19.c)
 *     sub_18000BB2B @ 0x18000BB2B (sub_18000BB2B.c)
 * Callees:
 *     sub_1800092B0 @ 0x1800092B0 (sub_1800092B0.c)
 */

__int64 __fastcall sub_18000B3CC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_1800092B0((__int64)&dword_18002D860, v4);
  return v5(a1, a2, a3, a4);
}
