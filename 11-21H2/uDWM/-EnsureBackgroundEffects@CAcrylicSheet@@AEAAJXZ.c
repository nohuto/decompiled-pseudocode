/*
 * XREFs of ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18009A1C4
 * Callers:
 *     ?Initialize@CAcrylicSheet@@EEAAJXZ @ 0x18009A6C0 (-Initialize@CAcrylicSheet@@EEAAJXZ.c)
 *     ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x18009BA00 (-ValidateVisual@CAcrylicSheet@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000E838 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@AEAA-ATw.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x180031960 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x180035748 (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x180037460 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x180038C24 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180046D3C (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180047B34 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z @ 0x18004C290 (-Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z.c)
 *     ?EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ @ 0x18009A134 (-EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009BD40 (-reset@-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x180101028 (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CAcrylicSheet::EnsureBackgroundEffects(CAcrylicSheet *this)
{
  struct CAccentAcrylicBlurBehind **v1; // r14
  CVisualProxy ***v3; // r13
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct CSolidRectangleInstruction **v7; // rsi
  CBaseObject *v8; // rcx
  DWORD SysColor; // r15d
  DWORD v10; // eax
  __int64 *v11; // rdi
  int v12; // r12d
  int v13; // ecx
  int v14; // eax
  CBaseObject *v15; // rcx
  int v16; // eax
  float v17; // xmm7_4
  int inserted; // r12d
  __int64 v19; // rdx
  int v21; // eax
  unsigned int v22; // esi
  int v23; // ebx
  __int64 v24; // rdx
  CBaseObject *v25; // rcx
  float v26; // xmm0_4
  struct CSolidRectangleInstruction *v27; // rax
  __int128 v28; // xmm1
  int v29; // [rsp+48h] [rbp-29h]
  __int128 v30; // [rsp+50h] [rbp-21h] BYREF
  int v31; // [rsp+60h] [rbp-11h]
  int v32; // [rsp+64h] [rbp-Dh]
  __int128 v33; // [rsp+68h] [rbp-9h] BYREF
  __int128 v34; // [rsp+78h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v1 = (struct CAccentAcrylicBlurBehind **)((char *)this + 328);
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::reset((char *)this + 328);
  v3 = (CVisualProxy ***)((char *)this + 336);
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::reset((char *)this + 336);
  v7 = (struct CSolidRectangleInstruction **)((char *)this + 344);
  v8 = (CBaseObject *)*((_QWORD *)this + 43);
  *((_QWORD *)this + 43) = 0LL;
  if ( v8 )
    CBaseObject::Release(v8);
  LOBYTE(v8) = *((_BYTE *)this + 493);
  v33 = *(__int128 *)&CTopLevelWindow::OVERLAPPED_BORDER_COLOR.r;
  SysColor = (_BYTE)v8 != 0 ? 13882323 : 5526612;
  LOBYTE(v8) = -(char)v8;
  v29 = 3 - ((_BYTE)v8 != 0);
  if ( CDesktopManager::IsHighContrastMode((__int64)v8, v4, v5, v6) )
  {
    SysColor = GetSysColor(5);
    v10 = GetSysColor(8);
    HIDWORD(v30) = 1065353216;
    v29 = 0;
    *(float *)&v30 = (float)(unsigned __int8)v10 / 255.0;
    *((float *)&v30 + 1) = (float)BYTE1(v10) / 255.0;
    *((float *)&v30 + 2) = (float)BYTE2(v10) / 255.0;
    v33 = v30;
  }
  v11 = (__int64 *)((char *)this + 320);
  v12 = 0;
  v13 = 0;
  if ( *((_DWORD *)this + 78) - *((_DWORD *)this + 76) >= 0 )
    v12 = *((_DWORD *)this + 78) - *((_DWORD *)this + 76);
  v14 = *((_DWORD *)this + 79) - *((_DWORD *)this + 77);
  v31 = v12;
  if ( v14 >= 0 )
    v13 = v14;
  v32 = v13;
  if ( !*v11 )
  {
    *(_QWORD *)&v34 = 0LL;
    *((_QWORD *)&v34 + 1) = __PAIR64__(v13, v12);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTFrame>::GetCachedVariantState(
      (volatile signed __int64 *)&`wil::Feature<__WilFeatureTraits_Feature_VTFrame>::GetImpl'::`2'::impl,
      (__int64)&v30);
    v15 = (CBaseObject *)*v11;
    v16 = DWORD1(v30);
    *v11 = 0LL;
    v17 = (float)v16;
    if ( v15 )
      CBaseObject::Release(v15);
    inserted = CWindowBorder::Create((struct CWindowBorder **)this + 40);
    if ( inserted < 0 )
    {
      v19 = 123LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
        (const char *)(unsigned int)inserted);
      return (unsigned int)inserted;
    }
    inserted = CWindowBorder::SetBorderParameters(
                 *v11,
                 (struct tagPOINT *)&v34,
                 v17,
                 *((_DWORD *)this + 124),
                 (float *)&v33,
                 0,
                 v29);
    if ( inserted < 0 )
    {
      v19 = 130LL;
      goto LABEL_14;
    }
    inserted = CWindowBorder::EnableBorder((CWindowBorder *)*v11, 1);
    if ( inserted < 0 )
    {
      v19 = 132LL;
      goto LABEL_14;
    }
    inserted = VisualCollection::InsertRelative((CAcrylicSheet *)((char *)this + 32), (struct CVisual *)*v11, 0LL, 0, 1);
    if ( inserted < 0 )
    {
      v19 = 133LL;
      goto LABEL_14;
    }
    v12 = v31;
  }
  if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52) + 657LL) )
  {
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::reset(v1);
    v21 = CAccentAcrylicBlurBehind::Create(v1);
    v22 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8E,
        (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
        (const char *)(unsigned int)v21);
      return v22;
    }
    *((_OWORD *)*v1 + 22) = *((_OWORD *)this + 19);
    CVisual::SetDirtyFlags(this, 4096);
    v23 = CAcrylicSheet::EnsureAcrylicAccentColor(this);
    if ( v23 < 0 )
    {
      v24 = 145LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
        (const char *)(unsigned int)v23);
      return (unsigned int)v23;
    }
    v23 = CWindowBorder::SetContent((struct CVisual **)*v11, (CVisualProxy **)*v1);
    if ( v23 < 0 )
    {
      v24 = 146LL;
      goto LABEL_27;
    }
  }
  else
  {
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::reset((char *)this + 336);
    v23 = CRenderDataVisual::Create((struct CRenderDataVisual **)this + 42);
    if ( v23 < 0 )
    {
      v24 = 150LL;
      goto LABEL_27;
    }
    v23 = CWindowBorder::SetContent((struct CVisual **)*v11, *v3);
    if ( v23 < 0 )
    {
      v24 = 151LL;
      goto LABEL_27;
    }
    v25 = *v7;
    *v7 = 0LL;
    if ( v25 )
      CBaseObject::Release(v25);
    v23 = CSolidRectangleInstruction::Create(v7);
    if ( v23 < 0 )
    {
      v24 = 153LL;
      goto LABEL_27;
    }
    *(_QWORD *)&v34 = 0LL;
    HIDWORD(v30) = 1065353216;
    *((float *)&v34 + 3) = (float)v32;
    *(float *)&v30 = GammaLUT_sRGB_to_scRGB[(unsigned __int8)SysColor] / 255.0;
    v26 = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)SysColor >> 8] / 255.0;
    *((float *)&v34 + 2) = (float)v12;
    *((float *)&v30 + 1) = v26;
    v27 = *v7;
    *((float *)&v30 + 2) = GammaLUT_sRGB_to_scRGB[BYTE2(SysColor)] / 255.0;
    v28 = v30;
    *((_OWORD *)v27 + 2) = v34;
    *((_OWORD *)*v7 + 1) = v28;
    v23 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)*v3, *v7);
    if ( v23 < 0 )
    {
      v24 = 169LL;
      goto LABEL_27;
    }
  }
  return 0LL;
}
