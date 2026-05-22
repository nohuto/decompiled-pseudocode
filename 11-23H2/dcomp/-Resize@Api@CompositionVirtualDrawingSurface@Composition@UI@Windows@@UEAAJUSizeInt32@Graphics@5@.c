/*
 * XREFs of ?Resize@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJUSizeInt32@Graphics@5@@Z @ 0x18008C7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Resize@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@@Z @ 0x18008C848 (-Resize@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionVirtualDrawingSurface::Api::Resize(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi

  v2 = a1 - 200;
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 200 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*(_BYTE *)(v2 + 32) & 2) != 0 )
  {
    v5 = Windows::UI::Composition::CompositionVirtualDrawingSurface::Resize(v2, a2);
    v6 = v5;
    if ( v5 < 0 )
      DoStackCaptureDirect(v5, 0x15Fu);
    else
      v6 = 0;
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
