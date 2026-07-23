/*
 * XREFs of sub_14077747C @ 0x14077747C
 * Callers:
 *     sub_1407773E8 @ 0x1407773E8 (sub_1407773E8.c)
 * Callees:
 *     sub_14077A8E0 @ 0x14077A8E0 (sub_14077A8E0.c)
 *     sub_14077B0A4 @ 0x14077B0A4 (sub_14077B0A4.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 */

__int64 __fastcall sub_14077747C(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rdi
  unsigned int v8; // r15d
  _WORD *v9; // rsi
  int v12; // eax
  int v13; // ebx
  unsigned int v14; // eax
  __int128 v16; // [rsp+20h] [rbp-20h] BYREF
  __int128 v17; // [rsp+30h] [rbp-10h]
  PVOID P; // [rsp+80h] [rbp+40h] BYREF

  v7 = a7;
  v8 = a6;
  v9 = a5;
  *a7 = 0;
  P = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( v8 )
    *v9 = 0;
  v12 = sub_14077B0A4(LODWORD(qword_1400084F0[5 * (int)a1]), a2, &P);
  v13 = v12;
  if ( v12 < 0 )
  {
    if ( v12 != -1073741772 )
      goto LABEL_10;
    v13 = 0;
  }
  else
  {
    *((_QWORD *)&v16 + 1) = a4;
    *(_QWORD *)&v17 = v9;
    *((_QWORD *)&v17 + 1) = v8;
    v13 = sub_14077A8E0(a1, P, sub_140788CE0, &v16, sub_1406BF580);
    if ( v13 < 0 )
      goto LABEL_10;
    *v7 = HIDWORD(v17);
  }
  if ( *v7 )
  {
    v14 = *v7 + 1;
    *v7 = v14;
    if ( v9 && v8 >= v14 )
      v9[v14 - 1] = 0;
    else
      v13 = -1073741789;
  }
LABEL_10:
  if ( P )
    sub_14077B394(P);
  return (unsigned int)v13;
}
