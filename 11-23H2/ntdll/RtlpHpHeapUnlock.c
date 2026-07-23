/*
 * XREFs of RtlpHpHeapUnlock @ 0x18002D904
 * Callers:
 *     RtlUnlockHeap @ 0x180029D40 (RtlUnlockHeap.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x180051420 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpHpUnlockHeapForCloning @ 0x1801233D4 (RtlpHpUnlockHeapForCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpHpHeapUnlock(__int64 a1, int a2)
{
  _RTL_SRWLOCK *v4; // rsi
  _DWORD *v5; // r8
  _RTL_SRWLOCK *v6; // rdi
  _WORD *v7; // rdx
  _RTL_SRWLOCK *v8; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx

  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
  {
    v4 = (_RTL_SRWLOCK *)(a1 + 704);
    v5 = (_DWORD *)(a1 + 220);
    v6 = (_RTL_SRWLOCK *)(a1 + 384);
    v7 = (_WORD *)(a1 + 216);
    if ( a2 )
    {
      v10 = (_QWORD *)(a1 + 384);
      *v5 = NtCurrentTeb()->ClientId.UniqueThread;
      v11 = 2LL;
      *v7 = 1;
      *(_QWORD *)(a1 + 968) = 1LL;
      v4->Value = 1LL;
      do
      {
        *v10 = 1LL;
        v10 += 24;
        --v11;
      }
      while ( v11 );
      v8 = (_RTL_SRWLOCK *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = 1LL;
    }
    else
    {
      v8 = (_RTL_SRWLOCK *)(a1 + 64);
    }
    if ( (*v7)-- == 1 )
    {
      *v5 = 0;
      if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive(v8);
        if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
        {
          RtlReleaseSRWLockExclusive(v6);
          if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
          {
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 576));
            if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
              RtlReleaseSRWLockExclusive(v4);
          }
        }
      }
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 968));
    }
  }
}
