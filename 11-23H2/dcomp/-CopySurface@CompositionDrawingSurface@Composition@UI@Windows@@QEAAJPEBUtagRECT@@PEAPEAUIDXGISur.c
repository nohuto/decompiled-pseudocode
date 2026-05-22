/*
 * XREFs of ?CopySurface@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x18010A140
 * Callers:
 *     ?CopySurface@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x18010A320 (-CopySurface@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJPEBUtagRECT@@PEAPEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TranslateDCompError@Composition@UI@Windows@@YAJJ@Z @ 0x180061B90 (-TranslateDCompError@Composition@UI@Windows@@YAJJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180100AFC (--1-$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?UseUnderlyingSurfacePartner@CompositionDrawingSurface@Composition@UI@Windows@@AEAAJPEAPEAUIDCompositionSurfacePartner@@@Z @ 0x18010A968 (-UseUnderlyingSurfacePartner@CompositionDrawingSurface@Composition@UI@Windows@@AEAAJPEAPEAUIDCom.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionDrawingSurface::CopySurface(
        Windows::UI::Composition::CompositionDrawingSurface *this,
        const struct tagRECT *a2,
        struct IDXGISurface **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rcx
  struct IDCompositionSurfacePartner *v12; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v5 = Windows::UI::Composition::CompositionDrawingSurface::UseUnderlyingSurfacePartner(this, &v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x99,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiondrawingsurface.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  v14 = 0LL;
  v8 = (**(__int64 (__fastcall ***)(struct IDCompositionSurfacePartner *, GUID *, __int64 *))v12)(
         v12,
         &GUID_43390de3_ac87_4fc4_a8ee_be3a1f43ebdd,
         &v14);
  v6 = v8;
  if ( v8 < 0 )
  {
    v9 = 158LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiondrawingsurface.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v14);
    return v6;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, const struct tagRECT *, struct IDXGISurface **))(*(_QWORD *)v14 + 24LL))(
          v14,
          a2,
          a3);
  v8 = Windows::UI::Composition::TranslateDCompError((Windows::UI::Composition *)v10);
  v6 = v8;
  if ( v8 < 0 )
  {
    v9 = 162LL;
    goto LABEL_8;
  }
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return 0LL;
}
