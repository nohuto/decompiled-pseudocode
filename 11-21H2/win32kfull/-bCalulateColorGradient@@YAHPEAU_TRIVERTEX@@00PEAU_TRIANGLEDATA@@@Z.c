/*
 * XREFs of ?bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C0287E8C
 * Callers:
 *     ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1C0287C60 (-bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z.c)
 * Callees:
 *     ?bDoGradient@@YAHPEA_J00JJJPEAU_GRADSTRUCT@@@Z @ 0x1C0288034 (-bDoGradient@@YAHPEA_J00JJJPEAU_GRADSTRUCT@@@Z.c)
 */

__int64 __fastcall bCalulateColorGradient(
        struct _TRIVERTEX *a1,
        struct _TRIVERTEX *a2,
        struct _TRIVERTEX *a3,
        struct _TRIANGLEDATA *a4)
{
  LONG y; // eax
  LONG x; // ebx
  int v9; // r10d
  int v10; // r11d
  int v11; // r8d
  int v13; // ecx
  int v14; // edx
  __int64 *v15; // r8
  __int64 *v16; // rcx
  int Red; // eax
  int v18; // r10d
  int v19; // r9d
  _DWORD v21[6]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v22; // [rsp+58h] [rbp-18h]
  __int64 v23; // [rsp+60h] [rbp-10h]

  y = a1->y;
  x = a1->x;
  v10 = a3->x - a1->x;
  v11 = a2->y - y;
  v21[0] = a2->x - a1->x;
  v9 = v21[0];
  v13 = a3->y - y;
  v21[2] = v11;
  v21[3] = v13;
  v21[1] = v10;
  *((_DWORD *)a4 + 34) = x;
  v14 = v9 * v13 - v10 * v11;
  v21[5] = v14;
  if ( v9 >= 0 )
    v9 = 0;
  if ( v11 >= 0 )
    v11 = 0;
  if ( v9 < v10 )
    v10 = v9;
  if ( v11 < v13 )
    v13 = v11;
  v15 = (__int64 *)((char *)a4 + 80);
  v21[4] = v10 + v13;
  v16 = (__int64 *)((char *)a4 + 16);
  v22 = 0x1000000000000LL / (int)abs32(v14);
  *((_DWORD *)a4 + 35) = a1->y;
  Red = a3->Red;
  v18 = a2->Red;
  v19 = a1->Red;
  v23 = 0x1000000000000LL % (int)abs32(v14);
  bDoGradient(v16, (__int64 *)a4 + 6, v15, v19, v18, Red, (struct _GRADSTRUCT *)v21);
  bDoGradient(
    (__int64 *)a4 + 3,
    (__int64 *)a4 + 7,
    (__int64 *)a4 + 11,
    a1->Green,
    a2->Green,
    a3->Green,
    (struct _GRADSTRUCT *)v21);
  bDoGradient(
    (__int64 *)a4 + 4,
    (__int64 *)a4 + 8,
    (__int64 *)a4 + 12,
    a1->Blue,
    a2->Blue,
    a3->Blue,
    (struct _GRADSTRUCT *)v21);
  bDoGradient(
    (__int64 *)a4 + 5,
    (__int64 *)a4 + 9,
    (__int64 *)a4 + 13,
    a1->Alpha,
    a2->Alpha,
    a3->Alpha,
    (struct _GRADSTRUCT *)v21);
  return 1LL;
}
