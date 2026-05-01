/*
 * XREFs of sub_18000B52A @ 0x18000B52A
 * Callers:
 *     sub_18000B51E @ 0x18000B51E (sub_18000B51E.c)
 * Callees:
 *     sub_1800092B0 @ 0x1800092B0 (sub_1800092B0.c)
 */

__int64 __fastcall sub_18000B52A(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_1800092B0((__int64)&dword_18002D8A0, v4);
  return v5(a1, a2, a3, a4);
}
