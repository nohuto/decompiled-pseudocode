/*
 * XREFs of ?UseUnderlyingSurface@DrawingSurfaceBase@Composition@UI@Windows@@IEAAJPEAPEAUIDCompositionSurface@@@Z @ 0x180061BA4
 * Callers:
 *     ?EndDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJXZ @ 0x180061A78 (-EndDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?BeginDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z @ 0x180061B00 (-BeginDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUta.c)
 *     ?ResumeDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJXZ @ 0x1800648B8 (-ResumeDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?SuspendDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJXZ @ 0x180064910 (-SuspendDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?UseUnderlyingVirtualSurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@AEAAJPEAPEAUIDCompositionVirtualSurface@@@Z @ 0x18008C8D0 (-UseUnderlyingVirtualSurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@AEAAJPEAPE.c)
 *     ?UseUnderlyingSurfacePartner@CompositionDrawingSurface@Composition@UI@Windows@@AEAAJPEAPEAUIDCompositionSurfacePartner@@@Z @ 0x18010A968 (-UseUnderlyingSurfacePartner@CompositionDrawingSurface@Composition@UI@Windows@@AEAAJPEAPEAUIDCom.c)
 *     ?Scroll@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBUtagRECT@@0HH@Z @ 0x180152D20 (-Scroll@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBUtagRECT@@0HH@Z.c)
 * Callees:
 *     ?IsValid@CompositionGraphicsDevice@Composition@UI@Windows@@QEAA_NXZ @ 0x180061C34 (-IsValid@CompositionGraphicsDevice@Composition@UI@Windows@@QEAA_NXZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::DrawingSurfaceBase::UseUnderlyingSurface(
        Windows::UI::Composition::DrawingSurfaceBase *this,
        struct IDCompositionSurface **a2)
{
  struct IDCompositionSurface *v2; // rax
  const char *v4; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (struct IDCompositionSurface *)*((_QWORD *)this + 23);
  if ( v2 )
  {
    *a2 = v2;
    return 0LL;
  }
  else if ( Windows::UI::Composition::CompositionGraphicsDevice::IsValid(*((Windows::UI::Composition::CompositionGraphicsDevice **)this
                                                                         + 20)) )
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x7B,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtDrawingSurfaceBase.h",
      (const char *)0x80131509LL,
      (int)"The underlying surface is not set and therefore cannot be used.",
      v4);
    return 2148734217LL;
  }
  else
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x77,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtDrawingSurfaceBase.h",
      (const char *)0x887A0005LL,
      (int)"The underlying graphics device was removed.",
      v4);
    return 2289696773LL;
  }
}
