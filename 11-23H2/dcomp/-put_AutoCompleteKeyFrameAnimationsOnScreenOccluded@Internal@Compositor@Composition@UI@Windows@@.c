/*
 * XREFs of ?put_AutoCompleteKeyFrameAnimationsOnScreenOccluded@Internal@Compositor@Composition@UI@Windows@@UEAAJE@Z @ 0x180095320
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Internal::put_AutoCompleteKeyFrameAnimationsOnScreenOccluded(
        Windows::UI::Composition::Compositor::Internal *this,
        char a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v4; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1112);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1112));
  if ( (v2->SpinCount & 2) != 0 )
  {
    LOBYTE(v2[25].SpinCount) = v2[25].SpinCount & 0xFB | (a2 != 0 ? 4 : 0);
    v4 = 0;
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v4;
}
