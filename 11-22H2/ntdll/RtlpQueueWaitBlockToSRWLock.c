/*
 * XREFs of RtlpQueueWaitBlockToSRWLock @ 0x180069D38
 * Callers:
 *     RtlpWakeConditionVariable @ 0x180069BFC (RtlpWakeConditionVariable.c)
 * Callees:
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x180069E18 (RtlpOptimizeSRWLockList.c)
 */

bool __fastcall RtlpQueueWaitBlockToSRWLock(__int64 a1, unsigned __int64 *a2)
{
  _BOOL8 v2; // r10
  unsigned __int64 v3; // rax
  char v4; // di
  volatile signed __int64 *v5; // r11
  bool v8; // r8
  __int64 v9; // rdx
  signed __int64 v10; // rdx
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = *a2;
  v4 = *(_DWORD *)(a1 + 36) & 1;
  v11 = 0;
  v5 = (volatile signed __int64 *)a2;
  while ( (v3 & 1) != 0 && (v4 || (v3 & 2) != 0 || (v3 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
  {
    *(_QWORD *)(a1 + 16) = v2;
    v8 = v2;
    if ( (v3 & 2) != 0 )
    {
      *(_DWORD *)(a1 + 32) = -1;
      *(_QWORD *)(a1 + 8) = v2;
      *(_QWORD *)a1 = v3 & 0xFFFFFFFFFFFFFFF0uLL;
      v10 = a1 | v3 & 8 | 7;
      v8 = (v3 & 4) == 0;
    }
    else
    {
      v9 = 11LL;
      *(_QWORD *)(a1 + 8) = a1;
      *(_DWORD *)(a1 + 32) = v3 >> 4;
      if ( (int)(v3 >> 4) <= 1 )
        v9 = 3LL;
      v10 = a1 | v9;
      if ( !(unsigned int)(v3 >> 4) )
        *(_DWORD *)(a1 + 32) = -2;
    }
    if ( v3 == _InterlockedCompareExchange64(v5, v10, v3) )
    {
      if ( v8 )
        RtlpOptimizeSRWLockList(v5);
      LOBYTE(v2) = 1;
      return v2;
    }
    RtlBackoff(&v11);
    _m_prefetchw((const void *)v5);
    v3 = *v5;
  }
  return v2;
}
