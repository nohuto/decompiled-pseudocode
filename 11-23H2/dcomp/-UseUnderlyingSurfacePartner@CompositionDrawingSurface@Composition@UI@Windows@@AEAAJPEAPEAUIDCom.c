/*
 * XREFs of ?UseUnderlyingSurfacePartner@CompositionDrawingSurface@Composition@UI@Windows@@AEAAJPEAPEAUIDCompositionSurfacePartner@@@Z @ 0x18010A968
 * Callers:
 *     ?BeginDrawWithGutters@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180109EF8 (-BeginDrawWithGutters@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEBUtagRECT@@AEBU_G.c)
 *     ?CopySurface@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z @ 0x18010A094 (-CopySurface@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEAUIUnknown@@HHPEBUtagRECT@.c)
 *     ?CopySurface@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x18010A140 (-CopySurface@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEBUtagRECT@@PEAPEAUIDXGISur.c)
 *     ?HasValidPixels@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJPEAH@Z @ 0x18010A3C0 (-HasValidPixels@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UseUnderlyingSurface@DrawingSurfaceBase@Composition@UI@Windows@@IEAAJPEAPEAUIDCompositionSurface@@@Z @ 0x180061BA4 (-UseUnderlyingSurface@DrawingSurfaceBase@Composition@UI@Windows@@IEAAJPEAPEAUIDCompositionSurfac.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionDrawingSurface::UseUnderlyingSurfacePartner(
        Windows::UI::Composition::CompositionDrawingSurface *this,
        struct IDCompositionSurfacePartner **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IDCompositionSurface *v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = Windows::UI::Composition::DrawingSurfaceBase::UseUnderlyingSurface(this, &v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = v7;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtCompositionDrawingSurface.h",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
