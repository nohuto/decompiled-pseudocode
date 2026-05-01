/*
 * XREFs of sub_18000BB49 @ 0x18000BB49
 * Callers:
 *     sub_18000BB3D @ 0x18000BB3D (sub_18000BB3D.c)
 *     sub_18000BBC8 @ 0x18000BBC8 (sub_18000BBC8.c)
 *     sub_18000BBDA @ 0x18000BBDA (sub_18000BBDA.c)
 * Callees:
 *     sub_1800092B0 @ 0x1800092B0 (sub_1800092B0.c)
 */

__int64 __fastcall sub_18000BB49(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_1800092B0((__int64)&dword_18002D980, v4);
  return v5(a1, a2, a3, a4);
}
