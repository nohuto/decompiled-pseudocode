/*
 * XREFs of ?EnsureOnThread@SystemOnly@Compositor@Composition@UI@Windows@@UEAAJK@Z @ 0x18008DD60
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::SystemOnly::EnsureOnThread(
        Windows::UI::Composition::Compositor::SystemOnly *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  unsigned int v2; // ebx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1136);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1136));
  if ( (v1->SpinCount & 2) != 0 )
  {
    v2 = 0;
  }
  else
  {
    v2 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v1);
  return v2;
}
