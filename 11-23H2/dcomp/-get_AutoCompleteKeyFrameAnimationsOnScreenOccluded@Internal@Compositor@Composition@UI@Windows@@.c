/*
 * XREFs of ?get_AutoCompleteKeyFrameAnimationsOnScreenOccluded@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x180110E50
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Internal::get_AutoCompleteKeyFrameAnimationsOnScreenOccluded(
        Windows::UI::Composition::Compositor::Internal *this,
        bool *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v3; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1112);
  v3 = 0;
  *a2 = 0;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1112));
  if ( (v2->SpinCount & 2) != 0 )
  {
    *a2 = (v2[25].SpinCount & 4) != 0;
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v3;
}
