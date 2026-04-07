/*
 * XREFs of ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180006AA0
 * Callers:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x1800206E8 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z @ 0x18000E6F0 (--$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18000FAB8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180011304 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z @ 0x180013D94 (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180019288 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUMilPointAndSizeL@@@Z @ 0x180019BF0 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLe.c)
 *     ?Update@CSizeResourceProxy@@QEAAJAEBUMilSizeD@@@Z @ 0x180019D5C (-Update@CSizeResourceProxy@@QEAAJAEBUMilSizeD@@@Z.c)
 *     ?Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z @ 0x18001A19C (-Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18001A2C0 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PE.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18001C2D0 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001D034 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001DA74 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800209A4 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800239B8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027570 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x180028A44 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAPEAV1@@Z @ 0x180038E48 (-Create@CTopLevelWindow@@SAJPEAPEAV1@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180045570 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180046D3C (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180046E0C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowSnapshot::ProcessFreezeSnapshotAndRelease(CWindowSnapshot *this, struct CWindowData *a2)
{
  __int64 v2; // rax
  CBaseObject *v5; // r14
  struct CWindowData *v6; // rdi
  int SyncedWindowData; // eax
  int RectangleGeometry; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __m128i *v11; // rdx
  int v12; // edi
  int v13; // r15d
  CWindowData *v14; // rbx
  __int64 v15; // rdx
  __m128i v16; // xmm1
  int v17; // eax
  unsigned __int64 v18; // xmm0_8
  LONG v19; // edi
  int v20; // r8d
  LONG v21; // r15d
  int v22; // eax
  int v23; // eax
  __int64 i; // rax
  int v25; // eax
  float ScalingFactorForCVI; // xmm0_4
  __int64 v27; // rdx
  CSizeResourceProxy *v28; // rcx
  int v29; // r9d
  int v30; // r8d
  char *v31; // r12
  CVisual **v32; // r15
  CVisual *v33; // rdi
  __int64 v34; // rax
  CVisual *v35; // rdi
  CBaseObject *v36; // rcx
  CVisual *v37; // rdi
  int v39; // r9d
  struct IDwmWindow *v40; // rax
  int v41; // edi
  unsigned int v42; // eax
  float v43; // xmm1_4
  int v44; // r15d
  __m128i v45; // xmm0
  int v46; // eax
  float v47; // xmm0_4
  struct CRectangleGeometryProxy **v48; // [rsp+20h] [rbp-69h]
  unsigned int v49; // [rsp+20h] [rbp-69h]
  int v50; // [rsp+40h] [rbp-49h]
  int v51; // [rsp+40h] [rbp-49h]
  int v52; // [rsp+44h] [rbp-45h]
  int v53; // [rsp+44h] [rbp-45h]
  CVisual *v54; // [rsp+48h] [rbp-41h] BYREF
  int v55[2]; // [rsp+50h] [rbp-39h] BYREF
  int v56; // [rsp+58h] [rbp-31h]
  int v57; // [rsp+5Ch] [rbp-2Dh]
  CBaseObject *v58; // [rsp+60h] [rbp-29h] BYREF
  CBaseObject *v59; // [rsp+68h] [rbp-21h] BYREF
  struct tagRECT v60; // [rsp+70h] [rbp-19h] BYREF
  struct CWindowData *v61; // [rsp+80h] [rbp-9h] BYREF
  double v62[2]; // [rsp+88h] [rbp-1h] BYREF
  _DWORD v63[4]; // [rsp+98h] [rbp+Fh] BYREF

  v2 = *((_QWORD *)this + 4);
  v54 = 0LL;
  v59 = 0LL;
  v5 = 0LL;
  v58 = 0LL;
  *(_DWORD *)(v2 + 64) = 0;
  v6 = a2;
  *(_DWORD *)(*((_QWORD *)this + 4) + 68LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 76LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 72LL) = 0;
  SyncedWindowData = CTopLevelWindow::Create(&v54);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 182;
    goto LABEL_52;
  }
  v9 = *((_QWORD *)v6 + 3);
  if ( v9 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 80LL))(v9) )
    {
      v40 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 3) + 360LL))(*((_QWORD *)a2 + 3));
      if ( v40 )
      {
        v61 = 0LL;
        SyncedWindowData = CWindowList::GetSyncedWindowData(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                             v40,
                             0,
                             &v61);
        RectangleGeometry = SyncedWindowData;
        if ( SyncedWindowData < 0 )
        {
          v49 = 190;
          goto LABEL_52;
        }
        LODWORD(v6) = (_DWORD)v61;
      }
    }
  }
  *((_QWORD *)a2 + 60) = 0LL;
  LODWORD(v48) = 100;
  v10 = CSecondaryWindowRepresentation::Create(
          1543,
          ((_DWORD)this + 16) & (unsigned int)-(this != 0LL),
          (int)v6,
          0,
          v48,
          (__int64)&v58);
  RectangleGeometry = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xCDu);
LABEL_39:
    v5 = v58;
    goto LABEL_40;
  }
  v5 = v58;
  SyncedWindowData = CSecondaryWindowRepresentation::Validate(v58);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 207;
    goto LABEL_52;
  }
  SyncedWindowData = CCompositor::CreateProxy<CRectResourceProxy>(
                       *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                       (char *)this + 56);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 210;
    goto LABEL_52;
  }
  v11 = 0LL;
  v12 = *((_DWORD *)v5 + 20) - *((_DWORD *)v5 + 23);
  v13 = *((_DWORD *)v5 + 21) - *((_DWORD *)v5 + 25);
  v14 = (CWindowData *)*((_QWORD *)v5 + 8);
  v52 = *((_DWORD *)v5 + 22);
  v50 = *((_DWORD *)v5 + 24);
  if ( *((_DWORD *)v5 + 18) == 1 )
    goto LABEL_49;
  if ( *((_DWORD *)v5 + 18) != 2 )
  {
    if ( *((_DWORD *)v5 + 18) != 3 )
      goto LABEL_11;
    if ( !CWindowData::IsImmersiveWindow(v14) )
    {
      v11 = *(__m128i **)(*((_QWORD *)v14 + 61) + 80LL);
      goto LABEL_11;
    }
LABEL_49:
    v11 = (__m128i *)v14;
    goto LABEL_11;
  }
  v15 = *((_QWORD *)v14 + 60);
  if ( !v15 )
    goto LABEL_49;
  v11 = *(__m128i **)(v15 + 32);
LABEL_11:
  v16 = v11[6];
  v17 = _mm_cvtsi128_si32(v16);
  v18 = _mm_srli_si128(v16, 8).m128i_u64[0];
  v19 = v12 - v17;
  v20 = v18 + v50;
  v60.left = v17 + v52;
  v21 = v13 - HIDWORD(v18);
  v60.top = v18 + v50;
  v60.right = v19;
  v22 = v19 - (v17 + v52);
  v60.bottom = v21;
  *(_QWORD *)v55 = 0LL;
  if ( v19 - v60.left < 0 )
    v22 = 0;
  v53 = v22;
  v23 = v21 - v20;
  if ( v21 - v20 < 0 )
    v23 = 0;
  v51 = v23;
  for ( i = 0LL; i < 4; ++i )
    *(float *)&v63[i] = (float)*(int *)((char *)&v60.left + i * 4);
  v25 = CRectResourceProxy::Update(*((CRectResourceProxy **)this + 7), (const struct MilRectF *)v63);
  RectangleGeometry = v25;
  if ( v25 < 0 )
  {
    v39 = v25;
    v49 = 227;
    goto LABEL_55;
  }
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                        0,
                        0,
                        v53,
                        v51,
                        (struct CRectangleGeometryProxy **)this + 11);
  if ( RectangleGeometry < 0 )
  {
    v39 = RectangleGeometry;
    v49 = 229;
    goto LABEL_55;
  }
  ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, &v60);
  v27 = 0LL;
  *((float *)this + 18) = ScalingFactorForCVI;
  v56 = (int)(float)((float)v53 * ScalingFactorForCVI);
  v57 = (int)(float)((float)v51 * ScalingFactorForCVI);
  if ( !*((_QWORD *)this + 6) )
    CDesktopManager::GetCVIFromCache(
      (int)(float)((float)v53 * ScalingFactorForCVI),
      (int)(float)((float)v51 * ScalingFactorForCVI),
      (struct CCachedVisualImageProxy **)this + 6);
  SyncedWindowData = CSecondaryWindowRepresentation::GetBrush(v5, v27, (char *)this + 56, 0LL);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 248;
    goto LABEL_52;
  }
  if ( *((_BYTE *)v5 + 161) )
  {
    v41 = v19 - v60.left;
    v42 = 0;
    v43 = *((float *)v5 + 92);
    if ( v41 >= 0 )
      v42 = v41;
    *((float *)this + 18) = v43;
    v44 = v21 - v60.top;
    v45 = _mm_cvtsi32_si128(v42);
    v46 = 0;
    LODWORD(v47) = _mm_cvtepi32_ps(v45).m128_u32[0];
    if ( v44 >= 0 )
      v46 = v44;
    v30 = (int)(float)(v47 * v43);
    v56 = v30;
    v29 = (int)(float)((float)v46 * v43);
    v57 = v29;
  }
  else
  {
    v28 = (CSizeResourceProxy *)*((_QWORD *)this + 8);
    v62[0] = (double)v56;
    v62[1] = (double)v57;
    SyncedWindowData = CSizeResourceProxy::Update(v28, (const struct MilSizeD *)v62);
    RectangleGeometry = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v49 = 255;
      goto LABEL_52;
    }
    CSecondaryWindowRepresentation::SnapshotIfStatic(
      v5,
      *((struct CCachedVisualImageProxy **)this + 6),
      *((struct CImageLegacyMilBrushProxy **)this + 5),
      (const struct MilPointAndSizeL *)v55);
    v29 = v57;
    v30 = v56;
  }
  SyncedWindowData = ResourceHelper::CreateRectangleGeometry(
                       v55[0],
                       v55[1],
                       v30,
                       v29,
                       (struct CRectangleGeometryProxy **)this + 11);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 266;
    goto LABEL_52;
  }
  v31 = (char *)this + 96;
  SyncedWindowData = CVisual::Create((struct CVisual **)this + 12);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 268;
    goto LABEL_52;
  }
  SyncedWindowData = CDrawGeometryInstruction::Create(
                       *((struct CBaseLegacyMilBrushProxy **)this + 5),
                       *((struct CBaseGeometryProxy **)this + 11),
                       &v59);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 273;
    goto LABEL_52;
  }
  v32 = (CVisual **)((char *)this + 80);
  SyncedWindowData = CRenderDataVisual::Create((struct CRenderDataVisual **)this + 10);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 275;
    goto LABEL_52;
  }
  CVisual::SetScale(*v32, (float)(1.0 / *((float *)this + 18)), (float)(1.0 / *((float *)this + 18)));
  CVisual::SetInterpolationMode(*v32, 1LL);
  SyncedWindowData = CRenderDataVisual::AddInstruction(*v32, v59);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 279;
    goto LABEL_52;
  }
  SyncedWindowData = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)*v32 + 64LL))(*v32);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 280;
    goto LABEL_52;
  }
  v33 = v54;
  *(_QWORD *)(*((_QWORD *)this + 4) + 144LL) = *(_QWORD *)(*(_QWORD *)v31 + 16LL);
  *(_QWORD *)(*((_QWORD *)this + 4) + 440LL) = v33;
  if ( v33 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v33 + 2);
    v5 = v58;
  }
  v34 = *((_QWORD *)this + 4);
  v35 = v54;
  *((_QWORD *)v54 + 94) = v34;
  *((_QWORD *)v35 + 95) = *(_QWORD *)(v34 + 40);
  SyncedWindowData = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)v31 + 32LL), *v32, 0LL, 0, 1);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 286;
    goto LABEL_52;
  }
  CVisual::SetDirtyFlags(v35, 0x400000u);
  CVisual::SetDirtyFlags(v35, 0x2000u);
  SyncedWindowData = CTopLevelWindow::ShowWindow(v35, 1);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 291;
    goto LABEL_52;
  }
  SyncedWindowData = CVisual::RenderRecursive(v35);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData >= 0 )
  {
    v36 = (CBaseObject *)*((_QWORD *)this + 3);
    if ( v36 )
      CBaseObject::Release(v36);
    v37 = v54;
    *((_QWORD *)this + 3) = v54;
    _InterlockedIncrement((volatile signed __int32 *)v37 + 2);
    *((_QWORD *)a2 + 60) = this;
    *(_BYTE *)(*((_QWORD *)this + 4) + 668LL) &= ~8u;
    goto LABEL_39;
  }
  v49 = 292;
LABEL_52:
  v39 = SyncedWindowData;
LABEL_55:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v39, v49);
LABEL_40:
  if ( v54 )
    CBaseObject::Release(v54);
  if ( v59 )
    CBaseObject::Release(v59);
  if ( v5 )
    CBaseObject::Release(v5);
  return (unsigned int)RectangleGeometry;
}
