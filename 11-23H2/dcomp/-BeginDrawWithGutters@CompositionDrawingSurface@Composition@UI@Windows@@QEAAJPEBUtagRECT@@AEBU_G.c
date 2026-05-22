/*
 * XREFs of ?BeginDrawWithGutters@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180109EF8
 * Callers:
 *     ?BeginDrawWithGutters@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180109FC0 (-BeginDrawWithGutters@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJPEBUtagRECT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TranslateDCompError@Composition@UI@Windows@@YAJJ@Z @ 0x180061B90 (-TranslateDCompError@Composition@UI@Windows@@YAJJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UseUnderlyingSurfacePartner@CompositionDrawingSurface@Composition@UI@Windows@@AEAAJPEAPEAUIDCompositionSurfacePartner@@@Z @ 0x18010A968 (-UseUnderlyingSurfacePartner@CompositionDrawingSurface@Composition@UI@Windows@@AEAAJPEAPEAUIDCom.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionDrawingSurface::BeginDrawWithGutters(
        Windows::UI::Composition::CompositionDrawingSurface *this,
        const struct tagRECT *a2,
        const struct _GUID *a3,
        void **a4,
        struct tagPOINT *a5,
        struct DCOMPOSITION_GUTTERS *a6)
{
  int v9; // ebx
  __int64 v10; // rdx
  unsigned int v12; // eax
  struct IDCompositionSurfacePartner *v13; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = Windows::UI::Composition::CompositionDrawingSurface::UseUnderlyingSurfacePartner(this, &v13);
  if ( v9 < 0 )
  {
    v10 = 98LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiondrawingsurface.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v12 = (*(__int64 (__fastcall **)(struct IDCompositionSurfacePartner *, const struct tagRECT *, const struct _GUID *, void **, struct tagPOINT *, struct DCOMPOSITION_GUTTERS *))(*(_QWORD *)v13 + 64LL))(
          v13,
          a2,
          a3,
          a4,
          a5,
          a6);
  v9 = Windows::UI::Composition::TranslateDCompError((Windows::UI::Composition *)v12);
  if ( v9 < 0 )
  {
    v10 = 105LL;
    goto LABEL_3;
  }
  return 0LL;
}
