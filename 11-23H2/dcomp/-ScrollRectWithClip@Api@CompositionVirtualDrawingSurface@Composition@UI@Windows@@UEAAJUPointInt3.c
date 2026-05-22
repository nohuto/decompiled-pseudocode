/*
 * XREFs of ?ScrollRectWithClip@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJUPointInt32@Graphics@5@URectInt32@75@1@Z @ 0x180195EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Scroll@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBURectInt32@Graphics@4@0AEBUPointInt32@64@@Z @ 0x180152C5C (-Scroll@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBURectInt32@Graphics@4@0AEBUPointInt32.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionVirtualDrawingSurface::Api::ScrollRectWithClip(
        __int64 a1,
        __int64 a2,
        const struct Windows::Graphics::RectInt32 *a3,
        const struct Windows::Graphics::RectInt32 *a4)
{
  Windows::UI::Composition::DrawingSurfaceBase *v4; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  unsigned int v8; // edi
  int v9; // eax
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  v4 = (Windows::UI::Composition::DrawingSurfaceBase *)(a1 - 200);
  v6 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 200 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*((_BYTE *)v4 + 32) & 2) != 0 )
  {
    v9 = Windows::UI::Composition::DrawingSurfaceBase::Scroll(
           v4,
           a4,
           a3,
           (const struct Windows::Graphics::PointInt32 *)&v11);
    v8 = v9;
    if ( v9 < 0 )
      DoStackCaptureDirect(v9, 0x1B7u);
    else
      v8 = 0;
  }
  else
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return v8;
}
