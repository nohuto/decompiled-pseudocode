/*
 * XREFs of BgConsoleDestroyInterface @ 0x140AEF504
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403ADD60 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x140AEEA68 (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140B9D7B0 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140385840 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140385890 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x140386280 (BgpFwFreeMemory.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140AEF564 (BgpDisplayCharacterDestroyContext.c)
 */

char __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  __int64 v2; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    v2 = qword_140CF7AE0;
    if ( qword_140CF7AE0 )
    {
      if ( *(_QWORD *)(qword_140CF7AE0 + 40) )
      {
        BgpDisplayCharacterDestroyContext(*(_QWORD *)(qword_140CF7AE0 + 40));
        v2 = qword_140CF7AE0;
      }
      BgpFwFreeMemory(v2);
      qword_140CF7AE0 = 0LL;
    }
  }
  return BgpFwReleaseLock();
}
