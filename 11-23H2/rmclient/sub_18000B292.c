/*
 * XREFs of sub_18000B292 @ 0x18000B292
 * Callers:
 *     sub_18000B286 @ 0x18000B286 (sub_18000B286.c)
 *     sub_18000B39C @ 0x18000B39C (sub_18000B39C.c)
 *     sub_18000B45D @ 0x18000B45D (sub_18000B45D.c)
 *     sub_18000BB07 @ 0x18000BB07 (sub_18000BB07.c)
 * Callees:
 *     sub_1800092B0 @ 0x1800092B0 (sub_1800092B0.c)
 */

__int64 __fastcall sub_18000B292(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_1800092B0((__int64)&dword_18002D820, v4);
  return v5(a1, a2, a3, a4);
}
