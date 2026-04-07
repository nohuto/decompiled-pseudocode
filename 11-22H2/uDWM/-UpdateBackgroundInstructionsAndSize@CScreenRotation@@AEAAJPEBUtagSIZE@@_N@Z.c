/*
 * XREFs of ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800D85BC
 * Callers:
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800D6E78 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D7AB4 (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x18000FF20 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001BEDC (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F610 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18002E490 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180042274 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009EDE0 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
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
  unsigned int v9; // ebx
  __int64 v10; // rax
  struct CBaseLegacyMilBrushProxy *v11; // rcx
  int v12; // edi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct CRenderDataInstruction *v19; // [rsp+20h] [rbp-30h] BYREF
  CBaseObject *v20; // [rsp+28h] [rbp-28h] BYREF
  struct CDrawGeometryInstruction *v21; // [rsp+30h] [rbp-20h] BYREF
  struct tagRECT v22; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v21 = 0LL;
  v19 = 0LL;
  v6 = 0LL;
  v20 = 0LL;
  cy = a2->cy;
  v22.left = a2->cx;
  v22.top = cy;
  (*(void (__fastcall **)(CScreenRotation *, struct tagRECT *))(*(_QWORD *)this + 104LL))(this, &v22);
  CRenderDataVisual::ClearInstructions(this);
  if ( a3 )
  {
    v22.left = 0;
    v22.top = 0;
    v22.right = *((_DWORD *)this + 32);
    v22.bottom = *((_DWORD *)this + 33);
    v20 = 0LL;
    v8 = ResourceHelper::CreateRectangleGeometry(&v22, &v20);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26,
        (__int64)"clientcore\\windows\\dwm\\udwm\\screenrotation.cpp",
        (const char *)(unsigned int)v8);
LABEL_15:
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v20);
      goto LABEL_19;
    }
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v21);
    v10 = *((_QWORD *)this + 40);
    v11 = *(struct CBaseLegacyMilBrushProxy **)(v10 + 608);
    if ( !v11 )
      v11 = *(struct CBaseLegacyMilBrushProxy **)(v10 + 592);
    v6 = v20;
    v12 = CDrawGeometryInstruction::Create(v11, v20, &v21);
    if ( v12 < 0 )
    {
      v15 = 39LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"clientcore\\windows\\dwm\\udwm\\screenrotation.cpp",
        (const char *)(unsigned int)v12);
      v9 = v12;
      goto LABEL_15;
    }
    v12 = CRenderDataVisual::AddInstruction(this, v21, v13, v14);
    if ( v12 < 0 )
    {
      v15 = 40LL;
      goto LABEL_14;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v19);
    v12 = CSolidRectangleInstruction::Create(&v19);
    if ( v12 < 0 )
    {
      v15 = 45LL;
      goto LABEL_14;
    }
    *((_OWORD *)v19 + 1) = *(_OWORD *)((char *)this + 372);
    v22.left = 0;
    v22.top = 0;
    *(float *)&v22.right = (float)a2->cx;
    *(float *)&v22.bottom = (float)a2->cy;
    *((struct tagRECT *)v19 + 2) = v22;
    v12 = CRenderDataVisual::AddInstruction(this, v19, v16, v17);
    if ( v12 < 0 )
    {
      v15 = 54LL;
      goto LABEL_14;
    }
  }
  if ( v6 )
    CBaseObject::Release(v6);
  v9 = 0;
LABEL_19:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v21);
  return v9;
}
