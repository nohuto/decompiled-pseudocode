/*
 * XREFs of sub_1C00AA138 @ 0x1C00AA138
 * Callers:
 *     sub_1C003AF2C @ 0x1C003AF2C (sub_1C003AF2C.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C00AA138(__int64 a1)
{
  __int64 result; // rax

  memset_0((void *)(a1 + 8), 0, 0xE0uLL);
  result = 0LL;
  *(_BYTE *)(a1 + 248) &= 0xFCu;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
