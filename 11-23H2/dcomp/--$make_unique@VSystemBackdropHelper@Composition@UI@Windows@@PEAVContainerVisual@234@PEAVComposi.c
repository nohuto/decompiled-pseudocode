/*
 * XREFs of ??$make_unique@VSystemBackdropHelper@Composition@UI@Windows@@PEAVContainerVisual@234@PEAVCompositor@234@$0A@@std@@YA?AV?$unique_ptr@VSystemBackdropHelper@Composition@UI@Windows@@U?$default_delete@VSystemBackdropHelper@Composition@UI@Windows@@@std@@@0@$$QEAPEAVContainerVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@345@@Z @ 0x18006D088
 * Callers:
 *     ?OnSetRootImpl@?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAVVisual@345@_N@Z @ 0x18006CB30 (-OnSetRootImpl@-$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windo.c)
 *     ?OnSetRootImpl@?$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAVVisual@345@_N@Z @ 0x18006D130 (-OnSetRootImpl@-$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@.c)
 *     ?RuntimeClassInitialize@GlobalCompositionTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUICompositionTargetHostPartner@234@@Z @ 0x180158D5C (-RuntimeClassInitialize@GlobalCompositionTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<Windows::UI::Composition::SystemBackdropHelper,Windows::UI::Composition::ContainerVisual *,Windows::UI::Composition::Compositor *,0>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx

  v6 = operator new(0x20uLL);
  if ( v6 )
  {
    v7 = *a3;
    v8 = *a2;
    v6[2] = 0LL;
    v6[3] = 0LL;
    *v6 = v8;
    v6[1] = v7;
  }
  *a1 = v6;
  return a1;
}
