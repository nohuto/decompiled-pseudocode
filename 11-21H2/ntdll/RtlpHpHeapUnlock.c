/*
 * XREFs of RtlpHpHeapUnlock @ 0x180015AEC
 * Callers:
 *     RtlUnlockHeap @ 0x180015C80 (RtlUnlockHeap.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x180054A50 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpHpUnlockHeapForCloning @ 0x18011FB18 (RtlpHpUnlockHeapForCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpHpHeapUnlock(__int64 a1, int a2)
{
  _RTL_SRWLOCK *v3; // rcx
  int v5; // eax
  _QWORD *v6; // rax
  __int64 v7; // rcx

  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
  {
    if ( a2 )
    {
      v6 = (_QWORD *)(a1 + 384);
      *(_DWORD *)(a1 + 220) = NtCurrentTeb()->ClientId.UniqueThread;
      *(_WORD *)(a1 + 216) = 1;
      *(_QWORD *)(a1 + 968) = 1LL;
      *(_QWORD *)(a1 + 704) = 1LL;
      v7 = 2LL;
      do
      {
        *v6 = 1LL;
        v6 += 24;
        --v7;
      }
      while ( v7 );
      v3 = (_RTL_SRWLOCK *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = 1LL;
    }
    else
    {
      v3 = (_RTL_SRWLOCK *)(a1 + 64);
    }
    if ( (*(_WORD *)(a1 + 216))-- == 1 )
    {
      *(_DWORD *)(a1 + 220) = 0;
      v5 = *(_DWORD *)(a1 + 20);
      if ( (v5 & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive(v3);
        v5 = *(_DWORD *)(a1 + 20);
        if ( (v5 & 1) == 0 )
        {
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 384));
          v5 = *(_DWORD *)(a1 + 20);
          if ( (v5 & 1) == 0 )
          {
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 576));
            v5 = *(_DWORD *)(a1 + 20);
          }
        }
      }
      if ( (v5 & 1) == 0 )
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 704));
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 968));
    }
  }
}
