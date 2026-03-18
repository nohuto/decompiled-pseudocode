/*
 * XREFs of BgConsoleDestroyInterface @ 0x140AEF504
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403ADB80 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x140AEEA68 (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140B9D7AC (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140385660 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403856B0 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x1403860A0 (BgpFwFreeMemory.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140AEF564 (BgpDisplayCharacterDestroyContext.c)
 */

char __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  __int64 v2; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    v2 = qword_140CF7AE8;
    if ( qword_140CF7AE8 )
    {
      if ( *(_QWORD *)(qword_140CF7AE8 + 40) )
      {
        BgpDisplayCharacterDestroyContext(*(_QWORD *)(qword_140CF7AE8 + 40));
        v2 = qword_140CF7AE8;
      }
      BgpFwFreeMemory(v2);
      qword_140CF7AE8 = 0LL;
    }
  }
  return BgpFwReleaseLock();
}
