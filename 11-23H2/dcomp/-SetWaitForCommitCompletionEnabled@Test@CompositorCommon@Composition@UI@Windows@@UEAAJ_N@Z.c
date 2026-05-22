/*
 * XREFs of ?SetWaitForCommitCompletionEnabled@Test@CompositorCommon@Composition@UI@Windows@@UEAAJ_N@Z @ 0x18012A330
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Test::SetWaitForCommitCompletionEnabled(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v4; // edi

  v2 = this - 9;
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 9);
  if ( (v2->SpinCount & 2) != 0 )
  {
    LOBYTE(v2[11].RecursionCount) = (2 * a2) | v2[11].RecursionCount & 0xFD;
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
