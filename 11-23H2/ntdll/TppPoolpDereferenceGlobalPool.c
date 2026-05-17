/*
 * XREFs of TppPoolpDereferenceGlobalPool @ 0x18002FB10
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x180033038 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x180033284 (TppCleanupGroupMemberInitialize.c)
 *     TppWorkerThread @ 0x180035600 (TppWorkerThread.c)
 *     TpUnreserveTaskPost @ 0x18004FA30 (TpUnreserveTaskPost.c)
 *     TpDereferenceGlobalPool @ 0x1800500FC (TpDereferenceGlobalPool.c)
 *     TpSetDefaultPoolStackInformation @ 0x1800509F0 (TpSetDefaultPoolStackInformation.c)
 *     TpReleasePool @ 0x180085680 (TpReleasePool.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180126B70 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     TpReleasePool @ 0x180085680 (TpReleasePool.c)
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
