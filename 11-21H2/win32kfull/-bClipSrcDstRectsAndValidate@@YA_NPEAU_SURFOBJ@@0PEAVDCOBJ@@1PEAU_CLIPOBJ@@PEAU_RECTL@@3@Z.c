/*
 * XREFs of ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x1C0030EE4
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C002E3F0 (GreSetDIBitsToDeviceInternal.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     _lambda_d48ab19a047a2d0bcdc1b67e26dd5c9f_::operator() @ 0x1C00310FC (_lambda_d48ab19a047a2d0bcdc1b67e26dd5c9f_--operator().c)
 *     ?vGetSurfaceBoundsRect@@YAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C003112C (-vGetSurfaceBoundsRect@@YAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C011A1AC (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C026C90C (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 */

char __fastcall bClipSrcDstRectsAndValidate(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct DCOBJ *a3,
        DC **a4,
        struct _CLIPOBJ *a5,
        struct _RECTL *a6,
        struct _RECTL *a7)
{
  LONG left; // edi
  struct _SURFOBJ *v10; // r11
  __int64 v11; // rcx
  char v12; // si
  __int64 v13; // rax
  __int32 v14; // ebx
  __int32 v15; // edi
  struct _RECTL v16; // xmm6
  __int32 v17; // edx
  __int32 v18; // r8d
  int v19; // eax
  struct _RECTL v20; // xmm0
  __int32 v22; // xmm2_4
  __int64 v23; // rcx
  struct _RECTL v24; // [rsp+28h] [rbp-71h] BYREF
  struct _RECTL v25; // [rsp+38h] [rbp-61h] BYREF
  __m128i v26; // [rsp+48h] [rbp-51h] BYREF
  __m128i v27; // [rsp+58h] [rbp-41h] BYREF
  __m128i v28; // [rsp+68h] [rbp-31h] BYREF

  left = a6->left;
  v26.m128i_i32[0] = a6->top;
  v27.m128i_i64[1] = *(_QWORD *)&a6->right;
  v28 = *(__m128i *)a7;
  v27.m128i_i64[0] = __PAIR64__(v26.m128i_u32[0], left);
  vGetSurfaceBoundsRect(a1, &v24);
  vGetSurfaceBoundsRect(v10, &v25);
  v12 = 1;
  if ( a3 )
  {
    v13 = *(_QWORD *)a3;
    v11 = *(unsigned int *)(*(_QWORD *)a3 + 520LL);
    if ( (v11 & 1) != 0 && (v11 & 2) == 0 )
    {
      v26.m128i_i64[0] = *(_QWORD *)(v13 + 524);
      *(float *)&v22 = 1.0 / *(float *)(v13 + 528);
      *(float *)v26.m128i_i32 = 1.0 / *(float *)v26.m128i_i32;
      v26.m128i_i32[1] = v22;
      ERECTL::vScale((ERECTL *)&v24, (const struct POINTFL *)&v26);
      ERECTL::vScale((ERECTL *)&v27, (const struct POINTFL *)&v26);
      left = v27.m128i_i32[0];
      v26.m128i_i32[0] = v27.m128i_i32[1];
    }
  }
  lambda_d48ab19a047a2d0bcdc1b67e26dd5c9f_::operator()(v11, a4, &v25, &v28);
  v14 = v28.m128i_i32[0] - left;
  v15 = v28.m128i_i32[1] - v26.m128i_i32[0];
  v26 = v27;
  ERECTL::operator*=(&v26, &v24);
  v26.m128i_i32[0] += v14;
  v26.m128i_i32[2] += v14;
  v26.m128i_i32[1] += v15;
  v26.m128i_i32[3] += v15;
  ERECTL::operator*=(&v26, &v25);
  v16 = (struct _RECTL)v26;
  v17 = _mm_cvtsi128_si32(_mm_srli_si128(v26, 4)) - v15;
  v28 = v26;
  v27.m128i_i32[0] = _mm_cvtsi128_si32(v26) - v14;
  v18 = _mm_cvtsi128_si32(_mm_srli_si128(v26, 12)) - v15;
  v27.m128i_i32[1] = v17;
  v27.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v26, 8)) - v14;
  v27.m128i_i32[3] = v18;
  if ( v27.m128i_i32[0] >= v27.m128i_i32[2] || v17 >= v18 )
    return 0;
  if ( a3 )
  {
    v19 = *(_DWORD *)(*(_QWORD *)a3 + 520LL);
    if ( (v19 & 1) != 0 && (v19 & 2) == 0 )
    {
      v26.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)a3 + 524LL);
      ERECTL::vScale((ERECTL *)&v27, (const struct POINTFL *)&v26);
    }
  }
  if ( a4 && (unsigned int)DC::bDpiScaleTransform(*a4) )
  {
    v26.m128i_i64[0] = *(_QWORD *)(v23 + 524);
    ERECTL::vScale((ERECTL *)&v28, (const struct POINTFL *)&v26);
    v16 = (struct _RECTL)v28;
  }
  v20 = (struct _RECTL)v27;
  *a7 = v16;
  *a6 = v20;
  return v12;
}
