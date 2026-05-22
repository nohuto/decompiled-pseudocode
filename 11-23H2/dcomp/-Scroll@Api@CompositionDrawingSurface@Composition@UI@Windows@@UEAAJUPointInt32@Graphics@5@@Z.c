/*
 * XREFs of ?Scroll@Api@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJUPointInt32@Graphics@5@@Z @ 0x18010A630
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Scroll@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBURectInt32@Graphics@4@0AEBUPointInt32@64@@Z @ 0x180152C5C (-Scroll@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBURectInt32@Graphics@4@0AEBUPointInt32.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionDrawingSurface::Api::Scroll(__int64 a1, __int64 a2)
{
  Windows::UI::Composition::DrawingSurfaceBase *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v4; // edi
  int v5; // eax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v2 = (Windows::UI::Composition::DrawingSurfaceBase *)(a1 - 192);
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 192 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v5 = Windows::UI::Composition::DrawingSurfaceBase::Scroll(
           v2,
           0LL,
           0LL,
           (const struct Windows::Graphics::PointInt32 *)&v7);
    v4 = v5;
    if ( v5 < 0 )
      DoStackCaptureDirect(v5, 0x1C3u);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v4;
}
