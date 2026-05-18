/*
 * XREFs of sub_18006C060 @ 0x18006C060
 * Callers:
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001FFD8 @ 0x18001FFD8 (sub_18001FFD8.c)
 *     sub_180030740 @ 0x180030740 (sub_180030740.c)
 *     sub_18006B90C @ 0x18006B90C (sub_18006B90C.c)
 *     sub_18006C6C8 @ 0x18006C6C8 (sub_18006C6C8.c)
 *     sub_180079400 @ 0x180079400 (sub_180079400.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18006C060(float *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  float v11; // xmm0_4
  __int64 v12; // rcx
  float v13; // xmm1_4
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 *v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v21; // [rsp+20h] [rbp-20h] BYREF
  __int64 v22; // [rsp+28h] [rbp-18h]
  __int128 v23; // [rsp+30h] [rbp-10h] BYREF
  __int64 v24; // [rsp+80h] [rbp+40h] BYREF
  __int64 v25; // [rsp+90h] [rbp+50h] BYREF

  v6 = (__int64)a3;
  if ( (unsigned __int64)a3[3] >= 8 )
    v6 = *a3;
  v7 = sub_18001FFD8(v6, a3[2]);
  sub_18006B90C(a1, &v23, (char *)a3, v7);
  if ( !*((_QWORD *)&v23 + 1) )
  {
    if ( *((_QWORD *)a1 + 2) == 0x555555555555555LL )
      std::_Xlength_error("unordered_map/set too long");
    v21 = a1 + 2;
    v8 = sub_180011088(0x30uLL);
    v22 = v8;
    *(_QWORD *)(v8 + 32) = 0LL;
    *(_QWORD *)(v8 + 40) = 0LL;
    *(_OWORD *)(v8 + 16) = *(_OWORD *)a3;
    *(_OWORD *)(v8 + 32) = *((_OWORD *)a3 + 1);
    a3[2] = 0LL;
    a3[3] = 7LL;
    *(_WORD *)a3 = 0;
    v9 = *((_QWORD *)a1 + 2);
    v10 = v9 + 1;
    if ( v9 + 1 < 0 )
      v11 = (float)(int)(v10 & 1 | (v10 >> 1)) + (float)(int)(v10 & 1 | (v10 >> 1));
    else
      v11 = (float)(int)v10;
    v12 = *((_QWORD *)a1 + 7);
    if ( v12 < 0 )
    {
      v14 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v12 >> 1);
      v13 = (float)(int)v14 + (float)(int)v14;
    }
    else
    {
      v13 = (float)(int)v12;
    }
    if ( (float)(v11 / v13) > *a1 )
    {
      sub_180079400(a1);
      v23 = *(_OWORD *)sub_18006B90C(a1, &v23, (char *)(v8 + 16), v7);
      v9 = *((_QWORD *)a1 + 2);
    }
    v22 = 0LL;
    v24 = v23;
    v25 = *(_QWORD *)(v23 + 8);
    *((_QWORD *)a1 + 2) = v9 + 1;
    sub_180030740((__int64 *)v8, &v24);
    sub_180030740((__int64 *)(v8 + 8), &v25);
    *v16 = v8;
    *(_QWORD *)(v15 + 8) = v8;
    v17 = *((_QWORD *)a1 + 3);
    v18 = 2 * (v7 & *((_QWORD *)a1 + 6));
    v19 = *(_QWORD *)(v17 + 16 * (v7 & *((_QWORD *)a1 + 6)));
    if ( v19 == *((_QWORD *)a1 + 1) )
    {
      *(_QWORD *)(v17 + 16 * (v7 & *((_QWORD *)a1 + 6))) = v8;
LABEL_20:
      *(_QWORD *)(v17 + 8 * v18 + 8) = v8;
      goto LABEL_21;
    }
    if ( v19 == v15 )
    {
      *(_QWORD *)(v17 + 16 * (v7 & *((_QWORD *)a1 + 6))) = v8;
    }
    else if ( *(__int64 **)(v17 + 16 * (v7 & *((_QWORD *)a1 + 6)) + 8) == v16 )
    {
      goto LABEL_20;
    }
LABEL_21:
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 1;
    sub_18006C6C8(&v21);
    return a2;
  }
  *(_QWORD *)a2 = *((_QWORD *)&v23 + 1);
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
