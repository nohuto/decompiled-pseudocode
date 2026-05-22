/*
 * XREFs of ?put_PositionXSourceMode@Api@InteractionSourceConfiguration@Interactions@Composition@UI@Windows@@UEAAJW4InteractionSourceRedirectionMode@3456@@Z @ 0x180162100
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?UpdateMousewheelInteractionConfiguration@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJXZ @ 0x18011E5E4 (-UpdateMousewheelInteractionConfiguration@VisualInteractionSource@Interactions@Composition@UI@Wi.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionSourceConfiguration::Api::put_PositionXSourceMode(
        __int64 a1,
        int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi
  Windows::UI::Composition::Interactions::VisualInteractionSource *v6; // rcx
  int updated; // eax

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 104);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 96) & 2) != 0 )
  {
    v6 = *(Windows::UI::Composition::Interactions::VisualInteractionSource **)(a1 + 16);
    *(_DWORD *)(a1 + 24) = a2;
    updated = Windows::UI::Composition::Interactions::VisualInteractionSource::UpdateMousewheelInteractionConfiguration(v6);
    v5 = updated;
    if ( updated < 0 )
      DoStackCaptureDirect(updated, 0xDCu);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
