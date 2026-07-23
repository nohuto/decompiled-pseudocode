/*
 * XREFs of TpReleasePool @ 0x180084E80
 * Callers:
 *     TppPoolpDereferenceGlobalPool @ 0x18002FCE0 (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpReferenceGlobalPool @ 0x180031978 (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18002FCE0 (TppPoolpDereferenceGlobalPool.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     TppPoolpFree @ 0x1800850AC (TppPoolpFree.c)
 *     ZwShutdownWorkerFactory @ 0x1800A2660 (ZwShutdownWorkerFactory.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x180125DC8 (TppRaiseInvalidParameter.c)
 *     TppETWPoolClose @ 0x180126198 (TppETWPoolClose.c)
 *     TppQueueRemoveHead @ 0x180126794 (TppQueueRemoveHead.c)
 */

void __cdecl TpReleasePool(PTP_POOL Pool)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  __int64 v10; // rcx
  int i; // edi
  __int64 j; // rsi
  __int64 v13; // rax
  void (__fastcall *v14)(__int64, PTP_POOL); // rax
  __int64 v15; // rcx
  _RTL_SRWLOCK *v16; // rdx
  const void **v17; // rcx
  _PEB_LDR_DATA *Ldr; // rcx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  char v20; // [rsp+78h] [rbp+10h]
  signed __int64 v21; // [rsp+80h] [rbp+18h]

  v20 = 0;
  if ( !Pool
    || Pool == TppPoolpGlobalPool
    || Pool == (PTP_POOL)TppPoolpSerializedPool
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter(Ldr, v1, v2);
  }
  else
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Pool + 46);
    if ( *((_BYTE *)Pool + 377) )
    {
      TppRaiseInvalidParameter(v5, v4, v6);
    }
    else
    {
      if ( !*((_BYTE *)Pool + 376) )
      {
        *((_BYTE *)Pool + 376) = 1;
        ZwShutdownWorkerFactory(*((HANDLE *)Pool + 7), (LONG *)Pool);
      }
      while ( 1 )
      {
        _m_prefetchw((char *)Pool + 8);
        v8 = *((_QWORD *)Pool + 1);
        LODWORD(v21) = v8;
        do
        {
          if ( !HIDWORD(v8) )
            break;
          HIDWORD(v21) = HIDWORD(v8) - 1;
          v9 = v8;
          v8 = _InterlockedCompareExchange64((volatile signed __int64 *)Pool + 1, v21, v8);
          LODWORD(v21) = v8;
        }
        while ( v9 != v8 );
        if ( !HIDWORD(v8) )
          break;
        v10 = 0LL;
        for ( i = 0; i < 3; ++i )
        {
          if ( v10 )
            goto LABEL_27;
          for ( j = 0LL; (unsigned int)j < TppNumberNodes && !v10; j = (unsigned int)(j + 1) )
          {
            v13 = TppQueueRemoveHead(*((_QWORD *)Pool + i + 2) + 24 * j, i, v6, v7);
            if ( v13 )
              v10 = v13 - 16;
            else
              v10 = 0LL;
          }
        }
        if ( !v10 )
          continue;
LABEL_27:
        if ( *(_QWORD *)v10 )
        {
          v14 = *(void (__fastcall **)(__int64, PTP_POOL))(*(_QWORD *)v10 + 8LL);
          if ( v14 )
            v14(v10, Pool);
        }
      }
      *((_QWORD *)Pool + 51) = retaddr;
      *((_BYTE *)Pool + 377) = 1;
      v20 = 1;
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Pool + 46);
    if ( RtlGetCurrentServiceSessionId() )
      v15 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v15 = 2147353478LL;
    if ( *(_BYTE *)v15 )
      TppETWPoolClose(Pool);
    if ( v20 )
    {
      if ( Pool == TppPoolpGlobalPool )
      {
        v16 = &TppPoolpGlobalPoolLock;
        v17 = (const void **)&TppPoolpGlobalPool;
      }
      else
      {
        if ( Pool != (PTP_POOL)TppPoolpSerializedPool )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)Pool, 0xFFFFFFFF) == 1 )
            TppPoolpFree(Pool);
          return;
        }
        v16 = &TppPoolpSerializedPoolLock;
        v17 = (const void **)&TppPoolpSerializedPool;
      }
      TppPoolpDereferenceGlobalPool(v17, v16);
    }
  }
}
