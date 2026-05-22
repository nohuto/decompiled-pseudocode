/*
 * XREFs of ?UseUnderlyingVirtualSurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@AEAAJPEAPEAUIDCompositionVirtualSurface@@@Z @ 0x18008C8D0
 * Callers:
 *     ?Resize@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@@Z @ 0x18008C848 (-Resize@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@@Z.c)
 *     ?CopySurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z @ 0x180195930 (-CopySurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJPEAUIUnknown@@HHPEBUt.c)
 *     ?CopySurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x180195A10 (-CopySurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJPEBUtagRECT@@PEAPEAUI.c)
 *     ?Trim@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJIPEBURectInt32@Graphics@4@@Z @ 0x1801960CC (-Trim@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJIPEBURectInt32@Graphics@4@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UseUnderlyingSurface@DrawingSurfaceBase@Composition@UI@Windows@@IEAAJPEAPEAUIDCompositionSurface@@@Z @ 0x180061BA4 (-UseUnderlyingSurface@DrawingSurfaceBase@Composition@UI@Windows@@IEAAJPEAPEAUIDCompositionSurfac.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionVirtualDrawingSurface::UseUnderlyingVirtualSurface(
        Windows::UI::Composition::CompositionVirtualDrawingSurface *this,
        struct IDCompositionVirtualSurface **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IDCompositionSurface *v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = Windows::UI::Composition::DrawingSurfaceBase::UseUnderlyingSurface(this, &v7);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtCompositionVirtualDrawingSurface.h",
      (const char *)(unsigned int)v3);
    return v4;
  }
  else
  {
    *a2 = v7;
    return 0LL;
  }
}
