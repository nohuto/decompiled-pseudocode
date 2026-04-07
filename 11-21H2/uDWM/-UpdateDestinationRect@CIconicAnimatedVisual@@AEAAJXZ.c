/*
 * XREFs of ?UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800BE5B4
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800BE8B0 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CSizeResourceProxy@@QEAAJAEBUMilSizeD@@@Z @ 0x180019D5C (-Update@CSizeResourceProxy@@QEAAJAEBUMilSizeD@@@Z.c)
 *     ?Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z @ 0x18001A19C (-Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x1800973A4 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 */

__int64 __fastcall CIconicAnimatedVisual::UpdateDestinationRect(struct CRectangleGeometryProxy **this)
{
  _QWORD *v1; // rbp
  _DWORD *v3; // rsi
  int RectangleGeometry; // eax
  unsigned int v5; // ebx
  CRectResourceProxy *v6; // r9
  int v7; // eax
  struct CRectangleGeometryProxy *v8; // r8
  int v9; // r10d
  __int64 v10; // rcx
  int v11; // r11d
  int v12; // ecx
  int v13; // eax
  float v14; // xmm2_4
  int v15; // r10d
  __int64 v16; // rcx
  int v17; // ecx
  int v18; // eax
  float v19; // xmm1_4
  __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // rax
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
          v12 = v7 / 2;
          v13 = 0;
          v14 = (float)(v12 - v9 / 2 - *v3);
          if ( *((_DWORD *)this + 93) - v11 >= 0 )
            v13 = *((_DWORD *)this + 93) - v11;
          v15 = 0;
          *(float *)v33 = v14;
          v16 = *((_QWORD *)v8 + 47);
          if ( v16 )
            v15 = *(_DWORD *)(v16 + 132);
          v17 = v13 / 2;
          v18 = 0;
          v19 = (float)(v17 - v15 / 2 - v11);
          *(float *)&v33[1] = v19;
          v20 = *((_QWORD *)v8 + 47);
          if ( v20 )
            v18 = *(_DWORD *)(v20 + 128);
          v21 = 0;
          *(float *)&v33[2] = (float)v18 + v14;
          v22 = *((_QWORD *)v8 + 47);
          if ( v22 )
            v21 = *(_DWORD *)(v22 + 132);
          *(float *)&v33[3] = (float)v21 + v19;
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
