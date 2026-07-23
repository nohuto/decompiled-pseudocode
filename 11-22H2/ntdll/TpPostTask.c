/*
 * XREFs of TpPostTask @ 0x18003545C
 * Callers:
 *     TppWorkPost @ 0x180035318 (TppWorkPost.c)
 *     RtlQueueWorkItem @ 0x18004CB70 (RtlQueueWorkItem.c)
 *     TppWorkCallbackPrologRelease @ 0x18004EC88 (TppWorkCallbackPrologRelease.c)
 *     TppDirectExecuteCallback @ 0x18007CA30 (TppDirectExecuteCallback.c)
 * Callees:
 *     RtlpWakeSRWLock @ 0x180031890 (RtlpWakeSRWLock.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1800A1D60 (NtReleaseWorkerFactoryWorker.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x1801258C0 (TppAdjustRunningThreadGoalWithLock.c)
 */

int __fastcall TpPostTask(__int64 a1, char *a2, int a3, __int64 a4)
{
  char *v5; // rdi
  __int64 v7; // r8
  signed __int32 v8; // eax
  _RTL_SRWLOCK **v9; // rsi
  _RTL_SRWLOCK *v10; // rbp
  volatile signed __int64 *v11; // rbx
  _RTL_SRWLOCK **Value; // rax
  signed __int64 v13; // rax
  int v14; // eax
  int v15; // r8d
  __int64 *ThreadPoolData; // rax
  __int64 v17; // rax
  signed __int64 v18; // rax
  int v19; // edx
  signed __int64 v20; // rtt
  signed __int32 v21; // ecx
  signed __int32 v22; // ett
  __int64 v23; // rdx
  signed __int64 v24; // rcx
  signed __int64 v25; // rdx
  signed __int64 v26; // rtt
  signed __int64 v28; // [rsp+40h] [rbp+8h]

  v5 = a2;
  if ( !a2 )
  {
    if ( a4 && (*(_BYTE *)(a4 + 56) & 2) != 0 )
    {
      v5 = (char *)TppPoolpSerializedPool;
      goto LABEL_36;
    }
    v5 = (char *)TppPoolpGlobalPool;
  }
  if ( v5 == (char *)TppPoolpSerializedPool )
LABEL_36:
    a3 = 1;
  v7 = *(unsigned int *)(a1 + 8);
  _m_prefetchw(v5 + 428);
  v8 = *((_DWORD *)v5 + 107);
  do
  {
    if ( v8 == -2 )
    {
      v21 = v7;
      goto LABEL_33;
    }
    if ( v8 == -1 || v8 == (_DWORD)v7 )
      break;
    v21 = -1;
LABEL_33:
    v22 = v8;
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)v5 + 107, v21, v8);
  }
  while ( v22 != v8 );
  v9 = (_RTL_SRWLOCK **)(a1 + 16);
  v10 = (_RTL_SRWLOCK *)(*(_QWORD *)&v5[8 * a3 + 16] + 24 * v7);
  v11 = (volatile signed __int64 *)&v10[2];
  RtlAcquireSRWLockExclusive(v10 + 2);
  Value = (_RTL_SRWLOCK **)v10[1].Value;
  if ( *Value != v10 )
    __fastfail(3u);
  v9[1] = (_RTL_SRWLOCK *)Value;
  *v9 = v10;
  *Value = (_RTL_SRWLOCK *)v9;
  v10[1].Value = (unsigned __int64)v9;
  v13 = _InterlockedCompareExchange64(v11, 0LL, 1LL);
  if ( v13 != 1 )
  {
    do
    {
      v23 = 3LL;
      v24 = v13 & 6;
      if ( v24 != 2 )
        v23 = -1LL;
      v25 = v13 + v23;
      v26 = v13;
      v13 = _InterlockedCompareExchange64(v11, v25, v13);
    }
    while ( v26 != v13 );
    if ( v24 == 2 )
      RtlpWakeSRWLock((volatile signed __int64 *)&v10[2], v25, 0);
  }
  if ( !v5 || (v14 = *((_DWORD *)v5 + 110)) == 0 )
    v14 = MEMORY[0x7FFE03C0];
  if ( *((_DWORD *)v5 + 106) != v14 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v5 + 9);
    TppAdjustRunningThreadGoalWithLock(v5);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v5 + 9);
  }
  v15 = 0;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v17 = *ThreadPoolData;
    if ( *(char **)(v17 + 48) == v5 && *(_DWORD *)(v17 + 128) == 3 )
    {
      *(_DWORD *)(v17 + 128) = 4;
      v15 = 1;
    }
  }
  _m_prefetchw(v5 + 8);
  v18 = *((_QWORD *)v5 + 1);
  LODWORD(v28) = v18;
  do
  {
    if ( (v28 & 0xFFFF0000) != 0 || v15 )
    {
      v19 = 0;
    }
    else
    {
      LODWORD(v28) = (unsigned __int16)v28 | ((v28 & 0xFFFF0000) + 0x10000);
      v19 = 1;
    }
    v20 = v18;
    HIDWORD(v28) = HIDWORD(v18) + 1;
    v18 = _InterlockedCompareExchange64((volatile signed __int64 *)v5 + 1, v28, v18);
    LODWORD(v28) = v18;
  }
  while ( v20 != v18 );
  if ( v19 )
    LODWORD(v18) = NtReleaseWorkerFactoryWorker(*((HANDLE *)v5 + 7));
  return v18;
}
