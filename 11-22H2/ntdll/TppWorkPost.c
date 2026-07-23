/*
 * XREFs of TppWorkPost @ 0x180035318
 * Callers:
 *     TppSingleTimerExpiration @ 0x180030F5C (TppSingleTimerExpiration.c)
 *     TpSimpleTryPost @ 0x180033060 (TpSimpleTryPost.c)
 *     TpPostWork @ 0x180034D80 (TpPostWork.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     TpPostTask @ 0x18003545C (TpPostTask.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     TppIteWakeWaiters @ 0x1800681B0 (TppIteWakeWaiters.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackEnqueue @ 0x180125FC4 (RtlpTpETWCallbackEnqueue.c)
 */

__int64 __fastcall TppWorkPost(__int64 a1)
{
  char v2; // bp
  signed __int64 v3; // rbx
  signed __int64 v4; // rdi
  signed __int64 v5; // rbx
  __int64 result; // rax
  int v7; // edx
  int v8; // ett
  _DWORD *SharedData; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx

  v2 = 0;
  _m_prefetchw((const void *)(a1 + 56));
  v3 = *(_QWORD *)(a1 + 56);
  do
  {
    if ( v2 )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
      v2 = 0;
    }
    v4 = v3;
    v5 = (v3 ^ (v3 + 1)) & 0xFFFFFFFFFFFFFFFLL ^ v3;
    if ( v4 < 0 && (v5 & 0xFFFFFFFFFFFFFFFLL) == 0 )
    {
      v5 &= ~0x8000000000000000uLL;
      v2 = 1;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    }
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), v5, v4);
  }
  while ( v4 != v3 );
  if ( v2 )
  {
    v11 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 0LL;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    TppIteWakeWaiters(v11);
  }
  _m_prefetchw((const void *)(a1 + 232));
  LODWORD(result) = *(_DWORD *)(a1 + 232);
  do
  {
    v7 = result & 1;
    v8 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(a1 + 232),
                             (result + 2) & 0xFFFFFFFE,
                             result);
  }
  while ( v8 != (_DWORD)result );
  if ( v7 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a1, 2u);
    *(_QWORD *)(a1 + 128) = *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v10 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v10 = 2147353478LL;
    if ( *(_BYTE *)v10 )
      RtlpTpETWCallbackEnqueue(
        *(_QWORD *)(a1 + 144),
        a1 + 200,
        *(_QWORD *)(a1 + 80),
        *(_QWORD *)(a1 + 88),
        *(_QWORD *)(a1 + 104));
    TpPostTask(a1 + 200, *(_QWORD *)(a1 + 144), *(unsigned int *)(a1 + 192), 0LL);
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return result;
}
