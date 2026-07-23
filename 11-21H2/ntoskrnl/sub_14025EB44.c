/*
 * XREFs of sub_14025EB44 @ 0x14025EB44
 * Callers:
 *     sub_14025EA9C @ 0x14025EA9C (sub_14025EA9C.c)
 * Callees:
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     memset @ 0x140435E00 (memset.c)
 */

_QWORD *__fastcall sub_14025EB44(ULONG_PTR *a1, unsigned __int64 a2)
{
  _QWORD *result; // rax
  ULONG_PTR v5; // rbx
  ULONG_PTR v6; // rsi
  _QWORD v7[14]; // [rsp+28h] [rbp-29h] BYREF

  memset(&v7[2], 0, 0x60uLL);
  v7[1] = 4096LL;
  result = v7;
  v7[0] = 0LL;
  v7[3] = v7;
  v7[5] = 0LL;
  v7[6] = 0LL;
  LOWORD(v7[2]) = 3;
  v7[4] = 1LL;
  while ( (unsigned __int64)a1 <= a2 )
  {
    v5 = *a1;
    v6 = *a1 + a1[1];
    while ( v5 < v6 )
    {
      v7[0] = v5;
      result = (_QWORD *)sub_14031C860(0LL, v5);
      v5 += 4096LL;
    }
    a1 += 2;
  }
  return result;
}
