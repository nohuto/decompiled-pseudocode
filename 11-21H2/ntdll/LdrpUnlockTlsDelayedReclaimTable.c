/*
 * XREFs of LdrpUnlockTlsDelayedReclaimTable @ 0x1800E1CA4
 * Callers:
 *     RtlCompleteProcessCloning @ 0x1800A2E60 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800A2FA0 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800E2990 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 */

signed __int64 __fastcall LdrpUnlockTlsDelayedReclaimTable(int a1)
{
  __int64 *v2; // rdi
  int v3; // esi
  volatile signed __int64 *v4; // rbp
  __int64 v5; // r8
  __int64 v6; // rbx

  v2 = (__int64 *)&unk_18017ADB0;
  v3 = 15;
  v4 = (volatile signed __int64 *)&unk_18017ADB8;
  do
  {
    if ( a1 )
    {
      v5 = *v2;
      if ( *v2 )
      {
        do
        {
          v6 = *(_QWORD *)(v5 + 8);
          RtlFreeHeap(LdrpTlsHeap, 0, v5);
          v5 = v6;
        }
        while ( v6 );
        *v2 = 0LL;
      }
      v2[1] = 1LL;
    }
    RtlReleaseSRWLockExclusive(v4);
    v4 -= 2;
    v2 -= 2;
    --v3;
  }
  while ( v3 >= 0 );
  if ( a1 )
  {
    LdrpActiveThreadCount = 1;
    LdrpTlsLock = 17LL;
  }
  return RtlReleaseSRWLockShared(&LdrpTlsLock);
}
