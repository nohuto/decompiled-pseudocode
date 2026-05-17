/*
 * XREFs of TpReleasePool @ 0x180086DF0
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18001E58C (TppPoolpReferenceGlobalPool.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18001ED68 (TppPoolpDereferenceGlobalPool.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18001ED68 (TppPoolpDereferenceGlobalPool.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     TppPoolpFree @ 0x18008701C (TppPoolpFree.c)
 *     ZwShutdownWorkerFactory @ 0x1800A7860 (ZwShutdownWorkerFactory.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 *     TppETWPoolClose @ 0x180124758 (TppETWPoolClose.c)
 *     TppQueueRemoveHead @ 0x180124D54 (TppQueueRemoveHead.c)
 */

signed __int64 __fastcall TpReleasePool(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 v11; // rcx
  int i; // edi
  __int64 j; // rsi
  __int64 v14; // rax
  void (__fastcall *v15)(__int64, __int64); // rax
  signed __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int64 v20; // rcx
  signed __int64 *v21; // rdx
  __int64 *v22; // rcx
  __int64 v23; // rcx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  char v25; // [rsp+78h] [rbp+10h]
  signed __int64 v26; // [rsp+80h] [rbp+18h]

  v25 = 0;
  if ( !a1 || a1 == TppPoolpGlobalPool || a1 == TppPoolpSerializedPool || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    result = (signed __int64)NtCurrentPeb();
    v23 = *(_QWORD *)(result + 24);
    if ( !*(_BYTE *)(v23 + 72) )
      return TppRaiseInvalidParameter(v23, a2, a3, a4);
  }
  else
  {
    RtlAcquireSRWLockExclusive(a1 + 368, a2, a3, a4);
    if ( *(_BYTE *)(a1 + 377) )
    {
      TppRaiseInvalidParameter(v6, v5, v7, v8);
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 376) )
      {
        *(_BYTE *)(a1 + 376) = 1;
        ZwShutdownWorkerFactory(*(_QWORD *)(a1 + 56), a1);
      }
      while ( 1 )
      {
        _m_prefetchw((const void *)(a1 + 8));
        v9 = *(_QWORD *)(a1 + 8);
        LODWORD(v26) = v9;
        do
        {
          if ( !HIDWORD(v9) )
            break;
          HIDWORD(v26) = HIDWORD(v9) - 1;
          v10 = v9;
          v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v26, v9);
          LODWORD(v26) = v9;
        }
        while ( v10 != v9 );
        if ( !HIDWORD(v9) )
          break;
        v11 = 0LL;
        for ( i = 0; i < 3; ++i )
        {
          if ( v11 )
            goto LABEL_27;
          for ( j = 0LL; (unsigned int)j < TppNumberNodes && !v11; j = (unsigned int)(j + 1) )
          {
            v14 = TppQueueRemoveHead(*(_QWORD *)(a1 + 8LL * i + 16) + 24 * j, i, v7, v8);
            if ( v14 )
              v11 = v14 - 16;
            else
              v11 = 0LL;
          }
        }
        if ( !v11 )
          continue;
LABEL_27:
        if ( *(_QWORD *)v11 )
        {
          v15 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 8LL);
          if ( v15 )
            v15(v11, a1);
        }
      }
      *(_QWORD *)(a1 + 408) = retaddr;
      *(_BYTE *)(a1 + 377) = 1;
      v25 = 1;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 368));
    result = (signed __int64)RtlGetCurrentServiceSessionId();
    if ( (_DWORD)result )
    {
      result = (signed __int64)NtCurrentPeb();
      v20 = *(_QWORD *)(result + 144) + 556LL;
    }
    else
    {
      v20 = 2147353478LL;
    }
    if ( *(_BYTE *)v20 )
      result = TppETWPoolClose(a1);
    if ( v25 )
    {
      if ( a1 == TppPoolpGlobalPool )
      {
        v21 = &TppPoolpGlobalPoolLock;
        v22 = &TppPoolpGlobalPool;
      }
      else
      {
        if ( a1 != TppPoolpSerializedPool )
        {
          result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
          if ( (_DWORD)result == 1 )
            return TppPoolpFree(a1, v17);
          return result;
        }
        v21 = (signed __int64 *)&TppPoolpSerializedPoolLock;
        v22 = &TppPoolpSerializedPool;
      }
      return TppPoolpDereferenceGlobalPool((const void **)v22, (unsigned __int64)v21, v18, v19);
    }
  }
  return result;
}
