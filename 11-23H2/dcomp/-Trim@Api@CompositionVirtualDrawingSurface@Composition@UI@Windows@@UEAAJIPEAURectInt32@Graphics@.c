/*
 * XREFs of ?Trim@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJIPEAURectInt32@Graphics@5@@Z @ 0x180196030
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Trim@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJIPEBURectInt32@Graphics@4@@Z @ 0x1801960CC (-Trim@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJIPEBURectInt32@Graphics@4@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionVirtualDrawingSurface::Api::Trim(
        Windows::UI::Composition::CompositionVirtualDrawingSurface::Api *this,
        unsigned int a2,
        struct Windows::Graphics::RectInt32 *a3)
{
  Windows::UI::Composition::CompositionVirtualDrawingSurface *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v7; // edi
  int v8; // eax

  v3 = (Windows::UI::Composition::CompositionVirtualDrawingSurface::Api *)((char *)this - 192);
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 21);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    v8 = Windows::UI::Composition::CompositionVirtualDrawingSurface::Trim(v3, a2, a3);
    v7 = v8;
    if ( v8 < 0 )
      DoStackCaptureDirect(v8, 0x1CDu);
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
