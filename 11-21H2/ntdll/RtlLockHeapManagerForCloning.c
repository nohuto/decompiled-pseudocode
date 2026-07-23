/*
 * XREFs of RtlLockHeapManagerForCloning @ 0x1800FDAB4
 * Callers:
 *     RtlPrepareForProcessCloning @ 0x1800A2FA0 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800E2990 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlpHpHeapLock @ 0x180015DFC (RtlpHpHeapLock.c)
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryEnterCriticalSection @ 0x1800225E0 (RtlTryEnterCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpCSparseBitmapLock @ 0x180056664 (RtlpCSparseBitmapLock.c)
 *     ZwDelayExecution @ 0x1800A46F0 (ZwDelayExecution.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x18010008C (RtlpUnlockHeapManagerForCloning.c)
 *     RtlpHpLfhContextLockUnlock @ 0x18011F6A4 (RtlpHpLfhContextLockUnlock.c)
 */

__int64 RtlLockHeapManagerForCloning()
{
  struct _PEB *v0; // r14
  unsigned int v1; // edi
  unsigned int i; // esi
  void **ProcessHeaps; // rax
  char *v4; // rbx
  int v5; // ebp
  _RTL_SRWLOCK *v7; // rcx
  char v8[40]; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+50h] [rbp+8h] BYREF
  LARGE_INTEGER DelayInterval; // [rsp+58h] [rbp+10h] BYREF

  v0 = NtCurrentPeb();
  RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  RtlpCSparseBitmapLock((_RTL_SRWLOCK *)BaseAddress, 1, (__int64)v8);
  v1 = 0;
  for ( i = 0; i < v0->NumberOfHeaps; ++i )
  {
    ProcessHeaps = v0->ProcessHeaps;
    v4 = (char *)ProcessHeaps[i];
    if ( *((_DWORD *)v4 + 4) == -571548178 )
    {
      if ( (v4[20] & 1) == 0 )
      {
        RtlpHpHeapLock((__int64)ProcessHeaps[i], &v9);
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v4 + 54);
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v4 + 78);
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v4 + 28);
        RtlpHpLfhContextLockUnlock(v4 + 896, 0LL);
      }
    }
    else if ( (v4[112] & 1) == 0 )
    {
      v5 = 0;
      DelayInterval.QuadPart = -250000LL;
      while ( !RtlTryEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)v4 + 44)) )
      {
        ZwDelayExecution(0, &DelayInterval);
        if ( (unsigned int)++v5 >= 0x64 )
        {
          v1 = -1073741420;
          RtlpUnlockHeapManagerForCloning(0LL, i);
          return v1;
        }
      }
      if ( v4[418] == 2 )
      {
        v7 = (_RTL_SRWLOCK *)*((_QWORD *)v4 + 51);
        if ( v7 )
          RtlAcquireSRWLockExclusive(v7);
      }
    }
  }
  return v1;
}
