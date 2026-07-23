/*
 * XREFs of sub_1405ED5A4 @ 0x1405ED5A4
 * Callers:
 *     sub_1409BDBFC @ 0x1409BDBFC (sub_1409BDBFC.c)
 * Callees:
 *     sub_1405ED0E8 @ 0x1405ED0E8 (sub_1405ED0E8.c)
 *     sub_1409BD19C @ 0x1409BD19C (sub_1409BD19C.c)
 */

char __fastcall sub_1405ED5A4(__int64 a1, int a2, char a3, char a4)
{
  unsigned int v4; // r10d
  __int64 v6; // rax
  char result; // al
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+48h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a1 + 88);
  v6 = *(_QWORD *)(a1 + 80);
  v9 = 0;
  v8 = 0;
  *(_WORD *)(v6 - 2) = a2;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 88) = a2;
  *(_BYTE *)(a1 + 92) = a3;
  *(_BYTE *)(a1 + 93) = a4;
  sub_1409BD19C(*(_QWORD *)(a1 + 112), v4, &v9, &v8);
  if ( !v8 || (result = sub_1405ED0E8((_QWORD *)a1, v8)) != 0 )
  {
    if ( v9 )
      return sub_1405ED0E8((_QWORD *)a1, v9);
    else
      return 1;
  }
  return result;
}
