/*
 * XREFs of ?FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180286970
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800128DC (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005503C (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180074D40 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180075A34 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800BE080 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x18012D0D6 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x18012DF28 (McTemplateU0ffff_EventWriteTransfer.c)
 *     ?scRGBTosRGB@@YAMM@Z @ 0x18027F828 (-scRGBTosRGB@@YAMM@Z.c)
 *     ?GetColorSpace@CD2DTarget@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x18029CA30 (-GetColorSpace@CD2DTarget@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 */

__int64 __fastcall CD2DContext::FillRectangleWithSolidColor(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct D2D_RECT_F *a3,
        const struct _D3DCOLORVALUE *a4,
        enum D2D1_ANTIALIAS_MODE a5,
        enum D2D1_PRIMITIVE_BLEND a6)
{
  int v10; // eax
  CD2DTarget *v11; // r15
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  float g; // xmm6_4
  float b; // xmm7_4
  __int64 v15; // rcx
  _BYTE v17[80]; // [rsp+38h] [rbp-99h] BYREF
  D3DVALUE r; // [rsp+88h] [rbp-49h] BYREF
  float v19; // [rsp+8Ch] [rbp-45h]
  float v20; // [rsp+90h] [rbp-41h]
  float v21; // [rsp+94h] [rbp-3Dh]
  __int128 v22; // [rsp+98h] [rbp-39h] BYREF
  struct D2D_MATRIX_3X2_F v23; // [rsp+A8h] [rbp-29h] BYREF

  CD2DContext::FlushDrawList(this);
  v10 = *((_DWORD *)this + 88);
  v11 = 0LL;
  if ( v10 )
    v11 = *(CD2DTarget **)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(v10 - 1));
  CD2DContext::EnsureBeginDraw(this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    (*(void (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    McTemplateU0qq_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_ETWGUID_DRAWEVENT_Start);
  }
  CD2DContext::SetCommonState(this, a2, a6, &a5, &v23);
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    CMILMatrix::CMILMatrix((CMILMatrix *)v17, &v23);
    *(struct D2D_RECT_F *)&v23.m11 = *a3;
    v22 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v17, (struct MilRectF *)&v23, (float *)&v22);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0ffff_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_ETWGUID_DRAWEVENT);
  }
  ColorSpace = CD2DTarget::GetColorSpace(v11);
  g = a4->g;
  b = a4->b;
  if ( ColorSpace )
  {
    r = a4->r;
    v19 = g;
    v20 = b;
  }
  else
  {
    r = scRGBTosRGB(a4->r);
    v19 = scRGBTosRGB(g);
    v20 = scRGBTosRGB(b);
  }
  v15 = *((_QWORD *)this + 39);
  v21 = fminf(1.0, fmaxf(a4->a, 0.0));
  (*(void (__fastcall **)(__int64, D3DVALUE *))(*(_QWORD *)v15 + 64LL))(v15, &r);
  (*(void (__fastcall **)(_QWORD, const struct D2D_RECT_F *, _QWORD))(**((_QWORD **)this + 25) + 136LL))(
    *((_QWORD *)this + 25),
    a3,
    *((_QWORD *)this + 39));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    (*(void (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    McTemplateU0qq_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_ETWGUID_DRAWEVENT_Stop);
  }
  return 0LL;
}
