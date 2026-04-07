/*
 * XREFs of ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800D3950
 * Callers:
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800D2248 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D2E34 (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001D034 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180047B34 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x1800973A4 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CScreenRotation::UpdateBackgroundInstructionsAndSize(
        CScreenRotation *this,
        const struct tagSIZE *a2,
        char a3)
{
  CBaseObject *v6; // rbx
  LONG cy; // ecx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rax
  struct CBaseLegacyMilBrushProxy *v12; // rcx
  CBaseObject *v13; // rcx
  struct CSolidRectangleInstruction *v15; // [rsp+20h] [rbp-30h] BYREF
  CBaseObject *v16; // [rsp+28h] [rbp-28h] BYREF
  CBaseObject *v17; // [rsp+30h] [rbp-20h] BYREF
  struct tagRECT v18; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v16 = 0LL;
  v15 = 0LL;
  v6 = 0LL;
  v17 = 0LL;
  cy = a2->cy;
  v18.left = a2->cx;
  v18.top = cy;
  (*(void (__fastcall **)(CScreenRotation *, struct tagRECT *))(*(_QWORD *)this + 96LL))(this, &v18);
  CRenderDataVisual::ClearInstructions(this);
  if ( a3 )
  {
    v18.left = 0;
    v18.top = 0;
    v18.right = *((_DWORD *)this + 32);
    v18.bottom = *((_DWORD *)this + 33);
    v17 = 0LL;
    v8 = ResourceHelper::CreateRectangleGeometry(&v18, &v17);
    v9 = v8;
    v6 = v17;
    if ( v8 < 0 )
    {
      v10 = 38LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"clientcore\\windows\\dwm\\udwm\\screenrotation.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_16;
    }
    v11 = *((_QWORD *)this + 40);
    v12 = *(struct CBaseLegacyMilBrushProxy **)(v11 + 608);
    if ( !v12 )
      v12 = *(struct CBaseLegacyMilBrushProxy **)(v11 + 592);
    v8 = CDrawGeometryInstruction::Create(v12, v17, &v16);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 39LL;
      goto LABEL_14;
    }
    v8 = CRenderDataVisual::AddInstruction(this, v16);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 40LL;
      goto LABEL_14;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v15);
    v8 = CSolidRectangleInstruction::Create(&v15);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 45LL;
      goto LABEL_14;
    }
    *((_OWORD *)v15 + 1) = *(_OWORD *)((char *)this + 372);
    v18.left = 0;
    v18.top = 0;
    *(float *)&v18.right = (float)a2->cx;
    *(float *)&v18.bottom = (float)a2->cy;
    *((struct tagRECT *)v15 + 2) = v18;
    v8 = CRenderDataVisual::AddInstruction(this, v15);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 54LL;
      goto LABEL_14;
    }
  }
  v9 = 0;
LABEL_16:
  if ( v6 )
    CBaseObject::Release(v6);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v15);
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    CBaseObject::Release(v13);
  }
  return v9;
}
