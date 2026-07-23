/*
 * XREFs of sub_14045BA26 @ 0x14045BA26
 * Callers:
 *     sub_1406F4768 @ 0x1406F4768 (sub_1406F4768.c)
 *     sub_140881C00 @ 0x140881C00 (sub_140881C00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14045BA26(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax

  result = 0LL;
  *(_BYTE *)a1 = a4;
  *(_BYTE *)(a1 + 1) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  return result;
}
