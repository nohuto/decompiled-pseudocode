/*
 * XREFs of RtlpWnfCalculateAndSetNextTimer @ 0x180092468
 * Callers:
 *     RtlpWnfNotificationThread @ 0x18005A6A0 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800922E0 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlpGetNextWnfNameSubscription @ 0x180092534 (RtlpGetNextWnfNameSubscription.c)
 *     RtlpWnfSetRetryTimer @ 0x1800925B4 (RtlpWnfSetRetryTimer.c)
 */

void RtlpWnfCalculateAndSetNextTimer()
{
  unsigned __int64 v0; // rdi
  int v1; // ebp
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 NextWnfNameSubscription; // rbx

  v0 = 0LL;
  v1 = 0;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_18017AAE0 + 8));
  v2 = *(_QWORD *)(qword_18017AAE0 + 24);
  if ( (v2 & 1) != 0 )
  {
    if ( v2 == 1 )
      v3 = 0LL;
    else
      v3 = v2 ^ ((qword_18017AAE0 + 16) | 1);
  }
  else
  {
    v3 = *(_QWORD *)(qword_18017AAE0 + 24);
  }
  NextWnfNameSubscription = (v3 - 32) & ((unsigned __int128)-(__int128)(unsigned __int64)v3 >> 64);
  if ( NextWnfNameSubscription )
  {
    do
    {
      RtlAcquireSRWLockShared((PRTL_SRWLOCK)(NextWnfNameSubscription + 64));
      if ( *(_DWORD *)(NextWnfNameSubscription + 136) == 2 && (!v0 || *(_QWORD *)(NextWnfNameSubscription + 144) < v0) )
      {
        v0 = *(_QWORD *)(NextWnfNameSubscription + 144);
        v1 = 1;
      }
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)(NextWnfNameSubscription + 64));
      NextWnfNameSubscription = RtlpGetNextWnfNameSubscription(NextWnfNameSubscription);
    }
    while ( NextWnfNameSubscription );
    if ( v1 )
      RtlpWnfSetRetryTimer(v0);
  }
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_18017AAE0 + 8));
}
