/*
 * XREFs of sub_18000B79E @ 0x18000B79E
 * Callers:
 *     sub_18000B792 @ 0x18000B792 (sub_18000B792.c)
 *     sub_18000B81D @ 0x18000B81D (sub_18000B81D.c)
 *     sub_18000B82F @ 0x18000B82F (sub_18000B82F.c)
 *     sub_18000B841 @ 0x18000B841 (sub_18000B841.c)
 *     sub_18000B853 @ 0x18000B853 (sub_18000B853.c)
 *     sub_18000B865 @ 0x18000B865 (sub_18000B865.c)
 *     sub_18000B877 @ 0x18000B877 (sub_18000B877.c)
 * Callees:
 *     sub_1800092B0 @ 0x1800092B0 (sub_1800092B0.c)
 */

__int64 __fastcall sub_18000B79E(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_1800092B0((__int64)&dword_18002D920, v4);
  return v5(a1, a2, a3, a4);
}
