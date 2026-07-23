/*
 * XREFs of LdrpUnlockTlsDelayedReclaimTable @ 0x1800E17E4
 * Callers:
 *     RtlCompleteProcessCloning @ 0x18009E920 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009EA60 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800E2930 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

void __fastcall LdrpUnlockTlsDelayedReclaimTable(int a1)
{
  char *v2; // rdi
  int v3; // esi
  _RTL_SRWLOCK *v4; // rbp
  _QWORD *v5; // r8
  _QWORD *v6; // rbx

  v2 = (char *)&unk_1801880F0;
  v3 = 15;
  v4 = &stru_1801880F8;
  do
  {
    if ( a1 )
    {
      v5 = *(_QWORD **)v2;
      if ( *(_QWORD *)v2 )
      {
        do
        {
          v6 = (_QWORD *)v5[1];
          RtlFreeHeap(LdrpTlsHeap, 0, v5);
          v5 = v6;
        }
        while ( v6 );
        *(_QWORD *)v2 = 0LL;
      }
      *((_QWORD *)v2 + 1) = 1LL;
    }
    RtlReleaseSRWLockExclusive(v4);
    v4 -= 2;
    v2 -= 16;
    --v3;
  }
  while ( v3 >= 0 );
  if ( a1 )
  {
    LdrpActiveThreadCount = 1;
    LdrpTlsLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)17LL;
  }
  RtlReleaseSRWLockShared(&LdrpTlsLock);
}
