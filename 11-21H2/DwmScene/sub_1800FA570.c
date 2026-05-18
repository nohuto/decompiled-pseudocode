/*
 * XREFs of sub_1800FA570 @ 0x1800FA570
 * Callers:
 *     sub_1800FA89C @ 0x1800FA89C (sub_1800FA89C.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001FFD8 @ 0x18001FFD8 (sub_18001FFD8.c)
 *     sub_180030740 @ 0x180030740 (sub_180030740.c)
 *     sub_18006B90C @ 0x18006B90C (sub_18006B90C.c)
 *     sub_1800F84E0 @ 0x1800F84E0 (sub_1800F84E0.c)
 *     sub_1800F9C6C @ 0x1800F9C6C (sub_1800F9C6C.c)
 *     sub_1800F9D04 @ 0x1800F9D04 (sub_1800F9D04.c)
 *     sub_1800FA768 @ 0x1800FA768 (sub_1800FA768.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800FA570(float *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 *v8; // rbx
  __int64 v9; // r10
  unsigned __int64 v10; // rdx
  float v11; // xmm0_4
  __int64 v12; // rcx
  float v13; // xmm1_4
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  __int64 **v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v22; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v23; // [rsp+28h] [rbp-18h]
  __int128 v24; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v25; // [rsp+80h] [rbp+40h] BYREF
  __int64 v26; // [rsp+90h] [rbp+50h] BYREF

  v6 = a3;
  if ( *(_QWORD *)(a3 + 24) >= 8uLL )
    v6 = *(_QWORD *)a3;
  v7 = sub_18001FFD8(v6, *(_QWORD *)(a3 + 16));
  sub_18006B90C(a1, &v24, (char *)a3, v7);
  if ( !*((_QWORD *)&v24 + 1) )
  {
    if ( *((_QWORD *)a1 + 2) == 0x1745D1745D1745DLL )
      std::_Xlength_error("unordered_map/set too long");
    v22 = a1 + 2;
    v8 = (__int64 *)sub_180011088(0xB0uLL);
    v23 = v8;
    v25 = v8 + 2;
    sub_1800129F4(v8 + 2, a3);
    sub_1800FA768(v8 + 6);
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
      v15 = sub_1800F9C6C((__int64)a1, v10);
      sub_1800F9D04(a1, v15);
      v24 = *(_OWORD *)sub_18006B90C(a1, &v24, (char *)v8 + 16, v7);
      v9 = *((_QWORD *)a1 + 2);
    }
    v23 = 0LL;
    v25 = (__int64 *)v24;
    v26 = *(_QWORD *)(v24 + 8);
    *((_QWORD *)a1 + 2) = v9 + 1;
    sub_180030740(v8, (__int64 *)&v25);
    sub_180030740(v8 + 1, &v26);
    *v17 = v8;
    *(_QWORD *)(v16 + 8) = v8;
    v18 = *((_QWORD *)a1 + 3);
    v19 = 2 * (v7 & *((_QWORD *)a1 + 6));
    v20 = *(_QWORD *)(v18 + 16 * (v7 & *((_QWORD *)a1 + 6)));
    if ( v20 == *((_QWORD *)a1 + 1) )
    {
      *(_QWORD *)(v18 + 16 * (v7 & *((_QWORD *)a1 + 6))) = v8;
LABEL_20:
      *(_QWORD *)(v18 + 8 * v19 + 8) = v8;
      goto LABEL_21;
    }
    if ( v20 == v16 )
    {
      *(_QWORD *)(v18 + 16 * (v7 & *((_QWORD *)a1 + 6))) = v8;
    }
    else if ( *(__int64 ***)(v18 + 16 * (v7 & *((_QWORD *)a1 + 6)) + 8) == v17 )
    {
      goto LABEL_20;
    }
LABEL_21:
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 1;
    sub_1800F84E0((__int64)&v22);
    return a2;
  }
  *(_QWORD *)a2 = *((_QWORD *)&v24 + 1);
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
