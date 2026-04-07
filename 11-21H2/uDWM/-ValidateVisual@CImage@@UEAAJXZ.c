/*
 * XREFs of ?ValidateVisual@CImage@@UEAAJXZ @ 0x180028AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x18001AFA8 (-Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180029D90 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImage::ValidateVisual(CImage *this)
{
  int v2; // eax
  int v3; // edi
  int v5; // eax
  struct CBitmapSource *v6; // rcx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CBaseObject *v12; // [rsp+40h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 22) & 0x1000) == 0 )
    goto LABEL_2;
  v12 = 0LL;
  v5 = CRenderDataVisual::ClearInstructions(this);
  v3 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x42u);
LABEL_16:
    v9 = 51LL;
    goto LABEL_22;
  }
  v6 = (struct CBitmapSource *)*((_QWORD *)this + 36);
  if ( v6 )
  {
    v7 = CDrawNineGridInstruction::Create(v6, &v12);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1A4u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x46u);
    }
    else
    {
      v8 = CRenderDataVisual::AddInstruction(this, v12);
      v3 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x47u);
    }
    if ( v12 )
      CBaseObject::Release(v12);
    if ( v3 < 0 )
      goto LABEL_16;
  }
  *((_DWORD *)this + 22) &= ~0x1000u;
LABEL_2:
  v2 = CVisual::ValidateVisual(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v10 = 144LL;
  }
  else
  {
    if ( (*((_BYTE *)this + 88) & 4) == 0 )
      return 0LL;
    v2 = (*(__int64 (__fastcall **)(CImage *))(*(_QWORD *)this + 200LL))(this);
    v3 = v2;
    if ( v2 >= 0 )
    {
      *((_DWORD *)this + 22) &= ~4u;
      return 0LL;
    }
    v10 = 148LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
    (const char *)(unsigned int)v2);
  v9 = 55LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"clientcore\\windows\\dwm\\udwm\\image.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
