/*
 * XREFs of TpPostTask @ 0x18001B374
 * Callers:
 *     TppWorkPost @ 0x18001B54C (TppWorkPost.c)
 *     TppWorkCallbackPrologRelease @ 0x180022278 (TppWorkCallbackPrologRelease.c)
 *     RtlQueueWorkItem @ 0x180070160 (RtlQueueWorkItem.c)
 *     TppDirectExecuteCallback @ 0x1800821D0 (TppDirectExecuteCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1800A6F80 (NtReleaseWorkerFactoryWorker.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180123E80 (TppAdjustRunningThreadGoalWithLock.c)
 */

signed __int64 __fastcall TpPostTask(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  signed __int32 v7; // eax
  __int64 *v8; // rbx
  __int64 v9; // rsi
  __int64 **v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  int v14; // eax
  int v15; // r8d
  __int64 *ThreadPoolData; // rax
  __int64 v17; // rax
  signed __int64 result; // rax
  int v19; // edx
  signed __int64 v20; // rtt
  signed __int32 v21; // edx
  signed __int32 v22; // ett
  signed __int64 v23; // [rsp+30h] [rbp+8h]

  v4 = a2;
  if ( !a2 )
  {
    if ( a4 && (*(_BYTE *)(a4 + 56) & 2) != 0 )
    {
      v4 = TppPoolpSerializedPool;
      goto LABEL_35;
    }
    v4 = TppPoolpGlobalPool;
  }
  if ( v4 == TppPoolpSerializedPool )
LABEL_35:
    a3 = 1LL;
  v6 = *(unsigned int *)(a1 + 8);
  _m_prefetchw((const void *)(v4 + 428));
  v7 = *(_DWORD *)(v4 + 428);
  do
  {
    if ( v7 == -2 )
    {
      v21 = v6;
      goto LABEL_32;
    }
    if ( v7 == (_DWORD)v6 || v7 == -1 )
      break;
    v21 = -1;
LABEL_32:
    v22 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 428), v21, v7);
  }
  while ( v22 != v7 );
  v8 = (__int64 *)(a1 + 16);
  v9 = *(_QWORD *)(v4 + 8LL * (int)a3 + 16) + 24 * v6;
  RtlAcquireSRWLockExclusive(v9 + 16, (int)a3, a3, a4);
  v10 = *(__int64 ***)(v9 + 8);
  if ( *v10 != (__int64 *)v9 )
    __fastfail(3u);
  *v8 = v9;
  v8[1] = (__int64)v10;
  *v10 = v8;
  *(_QWORD *)(v9 + 8) = v8;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v9 + 16));
  if ( !v4 || (v14 = *(_DWORD *)(v4 + 440)) == 0 )
    v14 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(v4 + 424) != v14 )
  {
    RtlAcquireSRWLockExclusive(v4 + 72, v11, v12, v13);
    TppAdjustRunningThreadGoalWithLock(v4);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v4 + 72));
  }
  v15 = 0;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v17 = *ThreadPoolData;
    if ( *(_QWORD *)(v17 + 48) == v4 && *(_DWORD *)(v17 + 128) == 3 )
    {
      *(_DWORD *)(v17 + 128) = 4;
      v15 = 1;
    }
  }
  _m_prefetchw((const void *)(v4 + 8));
  result = *(_QWORD *)(v4 + 8);
  LODWORD(v23) = result;
  do
  {
    if ( (v23 & 0xFFFF0000) != 0 || v15 )
    {
      v19 = 0;
    }
    else
    {
      LODWORD(v23) = (unsigned __int16)v23 | ((v23 & 0xFFFF0000) + 0x10000);
      v19 = 1;
    }
    v20 = result;
    HIDWORD(v23) = HIDWORD(result) + 1;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8), v23, result);
    LODWORD(v23) = result;
  }
  while ( v20 != result );
  if ( v19 )
    return NtReleaseWorkerFactoryWorker(*(_QWORD *)(v4 + 56));
  return result;
}
