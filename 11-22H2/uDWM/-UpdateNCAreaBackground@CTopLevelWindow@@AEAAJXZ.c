/*
 * XREFs of ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180023F14
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180026780 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?ClearAll@CLegacyNonClientBackground@@QEAAXXZ @ 0x180007B64 (-ClearAll@CLegacyNonClientBackground@@QEAAXXZ.c)
 *     ??$GetFirstNonNull@VCSpriteVisual@@VCAccent@@VCSystemBackdropVisual@@@CTopLevelWindow@@AEAAPEAVCVisual@@PEAVCSpriteVisual@@PEAVCAccent@@PEAVCSystemBackdropVisual@@@Z @ 0x1800146DC (--$GetFirstNonNull@VCSpriteVisual@@VCAccent@@VCSystemBackdropVisual@@@CTopLevelWindow@@AEAAPEAVC.c)
 *     ?SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18001AC48 (-SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18001ACB4 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x1800284A0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetCaptionColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800392C8 (-SetCaptionColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180042020 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?AdjustNonClientBackgroundTreePosition@CTopLevelWindow@@AEAAJXZ @ 0x180051EE8 (-AdjustNonClientBackgroundTreePosition@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Create@CLegacyNonClientBackground@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x1800528EC (-Create@CLegacyNonClientBackground@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ @ 0x180053FC4 (-IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTopLevelWindow::UpdateNCAreaBackground(CTopLevelWindow *this)
{
  bool v2; // al
  struct CWindowData *v3; // rcx
  CLegacyNonClientBackground *v4; // rcx
  unsigned __int64 *v6; // rsi
  int inserted; // eax
  unsigned int v8; // edi
  __int64 v9; // rax
  float v10; // xmm2_4
  float v11; // xmm1_4
  int v12; // xmm2_4
  int v13; // xmm0_4
  __int64 v14; // rax
  __int64 v15; // rcx
  struct CVisual *FirstNon; // rax
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-50h]
  __int64 v19; // [rsp+30h] [rbp-40h] BYREF
  __int64 v20; // [rsp+38h] [rbp-38h] BYREF
  struct _MARGINS v21; // [rsp+40h] [rbp-30h] BYREF
  struct _D3DCOLORVALUE v22; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v20 = 0LL;
  v19 = 0LL;
  v2 = (unsigned int)(*((_DWORD *)this + 210) - 2) > 1;
  v3 = (struct CWindowData *)*((_QWORD *)this + 94);
  if ( (*((_BYTE *)v3 + 672) & 8) == 0
    || !*((_DWORD *)this + 161) && !*((_DWORD *)this + 163) && !*((_DWORD *)this + 162) && !*((_DWORD *)this + 164)
    || !v2 )
  {
    v4 = (CLegacyNonClientBackground *)*((_QWORD *)this + 39);
    if ( v4 )
      CLegacyNonClientBackground::ClearAll(v4);
    return 0LL;
  }
  v6 = (unsigned __int64 *)((char *)this + 312);
  if ( !*((_QWORD *)this + 39) )
  {
    inserted = CLegacyNonClientBackground::Create(v3, (struct CLegacyNonClientBackground **)this + 39);
    v8 = inserted;
    if ( inserted < 0 )
    {
      v17 = 3732LL;
      goto LABEL_33;
    }
    if ( *((_DWORD *)this + 210) == 4 )
    {
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(*((_QWORD *)this + 36) + 32LL),
                   *v6,
                   0LL,
                   1u,
                   v18);
      v8 = inserted;
      if ( inserted < 0 )
      {
        v17 = 3738LL;
        goto LABEL_33;
      }
    }
    else
    {
      FirstNon = (struct CVisual *)CTopLevelWindow::GetFirstNonNull<CSpriteVisual,CAccent,CSystemBackdropVisual>(
                                     v15,
                                     *((_QWORD *)this + 41),
                                     *((_QWORD *)this + 37),
                                     *((_QWORD *)this + 40));
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(*((_QWORD *)this + 36) + 32LL),
                   *v6,
                   FirstNon,
                   1u,
                   v18);
      v8 = inserted;
      if ( inserted < 0 )
      {
        v17 = 3743LL;
        goto LABEL_33;
      }
    }
    v21 = 0LL;
    CVisual::SetInsetFromParent((CVisual *)*v6, &v21);
  }
  inserted = CTopLevelWindow::UpdateNCAreaGeometry(this);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v17 = 3751LL;
    goto LABEL_33;
  }
  inserted = CTopLevelWindow::UpdateColorizationColor(this);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v17 = 3754LL;
    goto LABEL_33;
  }
  if ( CTopLevelWindow::IsSheetOfGlass(this) )
    v9 = *((_QWORD *)this + 77);
  else
    v9 = *((_QWORD *)this + 76);
  v10 = *(float *)(v9 + 32);
  v11 = v10;
  *(float *)&v21.cxLeftWidth = v10 * *(float *)(v9 + 16);
  *(float *)&v12 = v10 * *(float *)(v9 + 24);
  v13 = *(_DWORD *)(v9 + 28);
  *(float *)&v21.cxRightWidth = v11 * *(float *)(v9 + 20);
  v21.cyTopHeight = v12;
  v21.cyBottomHeight = v13;
  *(struct _D3DCOLORVALUE *)&v22.r = (struct _D3DCOLORVALUE)v21;
  inserted = CLegacyNonClientBackground::SetBorderColor((CLegacyNonClientBackground *)*v6, &v22);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v17 = 3772LL;
    goto LABEL_33;
  }
  v14 = *((_QWORD *)this + 77);
  *(float *)&v21.cxLeftWidth = *(float *)(v14 + 16) * *(float *)(v14 + 32);
  *(float *)&v21.cxRightWidth = *(float *)(v14 + 20) * *(float *)(v14 + 32);
  *(float *)&v21.cyTopHeight = *(float *)(v14 + 24) * *(float *)(v14 + 32);
  v21.cyBottomHeight = *(_DWORD *)(v14 + 28);
  inserted = CLegacyNonClientBackground::SetCaptionColor(
               (CLegacyNonClientBackground *)*v6,
               (const struct _D3DCOLORVALUE *)&v21);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v17 = 3773LL;
    goto LABEL_33;
  }
  inserted = CTopLevelWindow::AdjustNonClientBackgroundTreePosition(this);
  v8 = inserted;
  if ( inserted >= 0 )
    return 0LL;
  v17 = 3775LL;
LABEL_33:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)inserted,
    v18);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v20);
  return v8;
}
