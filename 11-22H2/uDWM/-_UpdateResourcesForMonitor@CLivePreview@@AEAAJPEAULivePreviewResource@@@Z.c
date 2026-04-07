/*
 * XREFs of ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x1800C9654
 * Callers:
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x1800C9564 (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 *     ?s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x1800C9F40 (-s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z.c)
 * Callees:
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x180017974 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrus.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x18001B25C (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x180035D8C (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003858C (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x18004326C (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCS.c)
 *     ?Freeze@CCachedVisualImageProxy@@QEAAJXZ @ 0x180043888 (-Freeze@CCachedVisualImageProxy@@QEAAJXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18005252C (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x1800B3A9C (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x1800C9B58 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 */

__int64 __fastcall CLivePreview::_UpdateResourcesForMonitor(CLivePreview *this, struct LivePreviewResource *a2)
{
  unsigned int v3; // ebx
  unsigned int v5; // esi
  CLivePreview *v6; // rcx
  const struct CTopLevelWindow *v7; // rdx
  int updated; // eax
  int v9; // r9d
  int v10; // edx
  int v11; // r8d
  int RectangleGeometry; // eax
  CCachedVisualImageProxy **v13; // rsi
  int v14; // eax
  __int64 i; // rax
  __int64 v16; // rax
  CCachedVisualImageProxy *v17; // rcx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // r9d
  int v25; // edx
  int v26; // r8d
  int v27; // eax
  CCachedVisualImageProxy **v28; // rsi
  int v29; // eax
  __int64 j; // rax
  __int64 v31; // rax
  CCachedVisualImageProxy *v32; // rcx
  int v33; // eax
  int v34; // eax
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  int GeometryFromHRGN; // eax
  struct CRectangleGeometryProxy **v41; // [rsp+20h] [rbp-69h]
  struct CRectangleGeometryProxy **v42; // [rsp+20h] [rbp-69h]
  __int64 v43; // [rsp+50h] [rbp-39h]
  CCachedVisualImageProxy *v44; // [rsp+68h] [rbp-21h]
  CCachedVisualImageProxy *v45; // [rsp+68h] [rbp-21h]
  __int128 v46; // [rsp+70h] [rbp-19h] BYREF
  __int128 v47; // [rsp+80h] [rbp-9h] BYREF
  __int128 v48; // [rsp+90h] [rbp+7h] BYREF

  v3 = 0;
  SetRectEmpty((LPRECT)a2);
  SetRectEmpty((LPRECT)((char *)a2 + 40));
  SetRectEmpty((LPRECT)a2 + 5);
  *((_QWORD *)a2 + 12) = CreateRectRgn(0, 0, 0, 0);
  v5 = 0;
  if ( !*((_DWORD *)this + 84) )
  {
LABEL_5:
    *((_BYTE *)a2 + 128) = !IsRectEmpty((const RECT *)a2);
    *((_BYTE *)a2 + 129) = !IsRectEmpty((const RECT *)((char *)a2 + 40));
    if ( *((_BYTE *)a2 + 128) )
    {
      v9 = 0;
      v10 = *((_DWORD *)a2 + 1);
      if ( *((_DWORD *)a2 + 3) - v10 >= 0 )
        v9 = *((_DWORD *)a2 + 3) - v10;
      v11 = 0;
      if ( *((_DWORD *)a2 + 2) - *(_DWORD *)a2 >= 0 )
        v11 = *((_DWORD *)a2 + 2) - *(_DWORD *)a2;
      RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                            *(_DWORD *)a2,
                            v10,
                            v11,
                            v9,
                            (struct CRectangleGeometryProxy **)a2 + 2);
      v3 = RectangleGeometry;
      if ( RectangleGeometry < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0x4BBu);
        return v3;
      }
      v13 = (CCachedVisualImageProxy **)((char *)a2 + 24);
      if ( !*((_QWORD *)a2 + 3) )
      {
        v14 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                (CBaseObject **)a2 + 3);
        v3 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x4BFu);
          return v3;
        }
      }
      for ( i = 0LL; i < 4; ++i )
        *((float *)&v46 + i) = (float)*((int *)a2 + i);
      v16 = *((_QWORD *)this + 59);
      v17 = *v13;
      v47 = 0LL;
      v18 = CCachedVisualImageProxy::Update(
              (__int64)v17,
              (__int64)&v46,
              (__int64)&v47,
              0LL,
              0LL,
              *(_QWORD *)(v16 + 16),
              0);
      v3 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x4CEu);
        return v3;
      }
      v19 = CCachedVisualImageProxy::Freeze(*v13);
      v3 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x4D0u);
        return v3;
      }
      if ( !*((_QWORD *)a2 + 4) )
      {
        v21 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                (CBaseObject **)a2 + 4);
        v3 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x4D4u);
          return v3;
        }
      }
      v44 = *v13;
      v22 = *((_QWORD *)a2 + 4);
      v41 = (struct CRectangleGeometryProxy **)*((_QWORD *)this + 56);
      v48 = _xmm;
      v46 = _xmm;
      v23 = CImageLegacyMilBrushProxy::Update(
              v22,
              v20,
              (__int64)&v48,
              (__int64)&v46,
              (__int64)v41,
              1u,
              1,
              0LL,
              0LL,
              0,
              v43,
              0,
              0,
              (__int64)v44);
      v3 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x4EFu);
        return v3;
      }
    }
    if ( *((_BYTE *)a2 + 129) )
    {
      v24 = 0;
      v25 = *((_DWORD *)a2 + 11);
      if ( *((_DWORD *)a2 + 13) - v25 >= 0 )
        v24 = *((_DWORD *)a2 + 13) - v25;
      v26 = 0;
      if ( *((_DWORD *)a2 + 12) - *((_DWORD *)a2 + 10) >= 0 )
        v26 = *((_DWORD *)a2 + 12) - *((_DWORD *)a2 + 10);
      v27 = ResourceHelper::CreateRectangleGeometry(
              *((_DWORD *)a2 + 10),
              v25,
              v26,
              v24,
              (struct CRectangleGeometryProxy **)a2 + 7);
      v3 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x4F9u);
        return v3;
      }
      v28 = (CCachedVisualImageProxy **)((char *)a2 + 64);
      if ( !*((_QWORD *)a2 + 8) )
      {
        v29 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                (CBaseObject **)a2 + 8);
        v3 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0x4FDu);
          return v3;
        }
      }
      for ( j = 0LL; j < 4; ++j )
        *((float *)&v46 + j) = (float)*((int *)a2 + j + 10);
      v31 = *((_QWORD *)this + 61);
      v32 = *v28;
      v48 = 0LL;
      v33 = CCachedVisualImageProxy::Update(
              (__int64)v32,
              (__int64)&v46,
              (__int64)&v48,
              0LL,
              0LL,
              *(_QWORD *)(v31 + 16),
              0);
      v3 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0x50Cu);
        return v3;
      }
      v34 = CCachedVisualImageProxy::Freeze(*v28);
      v3 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, 0x50Eu);
        return v3;
      }
      if ( !*((_QWORD *)a2 + 9) )
      {
        v36 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                (CBaseObject **)a2 + 9);
        v3 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0x512u);
          return v3;
        }
      }
      v37 = *((_QWORD *)a2 + 9);
      v45 = *v28;
      v42 = (struct CRectangleGeometryProxy **)*((_QWORD *)this + 57);
      v47 = _xmm;
      v46 = _xmm;
      v38 = CImageLegacyMilBrushProxy::Update(
              v37,
              v35,
              (__int64)&v47,
              (__int64)&v46,
              (__int64)v42,
              1u,
              1,
              0LL,
              0LL,
              0,
              v43,
              0,
              0,
              (__int64)v45);
      v3 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, 0x52Du);
        return v3;
      }
      GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(
                           *((HRGN *)a2 + 12),
                           (struct CRgnGeometryProxy **)a2 + 13);
      v3 = GeometryFromHRGN;
      if ( GeometryFromHRGN < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, GeometryFromHRGN, 0x52Fu);
        return v3;
      }
    }
    ReleaseGDIObject<HRGN__ *>((void **)a2 + 12);
    return v3;
  }
  while ( 1 )
  {
    v6 = *(CLivePreview **)(*((_QWORD *)this + 39) + 40LL * v5);
    v7 = (const struct CTopLevelWindow *)*((_QWORD *)v6 + 55);
    if ( v7 )
    {
      updated = CLivePreview::_UpdateResourcesForMonitorHelper(v6, v7, a2);
      v3 = updated;
      if ( updated < 0 )
        break;
    }
    if ( ++v5 >= *((_DWORD *)this + 84) )
      goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x4ACu);
  return v3;
}
