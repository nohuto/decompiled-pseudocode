/*
 * XREFs of sub_1800A23F4 @ 0x1800A23F4
 * Callers:
 *     sub_1800A2BB0 @ 0x1800A2BB0 (sub_1800A2BB0.c)
 *     sub_1800A3948 @ 0x1800A3948 (sub_1800A3948.c)
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18001C7B4 @ 0x18001C7B4 (sub_18001C7B4.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 *     sub_1800A26C0 @ 0x1800A26C0 (sub_1800A26C0.c)
 *     sub_1800A28B0 @ 0x1800A28B0 (sub_1800A28B0.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800A23F4(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 *v10; // rbx
  __int128 v12; // [rsp+20h] [rbp-58h] BYREF
  __int128 v13; // [rsp+30h] [rbp-48h]

  v8 = *a1;
  *(_QWORD *)&v12 = a1;
  v9 = sub_18001C190();
  *((_QWORD *)&v12 + 1) = v9;
  sub_180017648((_QWORD *)(v9 + 32), a3);
  sub_1800A26C0(v9 + 64, a4);
  *(_QWORD *)v9 = v8;
  *(_QWORD *)(v9 + 8) = v8;
  *(_QWORD *)(v9 + 16) = v8;
  *(_WORD *)(v9 + 24) = 0;
  v10 = *(__int64 **)(*a1 + 8LL);
  *(_QWORD *)&v13 = v10;
LABEL_5:
  DWORD2(v13) = 0;
  while ( !*((_BYTE *)v10 + 25) )
  {
    *(_QWORD *)&v13 = v10;
    if ( !(unsigned __int8)sub_18001C7B4((_QWORD *)(v9 + 32), v10 + 4) )
    {
      v10 = (__int64 *)v10[2];
      goto LABEL_5;
    }
    DWORD2(v13) = 1;
    v10 = (__int64 *)*v10;
  }
  if ( a1[1] == 0x8D3DCB08D3DCB0LL )
    sub_18001DDFC();
  *((_QWORD *)&v12 + 1) = 0LL;
  sub_1800A28B0(&v12);
  v12 = v13;
  *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v12, v9);
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
