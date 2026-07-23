/*
 * XREFs of sub_140881FB8 @ 0x140881FB8
 * Callers:
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 * Callees:
 *     sub_140881F12 @ 0x140881F12 (sub_140881F12.c)
 */

__int64 __fastcall sub_140881FB8(__int64 a1, char a2, int a3, int a4, _QWORD *a5)
{
  unsigned __int64 v5; // rcx
  _DWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+40h] [rbp-18h]
  int v12; // [rsp+44h] [rbp-14h]
  int *v13; // [rsp+48h] [rbp-10h]
  int v14; // [rsp+68h] [rbp+10h] BYREF

  v10 = 0LL;
  v8 = a1;
  v13 = &v14;
  v12 = 0;
  v7[0] = 1;
  v11 = a3;
  v7[1] = a2 & 1;
  v5 = *(unsigned __int8 *)(a1 - 48 + 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  v14 = a4;
  v9 = qword_140D07490[(unsigned __int8)dword_140D06C0C ^ v5];
  sub_140881F12((__int64)v7, a5);
  return 0LL;
}
