/*
 * XREFs of ?put_GlobalPlaybackRate@Api@CompositorCommon@Composition@UI@Windows@@UEAAJM@Z @ 0x18012C150
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetGlobalPlaybackRate@CompositorCommon@Composition@UI@Windows@@QEAAJM@Z @ 0x18012980C (-SetGlobalPlaybackRate@CompositorCommon@Composition@UI@Windows@@QEAAJM@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::put_GlobalPlaybackRate(
        Windows::UI::Composition::CompositorCommon::Api *this,
        float a2)
{
  Windows::UI::Composition::CompositorCommon *v2; // rdi
  unsigned int v3; // ebx
  int v4; // eax

  v2 = (Windows::UI::Composition::CompositorCommon::Api *)((char *)this - 176);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 176));
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v4 = Windows::UI::Composition::CompositorCommon::SetGlobalPlaybackRate(v2, a2);
    v3 = v4;
    if ( v4 < 0 )
      DoStackCaptureDirect(v4, 0x215Eu);
    else
      v3 = 0;
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v2);
  return v3;
}
