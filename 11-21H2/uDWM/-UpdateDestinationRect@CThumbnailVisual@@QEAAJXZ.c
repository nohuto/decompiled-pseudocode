/*
 * XREFs of ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x180019D90
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18001C720 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18000FAB8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Update@CSizeResourceProxy@@QEAAJAEBUMilSizeD@@@Z @ 0x180019D5C (-Update@CSizeResourceProxy@@QEAAJAEBUMilSizeD@@@Z.c)
 *     ?Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z @ 0x18001A19C (-Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x18001A1D0 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001C5E4 (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x18001CE70 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x18001CEF4 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18001D828 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z @ 0x180108908 (--$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18010B248 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateDestinationRect(CThumbnailVisual *this)
{
  unsigned int v2; // edi
  bool IsImmersiveIconic; // si
  bool IsThumbnailCVIStatic; // al
  __int64 v5; // rdx
  __m128i v6; // xmm6
  bool v7; // r9
  char v8; // r13
  unsigned int v9; // r15d
  unsigned int v10; // r14d
  CRectResourceProxy *v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  CDesktopManager *v14; // rsi
  unsigned int v15; // ecx
  int v16; // eax
  double v17; // xmm2_8
  double v18; // xmm1_8
  int v19; // eax
  __int128 v20; // xmm0
  int v21; // r12d
  int v22; // r15d
  int v23; // r14d
  int v24; // esi
  struct CRectangleGeometryProxy **v25; // rbx
  int v26; // eax
  _DWORD *v28; // r8
  int v29; // ecx
  __int32 v30; // eax
  int v31; // ecx
  int v32; // ecx
  __int32 v33; // eax
  int v34; // ecx
  int v35; // eax
  __int64 v36; // r8
  int v37; // ecx
  __int64 v38; // rax
  int v39; // eax
  int v40; // ecx
  float v41; // xmm1_4
  __int64 v42; // rax
  int v43; // eax
  float v44; // xmm2_4
  __int64 v45; // rcx
  unsigned int v46; // ecx
  __int64 v47; // rax
  __m128i v48; // xmm0
  CRectResourceProxy *v49; // rcx
  int v50; // eax
  __int64 v51; // rdx
  int v52; // ecx
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rcx
  unsigned int v56; // esi
  unsigned int v57; // r14d
  CDesktopManager *v58; // r15
  unsigned int v59; // eax
  unsigned int v60; // eax
  int RectangleGeometry; // eax
  int v62; // edx
  int v63; // r8d
  int v64; // ecx
  int v65; // r8d
  int v66; // ecx
  __int128 v67; // [rsp+38h] [rbp-39h] BYREF
  __m128i v68; // [rsp+48h] [rbp-29h] BYREF
  int v69[4]; // [rsp+58h] [rbp-19h] BYREF
  float v70[4]; // [rsp+68h] [rbp-9h] BYREF
  _DWORD v71[4]; // [rsp+78h] [rbp+7h] BYREF

  v2 = 0;
  IsImmersiveIconic = CThumbnailVisual::_IsImmersiveIconic(this);
  IsThumbnailCVIStatic = CThumbnailVisual::_IsThumbnailCVIStatic(this);
  v5 = *((_QWORD *)this + 47);
  v6 = 0LL;
  v7 = IsThumbnailCVIStatic;
  v68 = 0LL;
  v8 = *(_BYTE *)(v5 + 34);
  if ( !v8 )
  {
    if ( v5 )
    {
      v28 = *(_DWORD **)(v5 + 16);
      if ( v28 )
      {
        v29 = 0;
        v68.m128i_i32[0] = -*((_DWORD *)this + 30);
        v68.m128i_i32[1] = -*((_DWORD *)this + 31);
        if ( v28[56] - v28[54] >= 0 )
          v29 = v28[56] - v28[54];
        v30 = v68.m128i_i32[2];
        v31 = v29 - v28[67] - v28[66];
        if ( v31 > 0 )
          v30 = v31;
        v32 = 0;
        v68.m128i_i32[2] = v30;
        if ( v28[57] - v28[55] >= 0 )
          v32 = v28[57] - v28[55];
        v33 = v68.m128i_i32[3];
        v34 = v32 - v28[69] - v28[68];
        if ( v34 > 0 )
          v33 = v34;
        v68.m128i_i32[3] = v33;
        v6 = _mm_loadu_si128(&v68);
      }
    }
  }
  if ( v7 )
  {
    *(__m128i *)((char *)this + 540) = v6;
    return v2;
  }
  if ( *((_QWORD *)this + 51) && *((_QWORD *)this + 52) )
  {
    v9 = *((_DWORD *)this + 32);
    v10 = *((_DWORD *)this + 33);
    *((_QWORD *)&v67 + 1) = __PAIR64__(v10, v9);
    *(_QWORD *)&v67 = 0LL;
    if ( !v8 && v5 && *(_QWORD *)(v5 + 16) && (*(_DWORD *)(v5 + 36) & 0x100000) != 0 && *((_BYTE *)this + 482) )
      CThumbnailVisual::SetDirtyFlags(this, 0x10000u);
    if ( IsImmersiveIconic )
    {
      v35 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(this, 0LL);
      v2 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x3F4u);
        return v2;
      }
      v36 = *((_QWORD *)this + 48);
      v37 = 0;
      v38 = *(_QWORD *)(v36 + 376);
      if ( v38 )
        v37 = *(_DWORD *)(v38 + 128);
      v39 = (int)v9 / 2 - v37 / 2;
      v40 = 0;
      v41 = (float)v39;
      v70[0] = (float)v39;
      v42 = *(_QWORD *)(v36 + 376);
      if ( v42 )
        v40 = *(_DWORD *)(v42 + 132);
      v43 = 0;
      v44 = (float)((int)v10 / 2 - v40 / 2);
      v70[1] = v44;
      v45 = *(_QWORD *)(v36 + 376);
      if ( v45 )
        v43 = *(_DWORD *)(v45 + 128);
      v46 = 0;
      v70[2] = (float)v43 + v41;
      v47 = *(_QWORD *)(v36 + 376);
      if ( v47 )
        v46 = *(_DWORD *)(v47 + 132);
      v48 = _mm_cvtsi32_si128(v46);
      v49 = (CRectResourceProxy *)*((_QWORD *)this + 51);
      v70[3] = _mm_cvtepi32_ps(v48).m128_f32[0] + v44;
      v50 = CRectResourceProxy::Update(v49, (const struct MilRectF *)v70);
      v2 = v50;
      if ( v50 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v50, 0x3FCu);
        return v2;
      }
    }
    else
    {
      v11 = (CRectResourceProxy *)*((_QWORD *)this + 51);
      v71[1] = 0;
      v71[0] = 0;
      *(float *)&v71[2] = (float)(int)v9 + 0.0;
      *(float *)&v71[3] = (float)(int)v10 + 0.0;
      v12 = CRectResourceProxy::Update(v11, (const struct MilRectF *)v71);
      v2 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x407u);
        return v2;
      }
    }
    v13 = *((_QWORD *)this + 59);
    if ( !v13 || !*((_BYTE *)this + 482) )
    {
      *(_OWORD *)v69 = 0LL;
      if ( IsImmersiveIconic )
      {
        v51 = *((_QWORD *)this + 48);
        v52 = 0;
        v53 = *(_QWORD *)(v51 + 376);
        if ( v53 )
          v52 = *(_DWORD *)(v53 + 128);
        v54 = 0;
        v17 = (double)v52;
        *(double *)v69 = (double)v52;
        v55 = *(_QWORD *)(v51 + 376);
        if ( v55 )
          v54 = *(_DWORD *)(v55 + 132);
        v18 = (double)v54;
      }
      else
      {
        if ( v13 )
        {
          v56 = 0;
          v57 = 0;
          v58 = CDesktopManager::s_pDesktopManagerInstance;
          if ( *((_DWORD *)this + 81) - *((_DWORD *)this + 79) >= 0 )
            v56 = *((_DWORD *)this + 81) - *((_DWORD *)this + 79);
          v15 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 37);
          if ( *((_DWORD *)this + 80) - *((_DWORD *)this + 78) >= 0 )
            v57 = *((_DWORD *)this + 80) - *((_DWORD *)this + 78);
          if ( v57 > v15 || v56 > v15 )
          {
            v59 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 5)
                                                                  + 24LL)
                                                    + 480LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                          + 5)
                                                                        + 24LL));
            *((_DWORD *)v58 + 37) = v59;
            v15 = v59;
            if ( v57 > v59 || v56 > v59 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgs(v59);
              v15 = *((_DWORD *)v58 + 37);
            }
          }
          v16 = v15;
          if ( v57 < v15 )
            v16 = v57;
          if ( v56 < v15 )
            v15 = v56;
        }
        else
        {
          v14 = CDesktopManager::s_pDesktopManagerInstance;
          v15 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 37);
          if ( v9 > v15 || v10 > v15 )
          {
            v60 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 5)
                                                                  + 24LL)
                                                    + 480LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                          + 5)
                                                                        + 24LL));
            *((_DWORD *)v14 + 37) = v60;
            v15 = v60;
            if ( v9 > v60 || v10 > v60 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgs(v60);
              v15 = *((_DWORD *)v14 + 37);
            }
          }
          v16 = v15;
          if ( v9 < v15 )
            v16 = v9;
          if ( v10 < v15 )
            v15 = v10;
        }
        v17 = (double)v16;
        v18 = (double)(int)v15;
        *(double *)v69 = (double)v16;
      }
      *(double *)&v69[2] = v18;
      if ( !*((_BYTE *)this + 482)
        || (*((double *)this + 61) != v17 || *((double *)this + 62) != v18)
        && (*(_DWORD *)(*((_QWORD *)this + 47) + 36LL) & 0x100000) == 0 )
      {
        v19 = CSizeResourceProxy::Update(*((CSizeResourceProxy **)this + 52), (const struct MilSizeD *)v69);
        v2 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x425u);
          return v2;
        }
        v20 = *(_OWORD *)v69;
        *((_BYTE *)this + 482) = 1;
        *(_OWORD *)((char *)this + 488) = v20;
      }
    }
    if ( v8 )
      *(_OWORD *)v69 = v67;
    else
      IntersectRectT<MilPointAndSizeL>(v69, &v67, &v68);
    if ( CThumbnailVisual::_HasBorder(this) && *((_QWORD *)this + 54) )
    {
      v24 = v69[3];
      v23 = v69[2];
      v22 = v69[1];
      v21 = v69[0];
      RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                            v69[0],
                            v69[1],
                            v69[2],
                            v69[3],
                            (struct CRectangleGeometryProxy **)this + 54);
      v2 = RectangleGeometry;
      if ( RectangleGeometry < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0x43Bu);
        return v2;
      }
      v62 = *((_DWORD *)this + 126);
      v63 = *((_DWORD *)this + 32);
      v64 = *((_DWORD *)this + 33);
      LODWORD(v67) = v62;
      DWORD1(v67) = v62;
      v65 = v63 - 2 * v62;
      v66 = v64 - 2 * v62;
      *((_QWORD *)&v67 + 1) = __PAIR64__(v66, v65);
      if ( v65 <= 0 || v66 <= 0 )
        goto LABEL_25;
      if ( v8 )
      {
        v21 = v62;
        v22 = v62;
        v23 = v65;
        v24 = v66;
        goto LABEL_25;
      }
      IntersectRectT<MilPointAndSizeL>(v69, &v67, &v68);
    }
    v21 = v69[0];
    v22 = v69[1];
    v23 = v69[2];
    v24 = v69[3];
LABEL_25:
    *(_OWORD *)((char *)this + 508) = v67;
    *(__m128i *)((char *)this + 540) = v6;
    v25 = (struct CRectangleGeometryProxy **)((char *)this + 424);
    if ( *v25 )
    {
      v26 = ResourceHelper::CreateRectangleGeometry(v21, v22, v23, v24, v25);
      v2 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x454u);
    }
  }
  return v2;
}
