/*
 * XREFs of sub_1C00244B0 @ 0x1C00244B0
 * Callers:
 *     sub_1C0001770 @ 0x1C0001770 (sub_1C0001770.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1C00244B0(char a1, _BYTE *a2, int *a3, _QWORD *a4)
{
  char v4; // r10
  char v5; // al
  int v6; // edx
  unsigned int v7; // ecx
  unsigned int v9; // [rsp+8h] [rbp+8h]
  __int64 v10; // [rsp+20h] [rbp+20h]

  HIDWORD(v10) = 0;
  v4 = 1;
  if ( a1 )
  {
    HIBYTE(v9) = a2[8];
    BYTE2(v9) = a2[9];
    BYTE1(v9) = a2[10];
    LOBYTE(v9) = a2[11];
    HIBYTE(v10) = *a2;
    BYTE6(v10) = a2[1];
    BYTE5(v10) = a2[2];
    BYTE4(v10) = a2[3];
    BYTE3(v10) = a2[4];
    BYTE2(v10) = a2[5];
    BYTE1(v10) = a2[6];
    v5 = a2[7];
  }
  else
  {
    HIBYTE(v9) = a2[4];
    BYTE2(v9) = a2[5];
    BYTE1(v9) = a2[6];
    LOBYTE(v9) = a2[7];
    BYTE3(v10) = *a2;
    BYTE2(v10) = a2[1];
    BYTE1(v10) = a2[2];
    v5 = a2[3];
  }
  v6 = v9;
  LOBYTE(v10) = v5;
  if ( v9 >= 0x200 && v10 * v9 >= 0x100000 )
  {
    _BitScanReverse(&v7, v9);
    v6 = 1 << v7;
  }
  else
  {
    v4 = 0;
  }
  *a3 = v6;
  *a4 = v10;
  return v4;
}
