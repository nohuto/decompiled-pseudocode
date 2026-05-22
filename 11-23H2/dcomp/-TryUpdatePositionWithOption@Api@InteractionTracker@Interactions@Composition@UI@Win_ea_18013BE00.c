/*
 * XREFs of ?TryUpdatePositionWithOption@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@W4InteractionTrackerClampingOption@3456@W4InteractionTrackerPositionUpdateOption@3456@PEAH@Z @ 0x18013BE00
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?TryUpdatePosition@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numerics@Foundation@5@W4InteractionTrackerClampingOption@2345@W4InteractionTrackerPositionUpdateOption@2345@PEAH@Z @ 0x18013B614 (-TryUpdatePosition@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Nume.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::Api::TryUpdatePositionWithOption(
        __int64 a1,
        float *a2,
        int a3,
        int a4,
        int *a5)
{
  __int64 v5; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  unsigned int v10; // edi
  int updated; // eax

  v5 = a1 - 168;
  v6 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 168 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*(_BYTE *)(v5 + 32) & 2) != 0 )
  {
    updated = Windows::UI::Composition::Interactions::InteractionTracker::TryUpdatePosition(v5, a2, a3, a4, a5);
    v10 = updated;
    if ( updated < 0 )
      DoStackCaptureDirect(updated, 0xCE7u);
    else
      v10 = 0;
  }
  else
  {
    v10 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return v10;
}
