/*
 * XREFs of TpWaitForWait @ 0x180070C30
 * Callers:
 *     RtlDeregisterWaitEx @ 0x180070010 (RtlDeregisterWaitEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TppWaitpValidateWait @ 0x18001E368 (TppWaitpValidateWait.c)
 *     TppCancelWait @ 0x18001EC80 (TppCancelWait.c)
 *     TppWorkWait @ 0x18001F59C (TppWorkWait.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __cdecl TpWaitForWait(PTP_WAIT Wait, LOGICAL CancelPendingCallbacks)
{
  unsigned int v3; // ebx
  char v5; // bp
  _RTL_SRWLOCK *v6; // rbx
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v7 = 0;
  v5 = 0;
  if ( (unsigned int)TppWaitpValidateWait((__int64)Wait, 0) )
  {
    if ( CancelPendingCallbacks )
    {
      v6 = (_RTL_SRWLOCK *)*((_QWORD *)Wait + 18);
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
      ++*((_BYTE *)Wait + 355);
      TppCancelWait((__int64)Wait, v6 + 14, 2, &v7);
      if ( *((_DWORD *)Wait + 14) )
        v5 = 1;
      else
        --*((_BYTE *)Wait + 355);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
      v3 = v7;
    }
    TppWorkWait(Wait, CancelPendingCallbacks);
    if ( v5 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
      --*((_BYTE *)Wait + 355);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
    }
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v3) == -v3 )
        (**((void (__fastcall ***)(PTP_WAIT))Wait + 1))(Wait);
    }
  }
}
