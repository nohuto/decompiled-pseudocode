/*
 * XREFs of sub_1406DCFC0 @ 0x1406DCFC0
 * Callers:
 *     sub_1406DCD40 @ 0x1406DCD40 (sub_1406DCD40.c)
 *     sub_1407772C8 @ 0x1407772C8 (sub_1407772C8.c)
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 * Callees:
 *     sub_1406DD014 @ 0x1406DD014 (sub_1406DD014.c)
 *     sub_14077A710 @ 0x14077A710 (sub_14077A710.c)
 */

__int64 __fastcall sub_1406DCFC0(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int v6; // eax
  int v7; // r9d
  _QWORD v9[2]; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+44h] [rbp-14h]

  v11 = 0;
  v9[0] = a2;
  v9[1] = a3;
  v10 = a1;
  v6 = sub_14077A710();
  return sub_1406DD014(v6, (unsigned int)sub_1406BF580, (unsigned int)v9, v7, a5, a6);
}
