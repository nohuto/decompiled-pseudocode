/*
 * XREFs of ?ValidateVisual@CImage@@UEAAJXZ @ 0x180019510
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x180017AB0 (-Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18001C1C0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F610 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18002E490 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CImage::ValidateVisual(CImage *this)
{
  int v2; // eax
  int v3; // ebx
  struct CBitmapSource *v4; // rcx
  int v5; // eax
  int v6; // eax
  __int64 v8; // rdx
  unsigned int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CBaseObject *v11; // [rsp+40h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 22) & 0x1000) == 0 )
    goto LABEL_10;
  v11 = 0LL;
  v2 = CRenderDataVisual::ClearInstructions(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x42u, 0LL);
LABEL_13:
    v8 = 51LL;
    goto LABEL_18;
  }
  v4 = (struct CBitmapSource *)*((_QWORD *)this + 36);
  if ( v4 )
  {
    v5 = CDrawNineGridInstruction::Create(v4, &v11);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1A4u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x46u, 0LL);
    }
    else
    {
      v6 = CRenderDataVisual::AddInstruction(this, v11);
      v3 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x47u, 0LL);
    }
    if ( v11 )
      CBaseObject::Release(v11);
    if ( v3 < 0 )
      goto LABEL_13;
  }
  *((_DWORD *)this + 22) &= ~0x1000u;
LABEL_10:
  v3 = CRenderDataVisual::ValidateVisual(this);
  if ( v3 >= 0 )
    return 0LL;
  v8 = 55LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\image.cpp",
    (const char *)(unsigned int)v3,
    v9);
  return (unsigned int)v3;
}
