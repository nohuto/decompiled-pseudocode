/*
 * XREFs of ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180104594
 * Callers:
 *     ?SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z @ 0x180104960 (-SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18001B540 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x18001B6B0 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18001B75C (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x18001CE0C (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x18001E834 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18002E490 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180042274 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800EE48C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x1801064AC (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::AddIconPlate(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this,
        __int64 a2)
{
  DWORD SysColor; // ebx
  DWORD v4; // eax
  __int128 v5; // xmm6
  bool v6; // zf
  struct CVisual ***v7; // rbx
  CBaseObject *v8; // rcx
  int v9; // eax
  struct CVisual **v10; // rsi
  CBaseObject *v11; // rcx
  int v12; // eax
  int v13; // eax
  int inserted; // eax
  struct CRenderDataInstruction **v15; // rdi
  CBaseObject *v16; // rcx
  int v17; // eax
  __int64 v18; // r8
  int v19; // eax
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  int v24; // [rsp+28h] [rbp-29h]
  int v25; // [rsp+28h] [rbp-29h]
  int v26; // [rsp+28h] [rbp-29h]
  __int128 v27; // [rsp+48h] [rbp-9h]
  int v28[4]; // [rsp+58h] [rbp+7h] BYREF
  __m128i si128; // [rsp+68h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( (unsigned __int8)CDesktopManager::IsHighContrastMode((__int64)this, a2) )
  {
    SysColor = GetSysColor(5);
    v4 = GetSysColor(8);
    HIDWORD(v27) = 1065353216;
    *(float *)&v27 = (float)(unsigned __int8)v4 / 255.0;
    *((float *)&v27 + 1) = (float)BYTE1(v4) / 255.0;
    *((float *)&v27 + 2) = (float)BYTE2(v4) / 255.0;
    *(_OWORD *)v28 = v27;
    *(float *)&v27 = (float)(unsigned __int8)SysColor / 255.0;
    *((float *)&v27 + 1) = (float)BYTE1(SysColor) / 255.0;
    *((_QWORD *)&v27 + 1) = COERCE_UNSIGNED_INT((float)BYTE2(SysColor) / 255.0) | 0x3F80000000000000LL;
    v5 = v27;
  }
  else
  {
    v6 = *((_BYTE *)this + 32) == 0;
    *(_OWORD *)v28 = 0LL;
    if ( v6 )
      v5 = _xmm;
    else
      v5 = _xmm;
  }
  v7 = (struct CVisual ***)((char *)this + 48);
  v8 = (CBaseObject *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v8 )
    CBaseObject::Release(v8);
  v9 = CWindowBorder::Create((struct CWindowBorder **)this + 6);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      197LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v9,
      v24);
  v10 = (struct CVisual **)((char *)this + 56);
  v11 = (CBaseObject *)*((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v11 )
    CBaseObject::Release(v11);
  v12 = CRenderDataVisual::Create((struct CRenderDataVisual **)this + 7);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      198LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v12,
      v24);
  v13 = CWindowBorder::SetContent(*v7, *v10);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      199LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v13,
      v24);
  inserted = VisualCollection::InsertRelative(
               (struct CVisual *)((char *)*v10 + 32),
               *((_QWORD *)this + 10),
               0LL,
               0,
               v24);
  if ( inserted < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      200LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.userresizevisual.cpp",
      (const char *)(unsigned int)inserted,
      v25);
  v15 = (struct CRenderDataInstruction **)((char *)this + 64);
  v16 = (CBaseObject *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v16 )
    CBaseObject::Release(v16);
  v17 = CSolidRectangleInstruction::Create((struct CSolidRectangleInstruction **)this + 8);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      201LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v17,
      v25);
  v19 = CWindowBorder::SetBorderParameters(
          (__int64)*v7,
          (const struct tagRECT *)&si128,
          v18,
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 336LL) + 348LL),
          (float *)v28,
          0,
          0);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      208LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v19,
      v26);
  v20 = CWindowBorder::EnableBorder((CWindowBorder *)*v7, 1);
  if ( v20 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      210LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v20,
      v26);
  *((_OWORD *)*v15 + 2) = _xmm;
  *((_OWORD *)*v15 + 1) = v5;
  v23 = CRenderDataVisual::AddInstruction(*v10, *v15, v21, v22);
  if ( v23 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      214LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v23,
      v26);
}
