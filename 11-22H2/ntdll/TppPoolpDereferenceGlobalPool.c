/*
 * XREFs of TppPoolpDereferenceGlobalPool @ 0x18002FCE0
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x180033198 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x1800333E4 (TppCleanupGroupMemberInitialize.c)
 *     TppWorkerThread @ 0x180035760 (TppWorkerThread.c)
 *     TpUnreserveTaskPost @ 0x18004FB90 (TpUnreserveTaskPost.c)
 *     TpDereferenceGlobalPool @ 0x18005025C (TpDereferenceGlobalPool.c)
 *     TpSetDefaultPoolStackInformation @ 0x180050B50 (TpSetDefaultPoolStackInformation.c)
 *     TpReleasePool @ 0x180084E80 (TpReleasePool.c)
 *     TpSetDefaultPoolMaxThreads @ 0x1801256C0 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     TpReleasePool @ 0x180084E80 (TpReleasePool.c)
 */

__int64 __fastcall TppPoolpDereferenceGlobalPool(const void **a1, __int64 a2)
{
  unsigned int *v4; // rcx
  __int64 result; // rax
  int v6; // edx
  int v7; // ett
  volatile signed __int32 *v8; // rcx
  signed __int32 v9; // eax
  signed __int32 v10; // edx
  signed __int32 v11; // ett
  const void *v12; // [rsp+30h] [rbp+8h]

  v12 = 0LL;
  v4 = (unsigned int *)*a1;
  _m_prefetchw(v4);
  result = *v4;
  while ( (int)result > 1 )
  {
    v6 = result - 1;
    v7 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)v4, result - 1, result);
    if ( v7 == (_DWORD)result )
      goto LABEL_4;
  }
  v6 = 0;
LABEL_4:
  if ( !v6 )
  {
    RtlAcquireSRWLockExclusive(a2);
    v8 = (volatile signed __int32 *)*a1;
    _m_prefetchw(*a1);
    v9 = *v8;
    while ( v9 > 1 )
    {
      v10 = v9 - 1;
      v11 = v9;
      v9 = _InterlockedCompareExchange(v8, v9 - 1, v9);
      if ( v11 == v9 )
        goto LABEL_12;
    }
    v10 = 0;
LABEL_12:
    if ( !v10 )
    {
      v12 = *a1;
      *a1 = 0LL;
    }
    result = RtlReleaseSRWLockExclusive(a2);
    if ( v12 )
      return TpReleasePool();
  }
  return result;
}
