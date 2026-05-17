/*
 * XREFs of LdrpUnlockTlsDelayedReclaimTable @ 0x1800E04B4
 * Callers:
 *     RtlCompleteProcessCloning @ 0x18009DFE0 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009E120 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800E1600 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 */

signed __int64 __fastcall LdrpUnlockTlsDelayedReclaimTable(int a1)
{
  __int64 *v2; // rdi
  int v3; // esi
  volatile signed __int64 *v4; // rbp
  __int64 v5; // r8
  __int64 v6; // rbx

  v2 = (__int64 *)&unk_180184FF0;
  v3 = 15;
  v4 = (volatile signed __int64 *)&unk_180184FF8;
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
