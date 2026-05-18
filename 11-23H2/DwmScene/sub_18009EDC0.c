/*
 * XREFs of sub_18009EDC0 @ 0x18009EDC0
 * Callers:
 *     sub_18009FB00 @ 0x18009FB00 (sub_18009FB00.c)
 * Callees:
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 */

__int64 __fastcall sub_18009EDC0(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 68) = 1;
  sub_1800124F8((__int64 *)(a1 + 8), (_QWORD *)(a1 + 40));
  result = *(unsigned int *)(a1 + 64);
  *(_DWORD *)(a1 + 56) = result;
  return result;
}
