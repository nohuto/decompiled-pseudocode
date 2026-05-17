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

signed __int64 __fastcall RtlpWnfCalculateAndSetNextTimer(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // rdi
  int v5; // esi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 NextWnfNameSubscription; // rbx

  v4 = 0LL;
  v5 = 0;
  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_180187E00 + 8), a2, a3, a4);
  v9 = *(_QWORD *)(qword_180187E00 + 24);
  if ( (v9 & 1) != 0 )
  {
    if ( v9 == 1 )
      v10 = 0LL;
    else
      v10 = v9 ^ ((qword_180187E00 + 16) | 1);
  }
  else
  {
    v10 = *(_QWORD *)(qword_180187E00 + 24);
  }
  NextWnfNameSubscription = (v10 - 32) & ((unsigned __int128)-(__int128)(unsigned __int64)v10 >> 64);
  if ( NextWnfNameSubscription )
  {
    do
    {
      RtlAcquireSRWLockShared((volatile signed __int64 *)(NextWnfNameSubscription + 64), v6, v7, v8);
      if ( *(_DWORD *)(NextWnfNameSubscription + 136) == 2 && (!v4 || *(_QWORD *)(NextWnfNameSubscription + 144) < v4) )
      {
        v4 = *(_QWORD *)(NextWnfNameSubscription + 144);
        v5 = 1;
      }
      RtlReleaseSRWLockShared((volatile signed __int64 *)(NextWnfNameSubscription + 64));
      NextWnfNameSubscription = RtlpGetNextWnfNameSubscription(NextWnfNameSubscription);
    }
    while ( NextWnfNameSubscription );
    if ( v5 )
      RtlpWnfSetRetryTimer(v4);
  }
  return RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_180187E00 + 8));
}
