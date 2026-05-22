/*
 * XREFs of ?ScrollRect@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJUPointInt32@Graphics@5@URectInt32@75@@Z @ 0x180195E40
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Scroll@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBURectInt32@Graphics@4@0AEBUPointInt32@64@@Z @ 0x180152C5C (-Scroll@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBURectInt32@Graphics@4@0AEBUPointInt32.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionVirtualDrawingSurface::Api::ScrollRect(
        __int64 a1,
        __int64 a2,
        const struct Windows::Graphics::RectInt32 *a3)
{
  Windows::UI::Composition::DrawingSurfaceBase *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v6; // edi
  int v7; // eax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v3 = (Windows::UI::Composition::DrawingSurfaceBase *)(a1 - 200);
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 200 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    v7 = Windows::UI::Composition::DrawingSurfaceBase::Scroll(
           v3,
           a3,
           0LL,
           (const struct Windows::Graphics::PointInt32 *)&v9);
    v6 = v7;
    if ( v7 < 0 )
      DoStackCaptureDirect(v7, 0x18Au);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v6;
}
