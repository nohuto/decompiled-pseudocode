/*
 * XREFs of ?Scroll@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJPEBUtagRECT@@0HH@Z @ 0x18010A6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Scroll@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBUtagRECT@@0HH@Z @ 0x180152D20 (-Scroll@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBUtagRECT@@0HH@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionDrawingSurface::Interop::Scroll(
        Windows::UI::Composition::CompositionDrawingSurface::Interop *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        int a4,
        int a5)
{
  Windows::UI::Composition::DrawingSurfaceBase *v5; // rdi
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  unsigned int v10; // edi
  int v11; // eax

  v5 = (Windows::UI::Composition::CompositionDrawingSurface::Interop *)((char *)this - 224);
  v7 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 25);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v7);
  if ( (*((_BYTE *)v5 + 32) & 2) != 0 )
  {
    v11 = Windows::UI::Composition::DrawingSurfaceBase::Scroll(v5, a2, a3, a4, a5);
    v10 = v11;
    if ( v11 < 0 )
      DoStackCaptureDirect(v11, 0x2FAu);
    else
      v10 = 0;
  }
  else
  {
    v10 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v7);
  return v10;
}
