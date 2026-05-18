/*
 * XREFs of sub_18009D490 @ 0x18009D490
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _o_ceilf @ 0x18000BFFC (_o_ceilf.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001085C @ 0x18001085C (sub_18001085C.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C6E8 @ 0x18001C6E8 (sub_18001C6E8.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180027964 @ 0x180027964 (sub_180027964.c)
 *     sub_180027C80 @ 0x180027C80 (sub_180027C80.c)
 *     sub_1800283EC @ 0x1800283EC (sub_1800283EC.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_18002E5A8 @ 0x18002E5A8 (sub_18002E5A8.c)
 *     sub_18008D65C @ 0x18008D65C (sub_18008D65C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18009D490(__int64 a1, __int64 a2, int a3, int a4, char a5, int a6)
{
  float v8; // xmm1_4
  float v9; // xmm8_4
  float v10; // xmm0_4
  float v11; // xmm9_4
  float v12; // xmm6_4
  int v13; // r14d
  int v14; // r15d
  __int64 *v15; // rsi
  __int64 v16; // rbx
  void **v17; // rax
  __int64 *v18; // rsi
  __int64 v19; // rbx
  void **v20; // rax
  __int64 v21; // rsi
  char **v22; // r14
  __int64 result; // rax
  int v24; // edi
  int v25; // r15d
  _QWORD *v26; // rax
  __int64 v27; // rbx
  void **v28; // rax
  _QWORD *v29; // rcx
  __int64 v30; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-C0h]
  __int64 v33; // [rsp+50h] [rbp-B8h]
  _QWORD v34[4]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v35[4]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v36[32]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v37[4]; // [rsp+C0h] [rbp-48h] BYREF

  v8 = (float)*(int *)(a1 + 376);
  v9 = (float)a3;
  v10 = (float)a3 / v8;
  v11 = (float)a4;
  v12 = (float)a4 / v8;
  *(float *)(a1 + 264) = v10;
  *(float *)(a1 + 268) = v12;
  o_ceilf();
  v13 = (int)v10;
  o_ceilf();
  v14 = (int)v12;
  if ( !(int)v10 )
    v13 = 1;
  if ( !v14 )
    v14 = 1;
  LODWORD(v30) = *(_DWORD *)(a1 + 376);
  v33 = sub_180026618(a2);
  sub_18001085C(v33, &v31);
  v15 = (__int64 *)(a1 + 184);
  sub_180011020((_QWORD *)(a1 + 184), &v31);
  if ( v32 )
    sub_180010530(v32);
  v16 = *v15;
  v17 = (void **)sub_180010DD0(v35, (__int64)"ImageProcessingBlurX");
  sub_180029824(v16, v17);
  sub_1800283EC(*v15, v13, v14, a5, a6, 0LL);
  sub_18001085C(v33, &v31);
  v18 = (__int64 *)(a1 + 200);
  sub_180011020((_QWORD *)(a1 + 200), &v31);
  if ( v32 )
    sub_180010530(v32);
  v19 = *v18;
  v20 = (void **)sub_180010DD0(v35, (__int64)"ImageProcessingBlurY");
  sub_180029824(v19, v20);
  sub_1800283EC(*v18, v13, v14, a5, a6, 0LL);
  v21 = a1 + 216;
  sub_180027964((__int64 *)(a1 + 216));
  v22 = (char **)(a1 + 240);
  result = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 248) = result;
  v24 = 2;
  v25 = v30;
  while ( v24 <= v25 )
  {
    sub_18001085C(v33, &v31);
    sub_180027C80((__int64)v36, v24);
    v26 = sub_18001C6E8(v37, (__int64)"ImageProcessingBlur Downsample ", v36);
    sub_18001C61C(v35, v26, (__int64)"x");
    sub_180011B24((__int64)v37);
    sub_180011B24((__int64)v36);
    v27 = v31;
    v28 = (void **)sub_180017648(v34, (__int64)v35);
    sub_180029824(v27, v28);
    o_ceilf();
    o_ceilf();
    sub_1800283EC(v31, (int)(float)(v9 / (float)v24), (int)(float)(v11 / (float)v24), a5, a6, 0LL);
    v29 = *(_QWORD **)(v21 + 8);
    if ( v29 == *(_QWORD **)(v21 + 16) )
    {
      sub_18002E5A8((_QWORD *)v21, *(char **)(v21 + 8), &v31);
    }
    else
    {
      sub_18001246C(v29, &v31);
      *(_QWORD *)(v21 + 8) += 16LL;
    }
    *(float *)&v30 = v9 / (float)v24;
    *((float *)&v30 + 1) = v11 / (float)v24;
    sub_18008D65C(v22, &v30);
    v24 *= 2;
    result = sub_180011B24((__int64)v35);
    if ( v32 )
      result = sub_180010530(v32);
  }
  return result;
}
