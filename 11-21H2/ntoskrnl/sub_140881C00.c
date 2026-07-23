/*
 * XREFs of sub_140881C00 @ 0x140881C00
 * Callers:
 *     sub_1408824D0 @ 0x1408824D0 (sub_1408824D0.c)
 *     sub_1409D9B98 @ 0x1409D9B98 (sub_1409D9B98.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045BA26 @ 0x14045BA26 (sub_14045BA26.c)
 */

__int64 __fastcall sub_140881C00(signed __int64 *a1, __int64 a2, char a3)
{
  int v6; // r8d
  ULONG_PTR v7; // r10
  ULONG_PTR v8; // r11
  int v9; // edx
  __int64 result; // rax
  _QWORD v11[12]; // [rsp+20h] [rbp-68h] BYREF

  memset(v11, 0, sizeof(v11));
  sub_14045BA26((__int64)v11, (__int64)a1, 1LL, 5);
  v11[6] = 0LL;
  v11[5] = a2;
  v9 = v6 & (v7 >> 1) | (v7 >> 3) & 2;
  LODWORD(v11[7]) = v9;
  if ( (a3 & 8) != 0 )
  {
    v9 |= 4u;
    LODWORD(v11[7]) = v9;
  }
  if ( (a3 & 0x10) != 0 )
  {
    v9 |= 8u;
    LODWORD(v11[7]) = v9;
  }
  if ( (a3 & 0x20) != 0 )
  {
    v9 |= 0x10u;
    LODWORD(v11[7]) = v9;
  }
  if ( (a3 & 0x40) != 0 )
    LODWORD(v11[7]) = v9 | 0x20;
  result = sub_14031C860(v7, *a1, v6, v8);
  if ( (int)result >= 0 )
  {
    if ( (v11[7] & 0x40) != 0 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_1400156D0);
    return 0LL;
  }
  return result;
}
