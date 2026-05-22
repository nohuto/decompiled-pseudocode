/*
 * XREFs of ?TryUpdatePositionWithAdditionalVelocity@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@PEAH@Z @ 0x18013B9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?TryUpdatePositionWithAdditionalVelocity@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAXAEAUVector3@Numerics@Foundation@5@PEAH@Z @ 0x18013BA58 (-TryUpdatePositionWithAdditionalVelocity@InteractionTracker@Interactions@Composition@UI@Windows@.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::Api::TryUpdatePositionWithAdditionalVelocity(
        __int64 a1,
        struct Windows::Foundation::Numerics::Vector3 *a2,
        int *a3)
{
  Windows::UI::Composition::Interactions::InteractionTracker *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v7; // edi

  v3 = (Windows::UI::Composition::Interactions::InteractionTracker *)(a1 - 136);
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 136 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    Windows::UI::Composition::Interactions::InteractionTracker::TryUpdatePositionWithAdditionalVelocity(v3, a2, a3);
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
