/*
 * XREFs of sub_180054FB4 @ 0x180054FB4
 * Callers:
 *     sub_1800562B0 @ 0x1800562B0 (sub_1800562B0.c)
 * Callees:
 *     sub_180054E24 @ 0x180054E24 (sub_180054E24.c)
 */

unsigned __int64 __fastcall sub_180054FB4(__int64 a1, __int64 *a2, _QWORD *a3, int *a4, int *a5, int *a6, int *a7)
{
  __int64 v7; // r11
  int v10; // r10d
  int v11; // edx
  int v12; // r9d
  int v13; // r8d
  __int64 v14; // rax
  unsigned __int64 result; // rax

  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 == *(_QWORD *)(a1 + 16) )
    return sub_180054E24((char **)a1, (char *)v7, a2, a3, a4, a5, a6, a7);
  v10 = *a7;
  v11 = *a4;
  v12 = *a6;
  v13 = *a5;
  v14 = *a2;
  *(_QWORD *)(v7 + 8) = *a3;
  *(_QWORD *)v7 = v14;
  *(_DWORD *)(v7 + 16) = v11;
  *(_DWORD *)(v7 + 20) = v13;
  *(_DWORD *)(v7 + 24) = v12;
  *(_DWORD *)(v7 + 28) = v10;
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 32;
  return result;
}
