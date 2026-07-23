/*
 * XREFs of sub_1409B3020 @ 0x1409B3020
 * Callers:
 *     sub_1406747FC @ 0x1406747FC (sub_1406747FC.c)
 * Callees:
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1409B3020(__int64 a1, _DWORD *a2, int a3, int a4, int a5, unsigned int a6)
{
  unsigned int v9; // edi
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 2512) & 0x40) != 0 || (v9 = 8 * (unsigned __int8)sub_140363220(1), v9 < 8) )
    v9 = 8;
  memset(a2, 0, 0x1A0uLL);
  a2[18] = 0;
  a2[1] = a5;
  result = a6;
  a2[14] = a4 - v9;
  a2[16] = a3;
  a2[2] = a6;
  a2[17] = 48;
  *a2 = 2097159;
  return result;
}
