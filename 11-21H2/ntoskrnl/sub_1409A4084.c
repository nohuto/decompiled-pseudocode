/*
 * XREFs of sub_1409A4084 @ 0x1409A4084
 * Callers:
 *     sub_1409A3450 @ 0x1409A3450 (sub_1409A3450.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409A5188 @ 0x1409A5188 (sub_1409A5188.c)
 *     sub_1409AA584 @ 0x1409AA584 (sub_1409AA584.c)
 */

__int64 __fastcall sub_1409A4084(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD v7[138]; // [rsp+20h] [rbp-228h] BYREF

  memset(v7, 0, 0x220uLL);
  v4 = (unsigned int)a2[69];
  v5 = (unsigned int)a2[70];
  v7[2] = a2[7];
  v7[3] = v4;
  v7[4] = v5;
  v7[0] = 2;
  sub_1409AA584(v7[2], v4, v5);
  return sub_1409A5188(a1, v7);
}
