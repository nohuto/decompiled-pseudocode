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
 *     TpSetDefaultPoolMaxThreads @ 0x180126B40 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     TpReleasePool @ 0x180085680 (TpReleasePool.c)
 */

void __fastcall TppPoolpDereferenceGlobalPool(const void **a1, _RTL_SRWLOCK *a2)
{
  signed __int32 *v4; // rcx
  signed __int32 v5; // eax
  signed __int32 v6; // edx
  signed __int32 v7; // ett
  volatile signed __int32 *v8; // rcx
  signed __int32 v9; // eax
  signed __int32 v10; // edx
  signed __int32 v11; // ett
  _TP_POOL *Pool; // [rsp+30h] [rbp+8h]

  Pool = 0LL;
  v4 = (signed __int32 *)*a1;
  _m_prefetchw(v4);
  v5 = *v4;
  while ( v5 > 1 )
  {
    v6 = v5 - 1;
    v7 = v5;
    v5 = _InterlockedCompareExchange(v4, v5 - 1, v5);
    if ( v7 == v5 )
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
      Pool = (_TP_POOL *)*a1;
      *a1 = 0LL;
    }
    RtlReleaseSRWLockExclusive(a2);
    if ( Pool )
      TpReleasePool(Pool);
  }
}
