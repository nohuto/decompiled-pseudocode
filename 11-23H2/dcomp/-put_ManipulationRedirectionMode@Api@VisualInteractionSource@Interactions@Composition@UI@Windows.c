/*
 * XREFs of ?put_ManipulationRedirectionMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJW4VisualInteractionSourceRedirectionMode@3456@@Z @ 0x18011F0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetManipulationRedirectionMode@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJW4VisualInteractionSourceRedirectionMode@2345@@Z @ 0x18011E01C (-SetManipulationRedirectionMode@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEA.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::Api::put_ManipulationRedirectionMode(
        __int64 a1,
        int a2)
{
  __int64 v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax

  v2 = a1 - 128;
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 128 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*(_BYTE *)(v2 + 32) & 2) != 0 )
  {
    v6 = Windows::UI::Composition::Interactions::VisualInteractionSource::SetManipulationRedirectionMode(v2, a2);
    v5 = v6;
    if ( v6 < 0 )
      DoStackCaptureDirect(v6, 0x56Du);
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
