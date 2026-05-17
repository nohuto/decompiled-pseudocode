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

signed __int64 __fastcall TpPostTask(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // r8
  signed __int32 v8; // eax
  __int64 *v9; // rsi
  __int64 v10; // rbp
  volatile signed __int64 *v11; // rbx
  __int64 **v12; // rax
  signed __int64 v13; // rax
  int v14; // eax
  __int64 v15; // r8
  __int64 *ThreadPoolData; // rax
  __int64 v17; // rax
  signed __int64 result; // rax
  __int64 v19; // rdx
  signed __int64 v20; // rtt
  signed __int32 v21; // ecx
  signed __int32 v22; // ett
  __int64 v23; // rdx
  signed __int64 v24; // rcx
  signed __int64 v25; // rdx
  signed __int64 v26; // rtt
  signed __int64 v27; // [rsp+40h] [rbp+8h]

  v5 = a2;
  if ( !a2 )
  {
    if ( a4 && (*(_BYTE *)(a4 + 56) & 2) != 0 )
    {
      v5 = TppPoolpSerializedPool;
      goto LABEL_36;
    }
    v5 = TppPoolpGlobalPool;
  }
  if ( v5 == TppPoolpSerializedPool )
LABEL_36:
    a3 = 1;
  v7 = *(unsigned int *)(a1 + 8);
  _m_prefetchw((const void *)(v5 + 428));
  v8 = *(_DWORD *)(v5 + 428);
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
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 428), v21, v8);
  }
  while ( v22 != v8 );
  v9 = (__int64 *)(a1 + 16);
  v10 = *(_QWORD *)(v5 + 8LL * a3 + 16) + 24 * v7;
  v11 = (volatile signed __int64 *)(v10 + 16);
  RtlAcquireSRWLockExclusive(v10 + 16);
  v12 = *(__int64 ***)(v10 + 8);
  if ( *v12 != (__int64 *)v10 )
    __fastfail(3u);
  v9[1] = (__int64)v12;
  *v9 = v10;
  *v12 = v9;
  *(_QWORD *)(v10 + 8) = v9;
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
      RtlpWakeSRWLock((volatile signed __int64 *)(v10 + 16), v25, 0);
  }
  if ( !v5 || (v14 = *(_DWORD *)(v5 + 440)) == 0 )
    v14 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(v5 + 424) != v14 )
  {
    RtlAcquireSRWLockExclusive(v5 + 72);
    TppAdjustRunningThreadGoalWithLock(v5);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v5 + 72));
  }
  v15 = 0LL;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v17 = *ThreadPoolData;
    if ( *(_QWORD *)(v17 + 48) == v5 && *(_DWORD *)(v17 + 128) == 3 )
    {
      *(_DWORD *)(v17 + 128) = 4;
      v15 = 1LL;
    }
  }
  _m_prefetchw((const void *)(v5 + 8));
  result = *(_QWORD *)(v5 + 8);
  LODWORD(v27) = result;
  do
  {
    if ( (v27 & 0xFFFF0000) != 0 || (_DWORD)v15 )
    {
      v19 = 0LL;
    }
    else
    {
      LODWORD(v27) = (unsigned __int16)v27 | ((v27 & 0xFFFF0000) + 0x10000);
      v19 = 1LL;
    }
    v20 = result;
    HIDWORD(v27) = HIDWORD(result) + 1;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 8), v27, result);
    LODWORD(v27) = result;
  }
  while ( v20 != result );
  if ( (_DWORD)v19 )
    return NtReleaseWorkerFactoryWorker(*(_QWORD *)(v5 + 56), v19, v15, 4294901760LL);
  return result;
}
