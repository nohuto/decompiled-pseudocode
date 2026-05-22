/*
 * XREFs of ??$?4U?$default_delete@VSystemBackdropHelper@Composition@UI@Windows@@@std@@$0A@@?$unique_ptr@VSystemBackdropHelper@Composition@UI@Windows@@U?$default_delete@VSystemBackdropHelper@Composition@UI@Windows@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18006D0E8
 * Callers:
 *     ?OnSetRootImpl@?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAVVisual@345@_N@Z @ 0x18006CB30 (-OnSetRootImpl@-$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windo.c)
 *     ?OnSetRootImpl@?$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAVVisual@345@_N@Z @ 0x18006D130 (-OnSetRootImpl@-$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@.c)
 *     ?RuntimeClassInitialize@GlobalCompositionTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUICompositionTargetHostPartner@234@@Z @ 0x180158D5C (-RuntimeClassInitialize@GlobalCompositionTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@.c)
 * Callees:
 *     ??1SystemBackdropHelper@Composition@UI@Windows@@QEAA@XZ @ 0x18008A69C (--1SystemBackdropHelper@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::SystemBackdropHelper **__fastcall std::unique_ptr<Windows::UI::Composition::SystemBackdropHelper>::operator=<std::default_delete<Windows::UI::Composition::SystemBackdropHelper>,0>(
        Windows::UI::Composition::SystemBackdropHelper **a1,
        Windows::UI::Composition::SystemBackdropHelper **a2)
{
  Windows::UI::Composition::SystemBackdropHelper *v3; // rax
  Windows::UI::Composition::SystemBackdropHelper *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
    {
      Windows::UI::Composition::SystemBackdropHelper::~SystemBackdropHelper(v4);
      operator delete(v4, 0x20uLL);
    }
  }
  return a1;
}
