/*
 * XREFs of TpSetWaitEx @ 0x180030910
 * Callers:
 *     EtwpRegisterTpNotificationOnce @ 0x18004B900 (EtwpRegisterTpNotificationOnce.c)
 *     RtlpWnfNotificationThread @ 0x18004C860 (RtlpWnfNotificationThread.c)
 *     RtlDeregisterWaitEx @ 0x18004C9D0 (RtlDeregisterWaitEx.c)
 *     RtlRegisterWait @ 0x18004D780 (RtlRegisterWait.c)
 *     RtlpTpWaitCheckReset @ 0x18004E694 (RtlpTpWaitCheckReset.c)
 *     RtlpWnfRegisterTpNotification @ 0x180050404 (RtlpWnfRegisterTpNotification.c)
 *     EtwpNotificationThread @ 0x180061530 (EtwpNotificationThread.c)
 *     TpSetWait @ 0x180082AE0 (TpSetWait.c)
 * Callees:
 *     TppSetupNextWait @ 0x18002FEE0 (TppSetupNextWait.c)
 *     TppCancelWait @ 0x180030818 (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x180031BDC (TppWaitpValidateWait.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x180125DC8 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpSetWaitEx(PTP_WAIT Wait, HANDLE Handle, PLARGE_INTEGER Timeout, PVOID Reserved)
{
  __int64 v8; // rbx
  char v9; // al
  signed int v10; // ebx
  _BOOL8 v11; // rbp
  char v13; // al
  signed int v14; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)TppWaitpValidateWait(Wait, 0LL, Handle != 0LL) )
    return 0;
  if ( Reserved )
  {
    TppRaiseInvalidParameter();
    return 0;
  }
  v8 = *((_QWORD *)Wait + 18);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
  v9 = TppCancelWait((__int64)Wait, v8 + 112, 0, &v14);
  v10 = v14;
  v11 = v14 != 0;
  if ( Handle && !*((_BYTE *)Wait + 355) )
  {
    if ( !v9 )
    {
      v13 = *((_BYTE *)Wait + 464) | 1;
      *((_QWORD *)Wait + 47) = Handle;
      *((_BYTE *)Wait + 464) = v13;
      if ( Timeout )
      {
        *((_BYTE *)Wait + 464) = v13 | 2;
        *((LARGE_INTEGER *)Wait + 48) = *Timeout;
      }
      goto LABEL_8;
    }
    if ( !*((_QWORD *)Wait + 45) )
    {
      v10 += TppSetupNextWait((__int64)Wait, Handle, (__int64 *)Timeout);
      v14 = v10;
LABEL_8:
      if ( v10 > 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v10);
        v10 = 0;
        v14 = 0;
      }
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
  if ( v10 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v10) == -v10 )
    (**((void (__fastcall ***)(PTP_WAIT))Wait + 1))(Wait);
  return v11;
}
