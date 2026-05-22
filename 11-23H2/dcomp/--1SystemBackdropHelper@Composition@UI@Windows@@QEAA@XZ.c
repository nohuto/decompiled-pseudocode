/*
 * XREFs of ??1SystemBackdropHelper@Composition@UI@Windows@@QEAA@XZ @ 0x18008A69C
 * Callers:
 *     ?Destroy@?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@UEAAXXZ @ 0x180010D40 (-Destroy@-$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@D.c)
 *     ??1?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@UEAA@XZ @ 0x1800127D4 (--1-$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop.c)
 *     ?OnSetRootImpl@?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAVVisual@345@_N@Z @ 0x18006CB30 (-OnSetRootImpl@-$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windo.c)
 *     ??$?4U?$default_delete@VSystemBackdropHelper@Composition@UI@Windows@@@std@@$0A@@?$unique_ptr@VSystemBackdropHelper@Composition@UI@Windows@@U?$default_delete@VSystemBackdropHelper@Composition@UI@Windows@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18006D0E8 (--$-4U-$default_delete@VSystemBackdropHelper@Composition@UI@Windows@@@std@@$0A@@-$unique_ptr@VSy.c)
 *     ?OnSetRootImpl@?$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAVVisual@345@_N@Z @ 0x18006D130 (-OnSetRootImpl@-$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@.c)
 *     ?Destroy@?$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@UEAAXXZ @ 0x18008A5D0 (-Destroy@-$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desk.c)
 *     ??1?$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@UEAA@XZ @ 0x18008CBB4 (--1-$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Co.c)
 *     ??_EGlobalCompositionTarget@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180158C70 (--_EGlobalCompositionTarget@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ?Destroy@GlobalCompositionTarget@Composition@UI@Windows@@UEAAXXZ @ 0x180158CF0 (-Destroy@GlobalCompositionTarget@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@GlobalCompositionTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUICompositionTargetHostPartner@234@@Z @ 0x180158D5C (-RuntimeClassInitialize@GlobalCompositionTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@.c)
 * Callees:
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::SystemBackdropHelper::~SystemBackdropHelper(
        Windows::UI::Composition::SystemBackdropHelper *this)
{
  Microsoft::WRL2::ContextRuntimeClass *v2; // rcx
  Microsoft::WRL2::ContextRuntimeClass *v3; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v5; // rcx

  v2 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 3);
  if ( v2 )
    Microsoft::WRL2::ContextRuntimeClass::Dispose(v2);
  v3 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 2);
  if ( v3 )
    Microsoft::WRL2::ContextRuntimeClass::Dispose(v3);
  v4 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    *((_QWORD *)this + 3) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  }
  v5 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 2);
  if ( v5 )
  {
    *((_QWORD *)this + 2) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v5);
  }
}
