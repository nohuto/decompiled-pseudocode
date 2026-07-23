/*
 * XREFs of sub_1405ED158 @ 0x1405ED158
 * Callers:
 *     sub_1405ED0E8 @ 0x1405ED0E8 (sub_1405ED0E8.c)
 *     sub_1409BDBFC @ 0x1409BDBFC (sub_1409BDBFC.c)
 * Callees:
 *     sub_1405ED07C @ 0x1405ED07C (sub_1405ED07C.c)
 */

char __fastcall sub_1405ED158(__int64 a1, int a2, char a3, char a4)
{
  char result; // al
  __int64 v7; // rcx
  int v8; // r11d
  __int64 v9; // rax

  result = sub_1405ED07C(a1, a2);
  if ( result )
  {
    v9 = *(_QWORD *)(v7 + 40) - 2LL;
    *(_DWORD *)(v7 + 56) = v8;
    *(_QWORD *)(v7 + 64) = v9;
    result = 1;
    *(_BYTE *)(v7 + 72) = a3;
    *(_BYTE *)(v7 + 73) = a4;
  }
  return result;
}
