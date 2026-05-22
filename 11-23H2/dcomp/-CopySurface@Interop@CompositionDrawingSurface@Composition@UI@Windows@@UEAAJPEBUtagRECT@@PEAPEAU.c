/*
 * XREFs of ?CopySurface@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x18010A320
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CopySurface@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x18010A140 (-CopySurface@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEBUtagRECT@@PEAPEAUIDXGISur.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionDrawingSurface::Interop::CopySurface(
        Windows::UI::Composition::CompositionDrawingSurface::Interop *this,
        const struct tagRECT *a2,
        struct IDXGISurface **a3)
{
  Windows::UI::Composition::CompositionDrawingSurface *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v7; // edi
  int v8; // eax

  v3 = (Windows::UI::Composition::CompositionDrawingSurface::Interop *)((char *)this - 224);
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 25);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    v8 = Windows::UI::Composition::CompositionDrawingSurface::CopySurface(v3, a2, a3);
    v7 = v8;
    if ( v8 < 0 )
      DoStackCaptureDirect(v8, 0x278u);
    else
      v7 = 0;
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v7;
}
