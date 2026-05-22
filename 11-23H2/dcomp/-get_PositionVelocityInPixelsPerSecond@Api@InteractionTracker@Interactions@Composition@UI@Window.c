/*
 * XREFs of ?get_PositionVelocityInPixelsPerSecond@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z @ 0x18013CE70
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::Api::get_PositionVelocityInPixelsPerSecond(
        Windows::UI::Composition::Interactions::InteractionTracker::Api *this,
        struct Windows::Foundation::Numerics::Vector3 *a2)
{
  unsigned int v2; // esi
  struct _RTL_CRITICAL_SECTION *v4; // rbx

  v2 = 0;
  *(_QWORD *)a2 = 0LL;
  *((_DWORD *)a2 + 2) = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)this - 104) & 2) == 0 )
  {
    v2 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v2;
}
