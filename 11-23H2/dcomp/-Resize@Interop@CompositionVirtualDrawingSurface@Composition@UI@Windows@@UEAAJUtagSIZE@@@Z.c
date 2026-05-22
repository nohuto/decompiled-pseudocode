/*
 * XREFs of ?Resize@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJUtagSIZE@@@Z @ 0x180195C60
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Resize@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@@Z @ 0x18008C848 (-Resize@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionVirtualDrawingSurface::Interop::Resize(
        Windows::UI::Composition::CompositionVirtualDrawingSurface::Interop *this,
        struct tagSIZE a2)
{
  Windows::UI::Composition::CompositionVirtualDrawingSurface *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax

  v2 = (Windows::UI::Composition::CompositionVirtualDrawingSurface::Interop *)((char *)this - 232);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 26);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v6 = Windows::UI::Composition::CompositionVirtualDrawingSurface::Resize(v2, *(_QWORD *)&a2);
    v5 = v6;
    if ( v6 < 0 )
      DoStackCaptureDirect(v6, 0x211u);
    else
      v5 = 0;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
