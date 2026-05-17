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
  unsigned __int64 v1; // r9
  unsigned int v2; // edi
  unsigned int i; // esi
  void **ProcessHeaps; // rax
  char *v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  int v15; // ebp
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned __int64 v20; // rcx
  char v21[40]; // [rsp+20h] [rbp-28h] BYREF
  char v22; // [rsp+50h] [rbp+8h] BYREF
  __int64 v23; // [rsp+58h] [rbp+10h]

  v0 = NtCurrentPeb();
  RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
  RtlpCSparseBitmapLock((__int64)&unk_18017B720, 1uLL, (unsigned __int64)v21, v1);
  v2 = 0;
  for ( i = 0; i < v0->NumberOfHeaps; ++i )
  {
    ProcessHeaps = v0->ProcessHeaps;
    v5 = (char *)ProcessHeaps[i];
    if ( *((_DWORD *)v5 + 4) == -571548178 )
    {
      if ( (v5[20] & 1) == 0 )
      {
        RtlpHpHeapLock((__int64)ProcessHeaps[i], &v22);
        RtlAcquireSRWLockExclusive((unsigned __int64)(v5 + 432), v6, v7, v8);
        RtlAcquireSRWLockExclusive((unsigned __int64)(v5 + 624), v9, v10, v11);
        RtlAcquireSRWLockExclusive((unsigned __int64)(v5 + 224), v12, v13, v14);
        RtlpHpLfhContextLockUnlock(v5 + 896, 0LL);
      }
    }
    else if ( (v5[112] & 1) == 0 )
    {
      v15 = 0;
      v23 = -250000LL;
      while ( !(unsigned int)RtlTryEnterCriticalSection(*((_QWORD *)v5 + 44)) )
      {
        ZwDelayExecution();
        if ( (unsigned int)++v15 >= 0x64 )
        {
          v2 = -1073741420;
          RtlpUnlockHeapManagerForCloning(0LL, i);
          return v2;
        }
      }
      if ( v5[418] == 2 )
      {
        v20 = *((_QWORD *)v5 + 51);
        if ( v20 )
          RtlAcquireSRWLockExclusive(v20, v16, v17, v18);
      }
    }
  }
  return v2;
}
