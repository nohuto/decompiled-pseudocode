/*
 * XREFs of sub_140808AEC @ 0x140808AEC
 * Callers:
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 * Callees:
 *     sub_1405D4058 @ 0x1405D4058 (sub_1405D4058.c)
 */

void __fastcall sub_140808AEC(char a1, char a2, int a3, __int64 a4)
{
  int v4; // r10d
  __int64 v7; // rcx

  v4 = dword_140D3B040;
  BYTE2(dword_140D3B058) = a2;
  v7 = qword_140D3B0E8;
  BYTE1(dword_140D3B058) = a1;
  qword_140D3B0E8 = a4;
  LODWORD(dword_140D3B040) = a3;
  if ( a4 != v7 || a3 != v4 )
    sub_1405D4058(v7, v4);
}
