/*
 * XREFs of BgConsoleGetInterface @ 0x140AEE5EC
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403ADD60 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140B9D198 (BgkInitialize.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140B9D7B0 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140385840 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140385890 (BgpFwAcquireLock.c)
 */

__int64 (__fastcall **BgConsoleGetInterface())()
{
  __int64 (__fastcall **v0)(); // rbx
  __int64 (__fastcall **v1)(); // rcx

  v0 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_140C0E4B0 & 1) != 0 )
  {
    v1 = BgpConsoleInterface;
    if ( !qword_140C0E558 )
      v1 = 0LL;
    v0 = v1;
  }
  BgpFwReleaseLock();
  return v0;
}
