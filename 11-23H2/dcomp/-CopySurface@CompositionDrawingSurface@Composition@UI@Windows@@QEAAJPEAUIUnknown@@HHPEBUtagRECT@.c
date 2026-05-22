/*
 * XREFs of ?CopySurface@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z @ 0x18010A094
 * Callers:
 *     ?CopySurface@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z @ 0x18010A260 (-CopySurface@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJPEAUIUnknown@@HHPEBU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TranslateDCompError@Composition@UI@Windows@@YAJJ@Z @ 0x180061B90 (-TranslateDCompError@Composition@UI@Windows@@YAJJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UseUnderlyingSurfacePartner@CompositionDrawingSurface@Composition@UI@Windows@@AEAAJPEAPEAUIDCompositionSurfacePartner@@@Z @ 0x18010A968 (-UseUnderlyingSurfacePartner@CompositionDrawingSurface@Composition@UI@Windows@@AEAAJPEAPEAUIDCom.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionDrawingSurface::CopySurface(
        Windows::UI::Composition::CompositionDrawingSurface *this,
        struct IUnknown *a2,
        unsigned int a3,
        unsigned int a4,
        const struct tagRECT *a5)
{
  int v8; // ebx
  __int64 v9; // rdx
  unsigned int v11; // eax
  struct IDCompositionSurfacePartner *v12; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = Windows::UI::Composition::CompositionDrawingSurface::UseUnderlyingSurfacePartner(this, &v12);
  if ( v8 < 0 )
  {
    v9 = 184LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiondrawingsurface.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v11 = (*(__int64 (__fastcall **)(struct IDCompositionSurfacePartner *, struct IUnknown *, _QWORD, _QWORD, const struct tagRECT *))(*(_QWORD *)v12 + 96LL))(
          v12,
          a2,
          a3,
          a4,
          a5);
  v8 = Windows::UI::Composition::TranslateDCompError((Windows::UI::Composition *)v11);
  if ( v8 < 0 )
  {
    v9 = 190LL;
    goto LABEL_3;
  }
  return 0LL;
}
