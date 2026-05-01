/*
 * XREFs of sub_18000B640 @ 0x18000B640
 * Callers:
 *     sub_18000B634 @ 0x18000B634 (sub_18000B634.c)
 *     sub_18000B6BF @ 0x18000B6BF (sub_18000B6BF.c)
 *     sub_18000B6D1 @ 0x18000B6D1 (sub_18000B6D1.c)
 * Callees:
 *     sub_1800092B0 @ 0x1800092B0 (sub_1800092B0.c)
 */

__int64 __fastcall sub_18000B640(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_1800092B0((__int64)&dword_18002D8E0, v4);
  return v5(a1, a2, a3, a4);
}
