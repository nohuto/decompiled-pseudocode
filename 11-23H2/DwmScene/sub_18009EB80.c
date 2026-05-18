/*
 * XREFs of sub_18009EB80 @ 0x18009EB80
 * Callers:
 *     sub_18009EAA8 @ 0x18009EAA8 (sub_18009EAA8.c)
 *     sub_18009FB00 @ 0x18009FB00 (sub_18009FB00.c)
 * Callees:
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 */

__int64 __fastcall sub_18009EB80(__int64 a1)
{
  __int64 result; // rax

  sub_1800124F8((__int64 *)(a1 + 24), (_QWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 40) = -1;
  result = 1065353216LL;
  *(_DWORD *)(a1 + 44) = 1065353216;
  *(_DWORD *)(a1 + 48) = 1065353216;
  *(_DWORD *)(a1 + 52) = 1065353216;
  *(_DWORD *)(a1 + 56) = 1065353216;
  *(_WORD *)(a1 + 60) = 256;
  return result;
}
