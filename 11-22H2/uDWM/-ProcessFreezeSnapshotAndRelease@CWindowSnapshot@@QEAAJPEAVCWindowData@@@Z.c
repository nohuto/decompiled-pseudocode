/*
 * XREFs of ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180008108
 * Callers:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180006B78 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUMilPointAndSizeL@@@Z @ 0x180009258 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLe.c)
 *     ?Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z @ 0x18000A738 (-Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z.c)
 *     ?Update@CSizeResourceProxy@@QEAAJAEBUMilSizeD@@@Z @ 0x18000A76C (-Update@CSizeResourceProxy@@QEAAJAEBUMilSizeD@@@Z.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18000A7A0 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PE.c)
 *     ??$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z @ 0x180012CFC (--$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001BEDC (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18001C97C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18001CC7C (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x18001CE0C (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D634 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18002E490 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800341D8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180034E90 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x180036C34 (-Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180037EFC (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z @ 0x1800425CC (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x1800469BC (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180047520 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18005252C (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180054398 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x1800543E4 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowSnapshot::ProcessFreezeSnapshotAndRelease(CWindowSnapshot *this, struct CWindowData *a2)
{
  __int64 v2; // rax
  struct CWindowData *v5; // r14
  CBaseObject *v6; // rsi
  int SyncedWindowData; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __m128i *v11; // rdx
  int v12; // r14d
  int v13; // r15d
  CWindowData *v14; // rbx
  __m128i v15; // xmm1
  int v16; // eax
  unsigned __int64 v17; // xmm0_8
  int v18; // edx
  int v19; // r8d
  LONG v20; // r15d
  LONG v21; // eax
  int v22; // r14d
  int v23; // r15d
  __int64 v24; // rax
  __int64 v25; // rdx
  float ScalingFactorForCVI; // xmm0_4
  bool v27; // zf
  CSizeResourceProxy *v28; // rcx
  int v29; // r9d
  int v30; // r8d
  char *v31; // r15
  CVisual **v32; // r14
  CBaseObject *v33; // r14
  int v34; // eax
  CVisual *v35; // rcx
  int v36; // eax
  CVisual *v37; // rcx
  CBaseObject *v38; // rcx
  CBaseObject *v39; // r14
  __int64 v41; // rdx
  struct IDwmWindow *v42; // rax
  unsigned int v43; // eax
  float v44; // xmm1_4
  __m128i v45; // xmm0
  int v46; // eax
  float v47; // xmm0_4
  struct CRectangleGeometryProxy **v48; // [rsp+20h] [rbp-69h]
  bool v49; // [rsp+20h] [rbp-69h]
  unsigned int v50; // [rsp+20h] [rbp-69h]
  int v51; // [rsp+40h] [rbp-49h]
  int v52; // [rsp+40h] [rbp-49h]
  int v53; // [rsp+44h] [rbp-45h]
  int v54; // [rsp+44h] [rbp-45h]
  CBaseObject *v55; // [rsp+48h] [rbp-41h] BYREF
  int v56[2]; // [rsp+50h] [rbp-39h] BYREF
  int v57; // [rsp+58h] [rbp-31h]
  int v58; // [rsp+5Ch] [rbp-2Dh]
  CBaseObject *v59; // [rsp+60h] [rbp-29h] BYREF
  CBaseObject *v60; // [rsp+68h] [rbp-21h] BYREF
  struct CWindowData *v61; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT v62; // [rsp+78h] [rbp-11h] BYREF
  double v63[2]; // [rsp+88h] [rbp-1h] BYREF
  _DWORD v64[4]; // [rsp+98h] [rbp+Fh] BYREF

  v2 = *((_QWORD *)this + 4);
  v55 = 0LL;
  v60 = 0LL;
  v5 = a2;
  v59 = 0LL;
  *(_DWORD *)(v2 + 64) = 0;
  v6 = 0LL;
  *(_DWORD *)(*((_QWORD *)this + 4) + 68LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 76LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 72LL) = 0;
  SyncedWindowData = CTopLevelWindow::Create(*((struct CWindowData **)this + 4), &v55);
  v8 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v50 = 176;
    goto LABEL_52;
  }
  v9 = *((_QWORD *)v5 + 3);
  if ( v9 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 80LL))(v9) )
    {
      v42 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 3) + 360LL))(*((_QWORD *)a2 + 3));
      if ( v42 )
      {
        v61 = 0LL;
        SyncedWindowData = CWindowList::GetSyncedWindowData(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                             v42,
                             0,
                             &v61);
        v8 = SyncedWindowData;
        if ( SyncedWindowData < 0 )
        {
          v50 = 184;
          goto LABEL_52;
        }
        LODWORD(v5) = (_DWORD)v61;
      }
    }
  }
  *((_QWORD *)a2 + 60) = 0LL;
  LODWORD(v48) = 100;
  v10 = CSecondaryWindowRepresentation::Create(
          1543,
          ((_DWORD)this + 16) & (unsigned int)-(this != 0LL),
          (int)v5,
          0,
          v48,
          (__int64)&v59);
  v8 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC7u, 0LL);
LABEL_38:
    v6 = v59;
    goto LABEL_39;
  }
  v6 = v59;
  SyncedWindowData = CSecondaryWindowRepresentation::Validate(v59);
  v8 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v50 = 201;
    goto LABEL_52;
  }
  SyncedWindowData = CCompositor::CreateProxy<CRectResourceProxy>(
                       *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                       (char *)this + 56);
  v8 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v50 = 204;
    goto LABEL_52;
  }
  v11 = 0LL;
  v12 = *((_DWORD *)v6 + 20) - *((_DWORD *)v6 + 23);
  v13 = *((_DWORD *)v6 + 21) - *((_DWORD *)v6 + 25);
  v14 = (CWindowData *)*((_QWORD *)v6 + 8);
  v53 = *((_DWORD *)v6 + 22);
  v51 = *((_DWORD *)v6 + 24);
  switch ( *((_DWORD *)v6 + 18) )
  {
    case 1:
      goto LABEL_8;
    case 2:
      v41 = *((_QWORD *)v14 + 60);
      if ( v41 )
      {
        v11 = *(__m128i **)(v41 + 32);
        break;
      }
LABEL_8:
      v11 = (__m128i *)v14;
      break;
    case 3:
      if ( CWindowData::IsImmersiveWindow(v14) )
        goto LABEL_8;
      v11 = *(__m128i **)(*((_QWORD *)v14 + 61) + 80LL);
      break;
  }
  v15 = v11[6];
  v16 = _mm_cvtsi128_si32(v15);
  v17 = _mm_srli_si128(v15, 8).m128i_u64[0];
  *(_QWORD *)v56 = 0LL;
  v18 = v16 + v53;
  v19 = v17 + v51;
  v62.right = v12 - v16;
  v62.top = v17 + v51;
  v20 = v13 - HIDWORD(v17);
  v54 = v12 - v16 - (v16 + v53);
  v21 = v20;
  v62.bottom = v20;
  v22 = v62.right - v18;
  v62.left = v18;
  if ( v62.right - v18 < 0 )
    v22 = 0;
  v23 = v20 - v19;
  v52 = v21 - v19;
  v24 = 0LL;
  if ( v23 < 0 )
    v23 = 0;
  do
  {
    *(float *)&v64[v24] = (float)*(int *)((char *)&v62.left + v24 * 4);
    ++v24;
  }
  while ( v24 < 4 );
  SyncedWindowData = CRectResourceProxy::Update(*((CRectResourceProxy **)this + 7), (const struct MilRectF *)v64);
  v8 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v50 = 221;
    goto LABEL_52;
  }
  SyncedWindowData = ResourceHelper::CreateRectangleGeometry(
                       0,
                       0,
                       v22,
                       v23,
                       (struct CRectangleGeometryProxy **)this + 11);
  v8 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v50 = 223;
    goto LABEL_52;
  }
  ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, &v62);
  v27 = *((_QWORD *)this + 6) == 0LL;
  *((float *)this + 18) = ScalingFactorForCVI;
  v57 = (int)(float)((float)v22 * ScalingFactorForCVI);
  v58 = (int)(float)((float)v23 * ScalingFactorForCVI);
  if ( v27 )
    CDesktopManager::GetCVIFromCache(
      (int)(float)((float)v22 * ScalingFactorForCVI),
      (int)(float)((float)v23 * ScalingFactorForCVI),
      (struct CCachedVisualImageProxy **)this + 6);
  SyncedWindowData = CSecondaryWindowRepresentation::GetBrush(v6, v25, (char *)this + 56, 0LL);
  v8 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v50 = 242;
  }
  else
  {
    if ( *((_BYTE *)v6 + 161) )
    {
      v43 = 0;
      v44 = *((float *)v6 + 92);
      *((float *)this + 18) = v44;
      if ( v54 >= 0 )
        v43 = v54;
      v45 = _mm_cvtsi32_si128(v43);
      v46 = 0;
      LODWORD(v47) = _mm_cvtepi32_ps(v45).m128_u32[0];
      if ( v52 >= 0 )
        v46 = v52;
      v30 = (int)(float)(v47 * v44);
      v57 = v30;
      v29 = (int)(float)((float)v46 * v44);
      v58 = v29;
    }
    else
    {
      v28 = (CSizeResourceProxy *)*((_QWORD *)this + 8);
      v63[0] = (double)v57;
      v63[1] = (double)v58;
      SyncedWindowData = CSizeResourceProxy::Update(v28, (const struct MilSizeD *)v63);
      v8 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v50 = 249;
        goto LABEL_52;
      }
      CSecondaryWindowRepresentation::SnapshotIfStatic(
        v6,
        *((struct CCachedVisualImageProxy **)this + 6),
        *((struct CImageLegacyMilBrushProxy **)this + 5),
        (const struct MilPointAndSizeL *)v56);
      v29 = v58;
      v30 = v57;
    }
    SyncedWindowData = ResourceHelper::CreateRectangleGeometry(
                         v56[0],
                         v56[1],
                         v30,
                         v29,
                         (struct CRectangleGeometryProxy **)this + 11);
    v8 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v50 = 260;
      goto LABEL_52;
    }
    v31 = (char *)this + 96;
    SyncedWindowData = CVisual::Create((struct CVisual **)this + 12);
    v8 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v50 = 262;
      goto LABEL_52;
    }
    SyncedWindowData = CDrawGeometryInstruction::Create(
                         *((struct CBaseLegacyMilBrushProxy **)this + 5),
                         *((struct CBaseGeometryProxy **)this + 11),
                         &v60);
    v8 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v50 = 267;
      goto LABEL_52;
    }
    v32 = (CVisual **)((char *)this + 80);
    SyncedWindowData = CRenderDataVisual::Create((struct CRenderDataVisual **)this + 10);
    v8 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v50 = 269;
      goto LABEL_52;
    }
    CVisual::SetScale(*v32, (float)(1.0 / *((float *)this + 18)), (float)(1.0 / *((float *)this + 18)));
    CVisual::SetInterpolationMode(*v32, 1LL);
    SyncedWindowData = CRenderDataVisual::AddInstruction(*v32, v60);
    v8 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v50 = 273;
      goto LABEL_52;
    }
    SyncedWindowData = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)*v32 + 64LL))(*v32);
    v8 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v50 = 274;
      goto LABEL_52;
    }
    *(_QWORD *)(*((_QWORD *)this + 4) + 144LL) = *(_QWORD *)(*(_QWORD *)v31 + 16LL);
    SyncedWindowData = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)v31 + 32LL), *v32, 0LL, 0, v49);
    v8 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v50 = 278;
      goto LABEL_52;
    }
    v33 = v55;
    v34 = *((_DWORD *)v55 + 22);
    if ( (v34 & 0x400000) == 0 )
    {
      v35 = v55;
      *((_DWORD *)v55 + 22) = v34 | 0x400000;
      CVisual::PropagateDirtyChildren(v35);
    }
    v36 = *((_DWORD *)v33 + 22);
    if ( (v36 & 0x2000) == 0 )
    {
      v37 = v55;
      *((_DWORD *)v33 + 22) = v36 | 0x2000;
      CVisual::PropagateDirtyChildren(v37);
    }
    SyncedWindowData = CTopLevelWindow::ShowWindow(v55, 1);
    v8 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v50 = 283;
      goto LABEL_52;
    }
    SyncedWindowData = CVisual::RenderRecursive(v55);
    v8 = SyncedWindowData;
    if ( SyncedWindowData >= 0 )
    {
      v38 = (CBaseObject *)*((_QWORD *)this + 3);
      if ( v38 )
        CBaseObject::Release(v38);
      v39 = v55;
      *((_QWORD *)this + 3) = v55;
      _InterlockedIncrement((volatile signed __int32 *)v39 + 2);
      *((_QWORD *)a2 + 60) = this;
      *(_BYTE *)(*((_QWORD *)this + 4) + 676LL) &= ~8u;
      goto LABEL_38;
    }
    v50 = 284;
  }
LABEL_52:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, v50, 0LL);
LABEL_39:
  if ( v55 )
    CBaseObject::Release(v55);
  if ( v60 )
    CBaseObject::Release(v60);
  if ( v6 )
    CBaseObject::Release(v6);
  return v8;
}
