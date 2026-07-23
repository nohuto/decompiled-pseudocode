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

void __fastcall LdrpUnlockTlsDelayedReclaimTable(int a1)
{
  char *v2; // rdi
  int v3; // esi
  _RTL_SRWLOCK *v4; // rbp
  _QWORD *v5; // r8
  _QWORD *v6; // rbx

  v2 = (char *)&unk_18017ADB0;
  v3 = 15;
  v4 = &stru_18017ADB8;
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
