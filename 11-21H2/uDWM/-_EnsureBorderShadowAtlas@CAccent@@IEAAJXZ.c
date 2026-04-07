/*
 * XREFs of ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800984AC
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180017244 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180018C60 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18004BDA0 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x18000E618 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002440C (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x1800265D0 (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAccent::_EnsureBorderShadowAtlas(CAccent *this)
{
  int inserted; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  CBaseObject *v5; // rax
  CVisual *v6; // rax
  CBaseObject *v7; // rcx
  struct _MARGINS v9; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  CVisual *v11; // [rsp+50h] [rbp+10h] BYREF
  CBaseObject *v12; // [rsp+58h] [rbp+18h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  if ( !*((_QWORD *)this + 54) )
  {
    inserted = CCanvasVisual::Create(&v12);
    v3 = inserted;
    if ( inserted < 0 )
    {
      v4 = 1022LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)inserted);
      goto LABEL_16;
    }
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v11);
    inserted = CTopLevelAtlasedRectsVisual::Create(&v11);
    v3 = inserted;
    if ( inserted < 0 )
    {
      v4 = 1023LL;
      goto LABEL_10;
    }
    inserted = VisualCollection::InsertRelative((CBaseObject *)((char *)v12 + 32), v11, 0LL, 0, 1);
    v3 = inserted;
    if ( inserted < 0 )
    {
      v4 = 1024LL;
      goto LABEL_10;
    }
    v9 = 0LL;
    CVisual::SetInsetFromParent(v11, &v9);
    inserted = VisualCollection::InsertRelative((CAccent *)((char *)this + 32), v12, 0LL, 1u, 1);
    v3 = inserted;
    if ( inserted < 0 )
    {
      v4 = 1028LL;
      goto LABEL_10;
    }
    v5 = v12;
    *((_QWORD *)this + 55) = v12;
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
    v6 = v11;
    *((_QWORD *)this + 54) = v11;
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
  }
  v3 = 0;
LABEL_16:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v11);
  v7 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    CBaseObject::Release(v7);
  }
  return v3;
}
