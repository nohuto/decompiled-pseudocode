/*
 * XREFs of TpWaitForWait @ 0x18004FD20
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18004C9D0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     TppWorkWait @ 0x18002FC48 (TppWorkWait.c)
 *     TppCancelWait @ 0x180030818 (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x180031BDC (TppWaitpValidateWait.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __cdecl TpWaitForWait(PTP_WAIT Wait, LOGICAL CancelPendingCallbacks)
{
  unsigned int v3; // ebx
  char v5; // r14
  _BYTE *v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v8 = 0;
  v5 = 0;
  if ( (unsigned int)TppWaitpValidateWait((__int64)Wait, 0LL, 0LL) )
  {
    v6 = (char *)Wait + 355;
    if ( CancelPendingCallbacks )
    {
      v7 = *((_QWORD *)Wait + 18);
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
      ++*v6;
      TppCancelWait((__int64)Wait, v7 + 112, 2, &v8);
      if ( *((_DWORD *)Wait + 14) )
        v5 = 1;
      else
        --*v6;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
      v3 = v8;
    }
    TppWorkWait(Wait, CancelPendingCallbacks);
    if ( v5 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
      --*v6;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
    }
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v3) == -v3 )
        (**((void (__fastcall ***)(PTP_WAIT))Wait + 1))(Wait);
    }
  }
}
