/*
 * XREFs of ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800299A4
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18002B020 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x18000DA7C (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ??$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z @ 0x18000E22C (--$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBr.c)
 *     ?Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z @ 0x180018A08 (-Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001D034 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002440C (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x1800265D0 (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x180029550 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18002CD50 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x1800973A4 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPEAVCCombinedGeometryProxy@@@Z @ 0x1800D1860 (-CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPE.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientBlur(CTopLevelWindow *this)
{
  __int64 v1; // r8
  CBaseObject *v2; // r15
  CBaseObject *v3; // r14
  unsigned int v4; // ebx
  struct CBaseGeometryProxy *v5; // r13
  CRenderDataVisual *v7; // rcx
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int RectangleGeometry; // eax
  _QWORD *v14; // rsi
  CBaseObject *v15; // rcx
  struct CVisual **v16; // r12
  __int64 v17; // rax
  int v18; // eax
  int inserted; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rsi
  HRGN v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  int v26; // eax
  __int64 v27; // r8
  int v28; // eax
  struct CBaseLegacyMilBrushProxy **v29; // rsi
  int v30; // eax
  int updated; // eax
  float *v32; // rax
  CSolidColorLegacyMilBrushProxy *v33; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  CBaseObject *v37; // [rsp+30h] [rbp-30h] BYREF
  struct CDrawGeometryInstruction *v38; // [rsp+38h] [rbp-28h] BYREF
  HRGN v39; // [rsp+40h] [rbp-20h] BYREF
  struct _D3DCOLORVALUE v40; // [rsp+48h] [rbp-18h] BYREF

  v1 = *((_QWORD *)this + 94);
  v2 = 0LL;
  v3 = 0LL;
  v37 = 0LL;
  v4 = 0;
  v38 = 0LL;
  v5 = 0LL;
  if ( (*(_BYTE *)(v1 + 665) & 4) == 0 )
  {
    v7 = (CRenderDataVisual *)*((_QWORD *)this + 39);
    if ( v7 )
    {
      v36 = CRenderDataVisual::ClearInstructions(v7);
      v4 = v36;
      if ( v36 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0xF5Bu);
    }
    return v4;
  }
  if ( *(_QWORD *)(v1 + 424) )
  {
    v14 = (_QWORD *)((char *)this + 584);
    v15 = (CBaseObject *)*((_QWORD *)this + 73);
    if ( v15 )
    {
      CBaseObject::Release(v15);
      *v14 = 0LL;
    }
  }
  else
  {
    v9 = *(_DWORD *)(v1 + 224) - *(_DWORD *)(v1 + 216);
    v10 = *(_DWORD *)(v1 + 228) - *(_DWORD *)(v1 + 220);
    v40.r = *(D3DVALUE *)(v1 + 280);
    v11 = 0;
    if ( v9 >= 0 )
      v11 = v9;
    LODWORD(v40.b) = v11 - *(_DWORD *)(v1 + 284) - *(_DWORD *)(v1 + 268) - *(_DWORD *)(v1 + 264);
    v40.g = *(D3DVALUE *)(v1 + 288);
    v12 = 0;
    if ( v10 >= 0 )
      v12 = v10;
    LODWORD(v40.a) = v12 - *(_DWORD *)(v1 + 292) - *(_DWORD *)(v1 + 276) - *(_DWORD *)(v1 + 272);
    RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                          (const struct tagRECT *)&v40,
                          (struct CRectangleGeometryProxy **)this + 73);
    v4 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0xF0Au);
      return v4;
    }
  }
  v16 = (struct CVisual **)((char *)this + 312);
  v17 = *((_QWORD *)this + 39);
  if ( !v17 )
  {
    v18 = CCanvasVisual::Create((struct CCanvasVisual **)this + 39);
    v4 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0xF15u);
      return v4;
    }
    inserted = VisualCollection::InsertRelative(
                 (VisualCollection *)(*((_QWORD *)this + 34) + 32LL),
                 *v16,
                 *((struct CVisual **)this + 37),
                 1,
                 1);
    v4 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0xF17u);
      return v4;
    }
    v20 = *((_QWORD *)this + 70);
    if ( v20 )
      CVisual::SetInsetFromParent(*v16, (const struct _MARGINS *)(v20 + 136));
    CTopLevelWindow::UpdateWindowScale(this);
    v17 = *((_QWORD *)this + 39);
  }
  if ( *(_DWORD *)(v17 + 280) )
    return v4;
  v21 = *((_QWORD *)this + 94);
  v22 = *(_QWORD *)(v21 + 424);
  if ( !v22 )
    v22 = *((_QWORD *)this + 73);
  v23 = 0LL;
  v39 = 0LL;
  v24 = *(_QWORD *)(v21 + 24);
  if ( v24 )
  {
    v25 = (*(__int64 (__fastcall **)(__int64, HRGN *))(*(_QWORD *)v24 + 320LL))(v24, &v39);
    v4 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0xF28u);
      return v4;
    }
    v23 = v39;
  }
  else
  {
    v4 = 0;
  }
  if ( !v23 )
  {
    v5 = (struct CBaseGeometryProxy *)v22;
    if ( v22 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
      v2 = v37;
      v3 = v38;
    }
    goto LABEL_37;
  }
  *(_QWORD *)&v40.r = 0LL;
  v26 = ResourceHelper::CreateGeometryFromHRGN(v23, &v37);
  v4 = v26;
  if ( v26 >= 0 )
  {
    v2 = v37;
    v28 = ResourceHelper::CreateCombinedGeometry(v37, v22, v27, &v40);
    v4 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0xF38u);
      goto LABEL_48;
    }
    v5 = *(struct CBaseGeometryProxy **)&v40.r;
LABEL_37:
    v29 = (struct CBaseLegacyMilBrushProxy **)((char *)this + 800);
    if ( !*((_QWORD *)this + 100) )
    {
      v30 = CCompositor::CreateProxy<CSolidColorLegacyMilBrushProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              (CBaseObject **)this + 100);
      v4 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0xF44u);
        goto LABEL_48;
      }
      updated = CTopLevelWindow::UpdateColorizationColor(this);
      v4 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xF46u);
        goto LABEL_48;
      }
      v32 = (float *)*((_QWORD *)this + 74);
      v33 = *v29;
      v40.r = v32[4] * v32[8];
      v40.g = v32[5] * v32[8];
      v40.b = v32[6] * v32[8];
      v40.a = v32[7];
      CSolidColorLegacyMilBrushProxy::Update(v33, 1.0, &v40);
    }
    if ( !*((_DWORD *)*v16 + 70) )
    {
      v34 = CDrawGeometryInstruction::Create(*v29, v5, &v38);
      v4 = v34;
      if ( v34 >= 0 )
      {
        v3 = v38;
        v35 = CRenderDataVisual::AddInstruction(*v16, v38);
        v4 = v35;
        if ( v35 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0xF53u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, 0xF51u);
        v3 = v38;
      }
    }
    goto LABEL_48;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0xF2Fu);
  v2 = v37;
LABEL_48:
  if ( v2 )
    CBaseObject::Release(v2);
  if ( v5 )
    CBaseObject::Release(v5);
  if ( v3 )
    CBaseObject::Release(v3);
  return v4;
}
