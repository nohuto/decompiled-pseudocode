/*
 * XREFs of ?get_Status@AsyncInfo@CommitCompletionWaiter@Composition@UI@Windows@@UEAAJPEAW4AsyncStatus@Foundation@5ABI@@@Z @ 0x180172A60
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CommitCompletionWaiter::AsyncInfo::get_Status(
        Windows::UI::Composition::CommitCompletionWaiter::AsyncInfo *this,
        enum AsyncStatus *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi

  *a2 = AsyncStatus_Error;
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 15);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)this - 112) & 2) != 0 )
  {
    *a2 = *((enum AsyncStatus *)this + 18);
    v5 = 0;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v5;
}
