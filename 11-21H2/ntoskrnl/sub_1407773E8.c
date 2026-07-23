/*
 * XREFs of sub_1407773E8 @ 0x1407773E8
 * Callers:
 *     sub_1406DCD40 @ 0x1406DCD40 (sub_1406DCD40.c)
 *     sub_1407772C8 @ 0x1407772C8 (sub_1407772C8.c)
 * Callees:
 *     sub_14077747C @ 0x14077747C (sub_14077747C.c)
 */

__int64 __fastcall sub_1407773E8(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  int v7; // r10d
  _QWORD v9[2]; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+54h] [rbp-14h]

  v9[1] = a4;
  v7 = 0;
  v9[0] = a3;
  v11 = 0;
  switch ( LODWORD(qword_140008500[5 * a1]) )
  {
    case 1:
      v7 = 1;
      break;
    case 2:
      v7 = 2;
      break;
    case 3:
      v7 = 3;
      break;
    case 4:
      v7 = 4;
      break;
    case 5:
      v7 = 5;
      break;
    case 6:
      v7 = 6;
      break;
  }
  v10 = v7;
  return sub_14077747C(a1, a2, 5 * a1, (unsigned int)v9, a5, a6, a7);
}
