/*
 * XREFs of RtlpWakeConditionVariable @ 0x180069BFC
 * Callers:
 *     RtlpOptimizeConditionVariableWaitList @ 0x180069918 (RtlpOptimizeConditionVariableWaitList.c)
 *     RtlpWakeSingle @ 0x18006995C (RtlpWakeSingle.c)
 *     RtlWakeConditionVariable @ 0x180069BC0 (RtlWakeConditionVariable.c)
 * Callees:
 *     RtlpQueueWaitBlockToSRWLock @ 0x180069D38 (RtlpQueueWaitBlockToSRWLock.c)
 *     ZwAlertThreadByThreadId @ 0x18009FBE0 (ZwAlertThreadByThreadId.c)
 */

int __fastcall RtlpWakeConditionVariable(volatile __int64 *a1, signed __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rbx
  int v4; // ebp
  char v5; // al
  signed __int64 v7; // r9
  unsigned int v8; // edi
  signed __int64 v9; // r10
  _QWORD *v10; // r10
  _QWORD *v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 *v13; // rcx
  unsigned __int64 *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rdi
  __int64 v17; // rdx
  _QWORD *v18; // rax
  volatile signed __int32 *v20; // [rsp+48h] [rbp+10h] BYREF

  v3 = (unsigned __int64 *)&v20;
  v20 = 0LL;
  v4 = a3;
  v5 = a2;
  v7 = a2;
  v8 = 0;
  v9 = a2;
  while ( 1 )
  {
    v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0uLL);
    v11 = v10;
    if ( (v5 & 7) == 7 )
    {
      v12 = _InterlockedExchange64(a1, 0LL) & 0xFFFFFFFFFFFFFFF0uLL;
      *v3 = v12;
      goto LABEL_11;
    }
    a3 = v4 + (unsigned int)(a2 & 7);
    while ( !v10[1] )
    {
      v18 = v10;
      v10 = (_QWORD *)*v10;
      v10[2] = v18;
    }
    v13 = (unsigned __int64 *)v10[1];
    if ( (unsigned int)a3 > v8 )
    {
      do
      {
        v14 = (unsigned __int64 *)v13[2];
        if ( !v14 )
          break;
        *v3 = (unsigned __int64)v13;
        ++v8;
        *v13 = 0LL;
        v3 = v13;
        v11[1] = v14;
        v13 = v14;
        *v14 = 0LL;
      }
      while ( (unsigned int)a3 > v8 );
      if ( (unsigned int)a3 > v8 )
        break;
    }
    v12 = _InterlockedCompareExchange64(a1, v7 & 0xFFFFFFFFFFFFFFF0uLL, a2);
    v7 = v12;
    if ( a2 == v12 )
      goto LABEL_11;
LABEL_19:
    a2 = v7;
    v9 = v7;
    v5 = v7;
  }
  v12 = _InterlockedCompareExchange64(a1, 0LL, a2);
  v7 = v12;
  if ( a2 != v12 )
    goto LABEL_19;
  *v3 = (unsigned __int64)v13;
  *v13 = 0LL;
LABEL_11:
  v15 = v20;
  if ( v20 )
  {
    do
    {
      v16 = *(volatile signed __int32 **)v15;
      if ( !_interlockedbittestandreset(v15 + 9, 1u) )
      {
        v17 = *((_QWORD *)v20 + 5);
        if ( !v17 || (LODWORD(v12) = RtlpQueueWaitBlockToSRWLock(v20, v17, a3, v7), !(_BYTE)v12) )
        {
          _InterlockedOr(v15 + 9, 4u);
          LODWORD(v12) = ZwAlertThreadByThreadId(*((HANDLE *)v20 + 3));
        }
      }
      v15 = v16;
      v20 = v16;
    }
    while ( v16 );
  }
  return v12;
}
