/*
 * XREFs of TpReleaseWait @ 0x18004DCC0
 * Callers:
 *     EtwpRegisterTpNotificationOnce @ 0x18004B900 (EtwpRegisterTpNotificationOnce.c)
 *     RtlDeregisterWaitEx @ 0x18004C9D0 (RtlDeregisterWaitEx.c)
 *     RtlpWnfRegisterTpNotification @ 0x180050404 (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     TppCancelWait @ 0x180030818 (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x180031BDC (TppWaitpValidateWait.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     TppCleanupGroupMemberRelease @ 0x18004F040 (TppCleanupGroupMemberRelease.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __cdecl TpReleaseWait(PTP_WAIT Wait)
{
  __int64 v2; // rbx
  int v3; // ebp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)TppWaitpValidateWait((__int64)Wait, 1LL, 0LL)
    && (unsigned int)TppCleanupGroupMemberRelease(Wait, 1LL) )
  {
    v2 = *((_QWORD *)Wait + 18);
    *((_QWORD *)Wait + 23) = retaddr;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
    TppCancelWait((__int64)Wait, v2 + 112, 2, &v5);
    ++*((_BYTE *)Wait + 355);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
    v3 = 1 - v5;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v5 - 1) == v3 )
      (**((void (__fastcall ***)(PTP_WAIT))Wait + 1))(Wait);
  }
}
