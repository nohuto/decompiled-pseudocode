/*
 * XREFs of sub_1407F27F4 @ 0x1407F27F4
 * Callers:
 *     sub_1407F2400 @ 0x1407F2400 (sub_1407F2400.c)
 *     sub_140808E28 @ 0x140808E28 (sub_140808E28.c)
 *     sub_140809310 @ 0x140809310 (sub_140809310.c)
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1407F27F4(__int64 a1, int a2)
{
  unsigned __int64 v4; // r9
  __int64 v5; // rbx
  __int64 result; // rax
  LARGE_INTEGER v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = (unsigned __int64)*(unsigned int *)(a1 + 296) << 7;
  *(_DWORD *)(a1 + 296) = ((unsigned __int8)*(_DWORD *)(a1 + 296) + 1) & 0x1F;
  v5 = v4 + a1;
  memset((void *)(v4 + a1 + 308), 0, 0x7CuLL);
  *(_DWORD *)(v5 + 304) = a2;
  *(_QWORD *)(v5 + 312) = KeQueryInterruptTimePrecise(&v7);
  result = v5 + 304;
  *(_QWORD *)(v5 + 320) = *(_QWORD *)a1;
  return result;
}
