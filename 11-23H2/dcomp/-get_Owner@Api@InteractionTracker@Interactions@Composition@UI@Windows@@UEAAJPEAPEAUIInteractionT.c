/*
 * XREFs of ?get_Owner@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUIInteractionTrackerOwner@3456@@Z @ 0x18013CC90
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::Api::get_Owner(
        Windows::UI::Composition::Interactions::InteractionTracker::Api *this,
        struct Windows::UI::Composition::Interactions::IInteractionTrackerOwner **a2)
{
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx

  v3 = 0;
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 104) & 2) != 0 )
  {
    *a2 = (struct Windows::UI::Composition::Interactions::IInteractionTrackerOwner *)*((_QWORD *)this + 25);
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v3;
}
