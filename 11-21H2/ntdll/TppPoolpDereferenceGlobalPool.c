/*
 * XREFs of TppPoolpDereferenceGlobalPool @ 0x18001ED68
 * Callers:
 *     TppWorkerThread @ 0x180016A00 (TppWorkerThread.c)
 *     TppCleanupGroupMemberInitialize @ 0x18001B960 (TppCleanupGroupMemberInitialize.c)
 *     TppCleanupGroupMemberDestroy @ 0x18001C480 (TppCleanupGroupMemberDestroy.c)
 *     TpSetDefaultPoolStackInformation @ 0x180070D60 (TpSetDefaultPoolStackInformation.c)
 *     TpUnreserveTaskPost @ 0x180071220 (TpUnreserveTaskPost.c)
 *     TpDereferenceGlobalPool @ 0x180071288 (TpDereferenceGlobalPool.c)
 *     TpReleasePool @ 0x180086DF0 (TpReleasePool.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180123C80 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TpReleasePool @ 0x180086DF0 (TpReleasePool.c)
 */

signed __int64 __fastcall TppPoolpDereferenceGlobalPool(
        const void **a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  volatile signed __int64 *v4; // rdi
  volatile signed __int32 *v6; // r8
  signed __int32 v7; // ecx
  bool v8; // zf
  signed __int32 v9; // eax
  signed __int64 result; // rax
  volatile signed __int32 *v11; // rdx
  signed __int32 v12; // ecx
  signed __int32 v13; // r8d
  signed __int32 v14; // eax
  signed __int32 v15; // eax
  const void *v16; // [rsp+30h] [rbp+8h]

  v4 = (volatile signed __int64 *)a2;
  v16 = 0LL;
  v6 = (volatile signed __int32 *)*a1;
  _m_prefetchw(*a1);
  v7 = *v6;
  while ( v7 > 1 )
  {
    a2 = (unsigned int)v7;
    v9 = _InterlockedCompareExchange(v6, v7 - 1, v7);
    v8 = v7 == v9;
    v7 = v9;
    if ( v8 )
    {
      result = (unsigned int)(a2 - 1);
      goto LABEL_5;
    }
  }
  result = 0LL;
LABEL_5:
  if ( !(_DWORD)result )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)v4, a2, (unsigned __int64)v6, a4);
    v11 = (volatile signed __int32 *)*a1;
    _m_prefetchw(*a1);
    v12 = *v11;
    while ( v12 > 1 )
    {
      v13 = v12;
      v14 = _InterlockedCompareExchange(v11, v12 - 1, v12);
      v8 = v12 == v14;
      v12 = v14;
      if ( v8 )
      {
        v15 = v13 - 1;
        goto LABEL_13;
      }
    }
    v15 = 0;
LABEL_13:
    if ( !v15 )
    {
      v16 = *a1;
      *a1 = 0LL;
    }
    result = RtlReleaseSRWLockExclusive(v4);
    if ( v16 )
      return TpReleasePool(v16);
  }
  return result;
}
