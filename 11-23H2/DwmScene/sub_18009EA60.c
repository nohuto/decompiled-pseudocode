/*
 * XREFs of sub_18009EA60 @ 0x18009EA60
 * Callers:
 *     sub_1800398CC @ 0x1800398CC (sub_1800398CC.c)
 * Callees:
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 */

__int64 __fastcall sub_18009EA60(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // rbx
  __int64 result; // rax

  v6 = a3;
  sub_1800124F8((__int64 *)(16LL * a3 + a1 + 8), a2);
  *(_DWORD *)(a1 + 4 * v6 + 728) = 0;
  result = a5;
  *(_DWORD *)(a1 + 4 * v6 + 908) = a5;
  return result;
}
