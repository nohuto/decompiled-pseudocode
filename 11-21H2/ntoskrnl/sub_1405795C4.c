/*
 * XREFs of sub_1405795C4 @ 0x1405795C4
 * Callers:
 *     sub_14057938C @ 0x14057938C (sub_14057938C.c)
 * Callees:
 *     sub_140552C20 @ 0x140552C20 (sub_140552C20.c)
 *     sub_140579B48 @ 0x140579B48 (sub_140579B48.c)
 */

__int64 __fastcall sub_1405795C4(char a1, char a2, unsigned __int8 a3)
{
  _BYTE v4[12]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v5; // [rsp+2Ch] [rbp-14h]

  v4[4] = a1;
  *(_WORD *)&v4[10] = 0;
  *(_DWORD *)v4 = 3;
  v4[5] = a2;
  *(_DWORD *)&v4[6] = a3;
  sub_140552C20((int *)v4);
  v5 = 0LL;
  *(_QWORD *)v4 = 2LL;
  *(_DWORD *)&v4[8] = 0x800000;
  return sub_140579B48(v4);
}
