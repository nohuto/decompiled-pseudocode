/*
 * XREFs of TpSetWaitEx @ 0x18001EB80
 * Callers:
 *     EtwpNotificationThread @ 0x1800073C0 (EtwpNotificationThread.c)
 *     TpSetWait @ 0x18001FB60 (TpSetWait.c)
 *     RtlpWnfNotificationThread @ 0x18005A6A0 (RtlpWnfNotificationThread.c)
 *     RtlDeregisterWaitEx @ 0x180070010 (RtlDeregisterWaitEx.c)
 *     RtlRegisterWait @ 0x180070540 (RtlRegisterWait.c)
 *     RtlpTpWaitCheckReset @ 0x18007F164 (RtlpTpWaitCheckReset.c)
 *     RtlpWnfRegisterTpNotification @ 0x180083A54 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180084B20 (EtwpRegisterTpNotificationOnce.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TppWaitpValidateWait @ 0x18001E368 (TppWaitpValidateWait.c)
 *     TppCancelWait @ 0x18001EC80 (TppCancelWait.c)
 *     TppSetupNextWait @ 0x18001F61C (TppSetupNextWait.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpSetWaitEx(PTP_WAIT Wait, HANDLE Handle, PLARGE_INTEGER Timeout, PVOID Reserved)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  char v12; // al
  signed int v13; // ebx
  _BOOL8 v14; // rbp
  char v16; // al
  signed int v17; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)TppWaitpValidateWait((__int64)Wait, 0) )
    return 0;
  if ( Reserved )
  {
    TppRaiseInvalidParameter(v9, v8, v10);
    return 0;
  }
  v11 = *((_QWORD *)Wait + 18);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
  v12 = TppCancelWait(Wait, v11 + 112, 0LL, &v17);
  v13 = v17;
  v14 = v17 != 0;
  if ( Handle && !*((_BYTE *)Wait + 355) )
  {
    if ( !v12 )
    {
      v16 = *((_BYTE *)Wait + 464) | 1;
      *((_QWORD *)Wait + 47) = Handle;
      *((_BYTE *)Wait + 464) = v16;
      if ( Timeout )
      {
        *((_BYTE *)Wait + 464) = v16 | 2;
        *((LARGE_INTEGER *)Wait + 48) = *Timeout;
      }
      goto LABEL_8;
    }
    if ( !*((_QWORD *)Wait + 45) )
    {
      v13 += TppSetupNextWait(Wait, Handle, Timeout);
      v17 = v13;
LABEL_8:
      if ( v13 > 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v13);
        v13 = 0;
        v17 = 0;
      }
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
  if ( v13 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v13) == -v13 )
    (**((void (__fastcall ***)(PTP_WAIT))Wait + 1))(Wait);
  return v14;
}
