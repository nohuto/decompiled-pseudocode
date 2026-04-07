/*
 * XREFs of ?UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800C2914
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800C2C10 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z @ 0x18000A738 (-Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z.c)
 *     ?Update@CSizeResourceProxy@@QEAAJAEBUMilSizeD@@@Z @ 0x18000A76C (-Update@CSizeResourceProxy@@QEAAJAEBUMilSizeD@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x18000FF20 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CIconicAnimatedVisual::UpdateDestinationRect(struct CRectangleGeometryProxy **this)
{
  _QWORD *v1; // rbp
  _DWORD *v3; // rsi
  int RectangleGeometry; // eax
  unsigned int v5; // ebx
  CRectResourceProxy *v6; // r9
  int v7; // edx
  struct CRectangleGeometryProxy *v8; // r8
  int v9; // r10d
  __int64 v10; // rcx
  int v11; // r11d
  int v12; // eax
  float v13; // xmm2_4
  int v14; // r10d
  __int64 v15; // rcx
  int v16; // ecx
  unsigned int v17; // eax
  float v18; // xmm1_4
  __int64 v19; // rcx
  __m128i v20; // xmm0
  int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  struct CRectangleGeometryProxy *v24; // rdx
  int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // ecx
  __int64 v28; // rax
  __m128i v29; // xmm0
  CSizeResourceProxy *v30; // rcx
  int v31; // eax
  _DWORD v33[4]; // [rsp+30h] [rbp-38h] BYREF
  double v34[2]; // [rsp+40h] [rbp-28h] BYREF

  v1 = this + 44;
  v3 = this + 45;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry((const struct tagRECT *)(this + 45), this + 44);
  v5 = RectangleGeometry;
  if ( RectangleGeometry >= 0 )
  {
    if ( *v1 )
    {
      v6 = this[41];
      if ( v6 )
      {
        if ( this[42] )
        {
          v7 = 0;
          v8 = this[37];
          if ( v3[2] - *v3 >= 0 )
            v7 = v3[2] - *v3;
          v9 = 0;
          v10 = *((_QWORD *)v8 + 47);
          if ( v10 )
            v9 = *(_DWORD *)(v10 + 128);
          v11 = *((_DWORD *)this + 91);
          v12 = 0;
          v13 = (float)(v7 / 2 - v9 / 2 - *v3);
          if ( *((_DWORD *)this + 93) - v11 >= 0 )
            v12 = *((_DWORD *)this + 93) - v11;
          v14 = 0;
          *(float *)v33 = v13;
          v15 = *((_QWORD *)v8 + 47);
          if ( v15 )
            v14 = *(_DWORD *)(v15 + 132);
          v16 = v12 / 2;
          v17 = 0;
          v18 = (float)(v16 - v14 / 2 - v11);
          *(float *)&v33[1] = v18;
          v19 = *((_QWORD *)v8 + 47);
          if ( v19 )
            v17 = *(_DWORD *)(v19 + 128);
          v20 = _mm_cvtsi32_si128(v17);
          v21 = 0;
          *(float *)&v33[2] = _mm_cvtepi32_ps(v20).m128_f32[0] + v13;
          v22 = *((_QWORD *)v8 + 47);
          if ( v22 )
            v21 = *(_DWORD *)(v22 + 132);
          *(float *)&v33[3] = (float)v21 + v18;
          v23 = CRectResourceProxy::Update(v6, (const struct MilRectF *)v33);
          v5 = v23;
          if ( v23 >= 0 )
          {
            v24 = this[37];
            v25 = 0;
            v26 = *((_QWORD *)v24 + 47);
            if ( v26 )
              v25 = *(_DWORD *)(v26 + 128);
            v27 = 0;
            v34[0] = (double)v25;
            v28 = *((_QWORD *)v24 + 47);
            if ( v28 )
              v27 = *(_DWORD *)(v28 + 132);
            v29 = _mm_cvtsi32_si128(v27);
            v30 = this[42];
            *(_QWORD *)&v34[1] = *(_OWORD *)&_mm_cvtepi32_pd(v29);
            v31 = CSizeResourceProxy::Update(v30, (const struct MilSizeD *)v34);
            v5 = v31;
            if ( v31 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0xA5u);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x9Fu);
          }
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0x91u);
  }
  return v5;
}
