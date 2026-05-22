/*
 * XREFs of ?TryUpdatePosition@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@PEAH@Z @ 0x18013B580
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?TryUpdatePosition@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numerics@Foundation@5@W4InteractionTrackerClampingOption@2345@W4InteractionTrackerPositionUpdateOption@2345@PEAH@Z @ 0x18013B614 (-TryUpdatePosition@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Nume.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::Api::TryUpdatePosition(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v7; // edi
  int updated; // eax

  v3 = a1 - 136;
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 136 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*(_BYTE *)(v3 + 32) & 2) != 0 )
  {
    updated = Windows::UI::Composition::Interactions::InteractionTracker::TryUpdatePosition(v3, a2, 0LL, 0LL, a3);
    v7 = updated;
    if ( updated < 0 )
      DoStackCaptureDirect(updated, 0xB72u);
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
