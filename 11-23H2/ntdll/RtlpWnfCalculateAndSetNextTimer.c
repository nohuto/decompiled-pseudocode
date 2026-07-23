/*
 * XREFs of RtlpWnfCalculateAndSetNextTimer @ 0x1800EA0B8
 * Callers:
 *     RtlpWnfNotificationThread @ 0x18004C700 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800EA640 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlpGetNextWnfNameSubscription @ 0x1800EA064 (RtlpGetNextWnfNameSubscription.c)
 *     RtlpWnfSetRetryTimer @ 0x1800EA7D0 (RtlpWnfSetRetryTimer.c)
 */

void RtlpWnfCalculateAndSetNextTimer()
{
  unsigned __int64 v0; // rdi
  int v1; // esi
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 NextWnfNameSubscription; // rbx

  v0 = 0LL;
  v1 = 0;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_180187E00 + 8));
  v2 = *(_QWORD *)(qword_180187E00 + 24);
  if ( (v2 & 1) != 0 )
  {
    if ( v2 == 1 )
      v3 = 0LL;
    else
      v3 = v2 ^ ((qword_180187E00 + 16) | 1);
  }
  else
  {
    v3 = *(_QWORD *)(qword_180187E00 + 24);
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
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_180187E00 + 8));
}
