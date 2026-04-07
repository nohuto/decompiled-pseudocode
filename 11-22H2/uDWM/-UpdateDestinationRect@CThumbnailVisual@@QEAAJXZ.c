/*
 * XREFs of ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18000A06C
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180009440 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x180009938 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180009DA0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x180009E3C (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180009F8C (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x18000A2DC (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z @ 0x18000A738 (-Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z.c)
 *     ?Update@CSizeResourceProxy@@QEAAJAEBUMilSizeD@@@Z @ 0x18000A76C (-Update@CSizeResourceProxy@@QEAAJAEBUMilSizeD@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18005252C (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z @ 0x18010F03C (--$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1801111D0 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateDestinationRect(CThumbnailVisual *this)
{
  unsigned int v2; // edi
  char IsImmersiveIconic; // si
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
  unsigned int v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  double v18; // xmm2_8
  double v19; // xmm1_8
  int v20; // eax
  __int128 v21; // xmm0
  int v22; // r12d
  int v23; // r15d
  int v24; // r14d
  int v25; // esi
  struct CRectangleGeometryProxy **v26; // rbx
  int v27; // eax
  _DWORD *v29; // r8
  int v30; // ecx
  __int32 v31; // eax
  int v32; // ecx
  int v33; // ecx
  __int32 v34; // eax
  int v35; // ecx
  int v36; // eax
  __int64 v37; // r8
  int v38; // ecx
  __int64 v39; // rax
  int v40; // eax
  int v41; // ecx
  float v42; // xmm1_4
  __int64 v43; // rax
  int v44; // eax
  float v45; // xmm2_4
  __int64 v46; // rcx
  unsigned int v47; // ecx
  __int64 v48; // rax
  __m128i v49; // xmm0
  CRectResourceProxy *v50; // rcx
  int v51; // eax
  __int64 v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // rcx
  __m128i v55; // xmm2
  int v56; // eax
  __int64 v57; // rcx
  unsigned int v58; // esi
  unsigned int v59; // r14d
  CDesktopManager *v60; // r15
  unsigned int v61; // eax
  unsigned int v62; // eax
  unsigned int v63; // eax
  int RectangleGeometry; // eax
  int v65; // edx
  int v66; // r8d
  int v67; // ecx
  int v68; // r8d
  int v69; // ecx
  __int128 v70; // [rsp+38h] [rbp-39h] BYREF
  __m128i v71; // [rsp+48h] [rbp-29h] BYREF
  int v72[4]; // [rsp+58h] [rbp-19h] BYREF
  float v73[4]; // [rsp+68h] [rbp-9h] BYREF
  _DWORD v74[4]; // [rsp+78h] [rbp+7h] BYREF

  v2 = 0;
  IsImmersiveIconic = CThumbnailVisual::_IsImmersiveIconic(this);
  IsThumbnailCVIStatic = CThumbnailVisual::_IsThumbnailCVIStatic(this);
  v5 = *((_QWORD *)this + 47);
  v6 = 0LL;
  v7 = IsThumbnailCVIStatic;
  v71 = 0LL;
  v8 = *(_BYTE *)(v5 + 34);
  if ( !v8 )
  {
    if ( v5 )
    {
      v29 = *(_DWORD **)(v5 + 16);
      if ( v29 )
      {
        v30 = 0;
        v71.m128i_i32[0] = -*((_DWORD *)this + 30);
        v71.m128i_i32[1] = -*((_DWORD *)this + 31);
        if ( v29[56] - v29[54] >= 0 )
          v30 = v29[56] - v29[54];
        v31 = v71.m128i_i32[2];
        v32 = v30 - v29[67] - v29[66];
        if ( v32 > 0 )
          v31 = v32;
        v33 = 0;
        v71.m128i_i32[2] = v31;
        if ( v29[57] - v29[55] >= 0 )
          v33 = v29[57] - v29[55];
        v34 = v71.m128i_i32[3];
        v35 = v33 - v29[69] - v29[68];
        if ( v35 > 0 )
          v34 = v35;
        v71.m128i_i32[3] = v34;
        v6 = _mm_loadu_si128(&v71);
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
    *((_QWORD *)&v70 + 1) = __PAIR64__(v10, v9);
    *(_QWORD *)&v70 = 0LL;
    if ( !v8 && v5 && *(_QWORD *)(v5 + 16) && (*(_DWORD *)(v5 + 36) & 0x100000) != 0 && *((_BYTE *)this + 482) )
      CThumbnailVisual::SetDirtyFlags(this, 0x10000);
    if ( IsImmersiveIconic )
    {
      v36 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(this, 0LL);
      v2 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x3FDu, 0LL);
        return v2;
      }
      v37 = *((_QWORD *)this + 48);
      v38 = 0;
      v39 = *(_QWORD *)(v37 + 376);
      if ( v39 )
        v38 = *(_DWORD *)(v39 + 128);
      v40 = (int)v9 / 2 - v38 / 2;
      v41 = 0;
      v42 = (float)v40;
      v73[0] = (float)v40;
      v43 = *(_QWORD *)(v37 + 376);
      if ( v43 )
        v41 = *(_DWORD *)(v43 + 132);
      v44 = 0;
      v45 = (float)((int)v10 / 2 - v41 / 2);
      v73[1] = v45;
      v46 = *(_QWORD *)(v37 + 376);
      if ( v46 )
        v44 = *(_DWORD *)(v46 + 128);
      v47 = 0;
      v73[2] = (float)v44 + v42;
      v48 = *(_QWORD *)(v37 + 376);
      if ( v48 )
        v47 = *(_DWORD *)(v48 + 132);
      v49 = _mm_cvtsi32_si128(v47);
      v50 = (CRectResourceProxy *)*((_QWORD *)this + 51);
      v73[3] = _mm_cvtepi32_ps(v49).m128_f32[0] + v45;
      v51 = CRectResourceProxy::Update(v50, (const struct MilRectF *)v73);
      v2 = v51;
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x405u, 0LL);
        return v2;
      }
    }
    else
    {
      v11 = (CRectResourceProxy *)*((_QWORD *)this + 51);
      v74[0] = 0;
      v74[1] = 0;
      *(float *)&v74[2] = (float)(int)v9 + 0.0;
      *(float *)&v74[3] = (float)(int)v10 + 0.0;
      v12 = CRectResourceProxy::Update(v11, (const struct MilRectF *)v74);
      v2 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x410u, 0LL);
        return v2;
      }
    }
    v13 = *((_QWORD *)this + 59);
    if ( !v13 || !*((_BYTE *)this + 482) )
    {
      *(_OWORD *)v72 = 0LL;
      if ( IsImmersiveIconic )
      {
        v52 = *((_QWORD *)this + 48);
        v53 = 0;
        v54 = *(_QWORD *)(v52 + 376);
        if ( v54 )
          v53 = *(_DWORD *)(v54 + 128);
        v55 = _mm_cvtsi32_si128(v53);
        v56 = 0;
        *(_QWORD *)&v18 = *(_OWORD *)&_mm_cvtepi32_pd(v55);
        *(double *)v72 = v18;
        v57 = *(_QWORD *)(v52 + 376);
        if ( v57 )
          v56 = *(_DWORD *)(v57 + 132);
        v19 = (double)v56;
      }
      else
      {
        if ( v13 )
        {
          v58 = 0;
          v59 = 0;
          v60 = CDesktopManager::s_pDesktopManagerInstance;
          if ( *((_DWORD *)this + 81) - *((_DWORD *)this + 79) >= 0 )
            v58 = *((_DWORD *)this + 81) - *((_DWORD *)this + 79);
          if ( *((_DWORD *)this + 80) - *((_DWORD *)this + 78) >= 0 )
            v59 = *((_DWORD *)this + 80) - *((_DWORD *)this + 78);
          v61 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 39);
          if ( v59 > v61 || v58 > v61 )
          {
            v62 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 6)
                                                                  + 32LL)
                                                    + 480LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                          + 6)
                                                                        + 32LL));
            *((_DWORD *)v60 + 39) = v62;
            if ( v59 > v62 || v58 > v62 )
              MicrosoftTelemetryAssertTriggeredNoArgs();
          }
          v16 = *((_DWORD *)v60 + 39);
          v17 = v16;
          if ( v59 < v16 )
            v17 = v59;
          if ( v58 < v16 )
            v16 = v58;
        }
        else
        {
          v14 = CDesktopManager::s_pDesktopManagerInstance;
          v15 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 39);
          if ( v9 > v15 || v10 > v15 )
          {
            v63 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 6)
                                                                  + 32LL)
                                                    + 480LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                          + 6)
                                                                        + 32LL));
            *((_DWORD *)v14 + 39) = v63;
            if ( v9 > v63 || v10 > v63 )
              MicrosoftTelemetryAssertTriggeredNoArgs();
          }
          v16 = *((_DWORD *)v14 + 39);
          v17 = v16;
          if ( v9 < v16 )
            v17 = v9;
          if ( v10 < v16 )
            v16 = v10;
        }
        v18 = (double)v17;
        v19 = (double)(int)v16;
        *(double *)v72 = (double)v17;
      }
      *(double *)&v72[2] = v19;
      if ( !*((_BYTE *)this + 482)
        || (*((double *)this + 61) != v18 || *((double *)this + 62) != v19)
        && (*(_DWORD *)(*((_QWORD *)this + 47) + 36LL) & 0x100000) == 0 )
      {
        v20 = CSizeResourceProxy::Update(*((CSizeResourceProxy **)this + 52), (const struct MilSizeD *)v72);
        v2 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x42Eu, 0LL);
          return v2;
        }
        v21 = *(_OWORD *)v72;
        *((_BYTE *)this + 482) = 1;
        *(_OWORD *)((char *)this + 488) = v21;
      }
    }
    if ( v8 )
      *(_OWORD *)v72 = v70;
    else
      IntersectRectT<MilPointAndSizeL>(v72, &v70, &v71);
    if ( CThumbnailVisual::_HasBorder(this) && *((_QWORD *)this + 54) )
    {
      v25 = v72[3];
      v24 = v72[2];
      v23 = v72[1];
      v22 = v72[0];
      RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                            v72[0],
                            v72[1],
                            v72[2],
                            v72[3],
                            (struct CRectangleGeometryProxy **)this + 54);
      v2 = RectangleGeometry;
      if ( RectangleGeometry < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RectangleGeometry, 0x444u, 0LL);
        return v2;
      }
      v65 = *((_DWORD *)this + 126);
      v66 = *((_DWORD *)this + 32);
      v67 = *((_DWORD *)this + 33);
      LODWORD(v70) = v65;
      DWORD1(v70) = v65;
      v68 = v66 - 2 * v65;
      v69 = v67 - 2 * v65;
      *((_QWORD *)&v70 + 1) = __PAIR64__(v69, v68);
      if ( v68 <= 0 || v69 <= 0 )
        goto LABEL_25;
      if ( v8 )
      {
        v22 = v65;
        v23 = v65;
        v24 = v68;
        v25 = v69;
        goto LABEL_25;
      }
      IntersectRectT<MilPointAndSizeL>(v72, &v70, &v71);
    }
    v22 = v72[0];
    v23 = v72[1];
    v24 = v72[2];
    v25 = v72[3];
LABEL_25:
    *(_OWORD *)((char *)this + 508) = v70;
    *(__m128i *)((char *)this + 540) = v6;
    v26 = (struct CRectangleGeometryProxy **)((char *)this + 424);
    if ( *v26 )
    {
      v27 = ResourceHelper::CreateRectangleGeometry(v22, v23, v24, v25, v26);
      v2 = v27;
      if ( v27 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x45Du, 0LL);
    }
  }
  return v2;
}
