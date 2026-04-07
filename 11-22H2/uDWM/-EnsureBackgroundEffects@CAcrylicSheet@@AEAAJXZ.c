/*
 * XREFs of ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x1800A3110
 * Callers:
 *     ?Initialize@CAcrylicSheet@@EEAAJXZ @ 0x1800A35E0 (-Initialize@CAcrylicSheet@@EEAAJXZ.c)
 *     ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x1800A40D0 (-ValidateVisual@CAcrylicSheet@@EEAAJXZ.c)
 * Callees:
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18001B540 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x18001B6B0 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18001B75C (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x18001CE0C (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x18001E834 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18002E490 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180042274 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z @ 0x18009F02C (-Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z.c)
 *     ?EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ @ 0x1800A3078 (-EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800A42DC (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x1801064AC (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CAcrylicSheet::EnsureBackgroundEffects(CAcrylicSheet *this)
{
  struct CAccentAcrylicBlurBehind **v1; // r14
  struct CVisual **v3; // r13
  __int64 v4; // rdx
  struct CSolidRectangleInstruction **v5; // rdi
  CBaseObject *v6; // rcx
  DWORD SysColor; // r12d
  DWORD v8; // eax
  __int64 *v9; // rsi
  LONG v10; // r15d
  LONG v11; // ecx
  __int64 v12; // r8
  int inserted; // r15d
  __int64 v14; // rdx
  int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  int v19; // ebx
  __int64 v20; // rdx
  CBaseObject *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  float v24; // xmm0_4
  struct CSolidRectangleInstruction *v25; // rax
  __int128 v26; // xmm1
  int v27; // [rsp+20h] [rbp-60h]
  int v28; // [rsp+40h] [rbp-40h]
  LONG v29; // [rsp+44h] [rbp-3Ch]
  int v30; // [rsp+48h] [rbp-38h]
  bool v31[16]; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v32; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v1 = (struct CAccentAcrylicBlurBehind **)((char *)this + 312);
  wil::com_ptr_t<CImage,wil::err_exception_policy>::reset((char *)this + 312);
  v3 = (struct CVisual **)((char *)this + 320);
  wil::com_ptr_t<CImage,wil::err_exception_policy>::reset((char *)this + 320);
  v5 = (struct CSolidRectangleInstruction **)((char *)this + 328);
  v6 = (CBaseObject *)*((_QWORD *)this + 41);
  *((_QWORD *)this + 41) = 0LL;
  if ( v6 )
    CBaseObject::Release(v6);
  LOBYTE(v6) = *((_BYTE *)this + 465);
  *(struct _D3DCOLORVALUE *)v31 = *(const struct _D3DCOLORVALUE *)&CTopLevelWindow::OVERLAPPED_BORDER_COLOR.r;
  SysColor = (_BYTE)v6 != 0 ? 13882323 : 5526612;
  LOBYTE(v6) = -(char)v6;
  v28 = 3 - ((_BYTE)v6 != 0);
  if ( (unsigned __int8)CDesktopManager::IsHighContrastMode((__int64)v6, v4) )
  {
    SysColor = GetSysColor(5);
    v8 = GetSysColor(8);
    v32.bottom = 1065353216;
    v28 = 0;
    *(float *)&v32.left = (float)(unsigned __int8)v8 / 255.0;
    *(float *)&v32.top = (float)BYTE1(v8) / 255.0;
    *(float *)&v32.right = (float)BYTE2(v8) / 255.0;
    *(struct tagRECT *)v31 = v32;
  }
  v9 = (__int64 *)((char *)this + 304);
  v10 = 0;
  v11 = 0;
  if ( *((_DWORD *)this + 74) - *((_DWORD *)this + 72) >= 0 )
    v10 = *((_DWORD *)this + 74) - *((_DWORD *)this + 72);
  v29 = v10;
  if ( *((_DWORD *)this + 75) - *((_DWORD *)this + 73) >= 0 )
    v11 = *((_DWORD *)this + 75) - *((_DWORD *)this + 73);
  v30 = v11;
  if ( !*v9 )
  {
    v32.bottom = v11;
    *(_QWORD *)&v32.left = 0LL;
    v32.right = v10;
    *v9 = 0LL;
    inserted = CWindowBorder::Create((struct CWindowBorder **)this + 38);
    if ( inserted < 0 )
    {
      v14 = 128LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
        (const char *)(unsigned int)inserted);
      return (unsigned int)inserted;
    }
    inserted = CWindowBorder::SetBorderParameters(*v9, &v32, v12, *((_DWORD *)this + 117), (float *)v31, 0, v28);
    if ( inserted < 0 )
    {
      v14 = 135LL;
      goto LABEL_12;
    }
    inserted = CWindowBorder::EnableBorder((CWindowBorder *)*v9, 1);
    if ( inserted < 0 )
    {
      v14 = 137LL;
      goto LABEL_12;
    }
    inserted = VisualCollection::InsertRelative((CAcrylicSheet *)((char *)this + 32), *v9, 0LL, 0, v27);
    if ( inserted < 0 )
    {
      v14 = 138LL;
      goto LABEL_12;
    }
    v10 = v29;
  }
  if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54) + 641LL) )
  {
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(v1);
    v16 = CAccentAcrylicBlurBehind::Create(v1);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x93,
        (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
        (const char *)(unsigned int)v16);
      return v17;
    }
    *(_OWORD *)((char *)*v1 + 360) = *((_OWORD *)this + 18);
    v18 = *((_DWORD *)this + 22);
    if ( (v18 & 0x1000) == 0 )
    {
      *((_DWORD *)this + 22) = v18 | 0x1000;
      CVisual::PropagateDirtyChildren(this);
    }
    v19 = CAcrylicSheet::EnsureAcrylicAccentColor(this);
    if ( v19 < 0 )
    {
      v20 = 150LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
        (const char *)(unsigned int)v19);
      return (unsigned int)v19;
    }
    v19 = CWindowBorder::SetContent((struct CVisual **)*v9, *v1);
    if ( v19 < 0 )
    {
      v20 = 151LL;
      goto LABEL_27;
    }
  }
  else
  {
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset((char *)this + 320);
    v19 = CRenderDataVisual::Create((struct CRenderDataVisual **)this + 40);
    if ( v19 < 0 )
    {
      v20 = 155LL;
      goto LABEL_27;
    }
    v19 = CWindowBorder::SetContent((struct CVisual **)*v9, *v3);
    if ( v19 < 0 )
    {
      v20 = 156LL;
      goto LABEL_27;
    }
    v21 = *v5;
    *v5 = 0LL;
    if ( v21 )
      CBaseObject::Release(v21);
    v19 = CSolidRectangleInstruction::Create(v5);
    if ( v19 < 0 )
    {
      v20 = 158LL;
      goto LABEL_27;
    }
    *(_QWORD *)&v32.left = 0LL;
    *(_DWORD *)&v31[12] = 1065353216;
    *(float *)&v32.bottom = (float)v30;
    *(float *)v31 = GammaLUT_sRGB_to_scRGB[(unsigned __int8)SysColor] / 255.0;
    v24 = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)SysColor >> 8] / 255.0;
    *(float *)&v32.right = (float)v10;
    *(float *)&v31[4] = v24;
    v25 = *v5;
    *(float *)&v31[8] = GammaLUT_sRGB_to_scRGB[BYTE2(SysColor)] / 255.0;
    v26 = *(_OWORD *)v31;
    *((struct tagRECT *)v25 + 2) = v32;
    *((_OWORD *)*v5 + 1) = v26;
    v19 = CRenderDataVisual::AddInstruction(*v3, *v5, v22, v23);
    if ( v19 < 0 )
    {
      v20 = 174LL;
      goto LABEL_27;
    }
  }
  return 0LL;
}
