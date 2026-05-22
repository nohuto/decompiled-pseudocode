/*
 * XREFs of ?TryUpdateScaleWithAdditionalVelocity@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJMUVector3@Numerics@Foundation@6@PEAH@Z @ 0x18013C070
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?TryUpdateScaleWithAdditionalVelocity@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAXMAEAUVector3@Numerics@Foundation@5@PEAH@Z @ 0x18013C108 (-TryUpdateScaleWithAdditionalVelocity@InteractionTracker@Interactions@Composition@UI@Windows@@QE.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::Api::TryUpdateScaleWithAdditionalVelocity(
        __int64 a1,
        float a2,
        struct Windows::Foundation::Numerics::Vector3 *a3,
        int *a4)
{
  Windows::UI::Composition::Interactions::InteractionTracker *v4; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v8; // edi

  v4 = (Windows::UI::Composition::Interactions::InteractionTracker *)(a1 - 136);
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 136 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v4 + 32) & 2) != 0 )
  {
    Windows::UI::Composition::Interactions::InteractionTracker::TryUpdateScaleWithAdditionalVelocity(v4, a2, a3, a4);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v8;
}
