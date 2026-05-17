/*
 * XREFs of RtlLockHeapManagerForCloning @ 0x1800FD7E0
 * Callers:
 *     RtlPrepareForProcessCloning @ 0x18009E120 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800E1600 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpHpHeapLock @ 0x18002DA0C (RtlpHpHeapLock.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryEnterCriticalSection @ 0x180044030 (RtlTryEnterCriticalSection.c)
 *     RtlpCSparseBitmapLock @ 0x18004ADB4 (RtlpCSparseBitmapLock.c)
 *     ZwDelayExecution @ 0x18009F470 (ZwDelayExecution.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800FFD58 (RtlpUnlockHeapManagerForCloning.c)
 *     RtlpHpLfhContextLockUnlock @ 0x180121618 (RtlpHpLfhContextLockUnlock.c)
 */

__int64 RtlLockHeapManagerForCloning()
{
  struct _PEB *v0; // r14
  unsigned __int64 v1; // r9
  unsigned int v2; // edi
  unsigned int i; // esi
  void **ProcessHeaps; // rax
  char *v5; // rbx
  int v6; // ebp
  volatile signed __int64 *v8; // rcx
  char v9[40]; // [rsp+20h] [rbp-28h] BYREF
  char v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h]

  v0 = NtCurrentPeb();
  RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
  RtlpCSparseBitmapLock((__int64)&unk_1801859C0, 1uLL, (unsigned __int64)v9, v1);
  v2 = 0;
  for ( i = 0; i < v0->NumberOfHeaps; ++i )
  {
    ProcessHeaps = v0->ProcessHeaps;
    v5 = (char *)ProcessHeaps[i];
    if ( *((_DWORD *)v5 + 4) == -571548178 )
    {
      if ( (v5[20] & 1) == 0 )
      {
        RtlpHpHeapLock((__int64)ProcessHeaps[i], &v10);
        RtlAcquireSRWLockExclusive((volatile signed __int64 *)v5 + 54);
        RtlAcquireSRWLockExclusive((volatile signed __int64 *)v5 + 78);
        RtlAcquireSRWLockExclusive((volatile signed __int64 *)v5 + 28);
        RtlpHpLfhContextLockUnlock(v5 + 896, 0LL);
      }
    }
    else if ( (v5[112] & 1) == 0 )
    {
      v6 = 0;
      v11 = -250000LL;
      while ( !(unsigned int)RtlTryEnterCriticalSection(*((_QWORD *)v5 + 44)) )
      {
        ZwDelayExecution();
        if ( (unsigned int)++v6 >= 0x64 )
        {
          v2 = -1073741420;
          RtlpUnlockHeapManagerForCloning(0LL, i);
          return v2;
        }
      }
      if ( v5[418] == 2 )
      {
        v8 = (volatile signed __int64 *)*((_QWORD *)v5 + 51);
        if ( v8 )
          RtlAcquireSRWLockExclusive(v8);
      }
    }
  }
  return v2;
}
