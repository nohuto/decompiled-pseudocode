/*
 * XREFs of TpReleaseWait @ 0x180070960
 * Callers:
 *     RtlDeregisterWaitEx @ 0x180070010 (RtlDeregisterWaitEx.c)
 *     RtlpWnfRegisterTpNotification @ 0x180083A54 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180084B20 (EtwpRegisterTpNotificationOnce.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TppWaitpValidateWait @ 0x18001E368 (TppWaitpValidateWait.c)
 *     TppCancelWait @ 0x18001EC80 (TppCancelWait.c)
 *     TppCleanupGroupMemberRelease @ 0x1800214A0 (TppCleanupGroupMemberRelease.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __cdecl TpReleaseWait(PTP_WAIT Wait)
{
  int v2; // eax
  _RTL_SRWLOCK *v3; // rbx
  int v4; // ebp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)TppWaitpValidateWait((__int64)Wait, 1) )
  {
    LOBYTE(v2) = TppCleanupGroupMemberRelease((__int64)Wait, 1LL);
    if ( v2 )
    {
      v3 = (_RTL_SRWLOCK *)*((_QWORD *)Wait + 18);
      *((_QWORD *)Wait + 23) = retaddr;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
      TppCancelWait((__int64)Wait, v3 + 14, 2, &v6);
      ++*((_BYTE *)Wait + 355);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
      v4 = 1 - v6;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v6 - 1) == v4 )
        (**((void (__fastcall ***)(PTP_WAIT))Wait + 1))(Wait);
    }
  }
}
