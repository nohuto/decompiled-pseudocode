/*
 * XREFs of ?CreateTargetForCurrentView@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionTarget@345@@Z @ 0x18010F8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreateTargetForCoreWindow@Compositor@Composition@UI@Windows@@QEAAJPEAPEAUICompositionTarget@234@@Z @ 0x18010F498 (-CreateTargetForCoreWindow@Compositor@Composition@UI@Windows@@QEAAJPEAPEAUICompositionTarget@234.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Api::CreateTargetForCurrentView(
        struct _RTL_CRITICAL_SECTION *this,
        struct Windows::UI::Composition::ICompositionTarget **a2)
{
  Windows::UI::Composition::Compositor *v2; // rdi
  unsigned int v4; // ebx
  int TargetForCoreWindow; // eax

  *a2 = 0LL;
  v2 = (Windows::UI::Composition::Compositor *)&this[-27];
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 27);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    TargetForCoreWindow = Windows::UI::Composition::Compositor::CreateTargetForCoreWindow(v2, a2);
    v4 = TargetForCoreWindow;
    if ( TargetForCoreWindow < 0 )
      DoStackCaptureDirect(TargetForCoreWindow, 0x4E9u);
    else
      v4 = 0;
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v2);
  return v4;
}
