/*
 * XREFs of TpReleaseWait @ 0x18004DB60
 * Callers:
 *     EtwpRegisterTpNotificationOnce @ 0x18004B7A0 (EtwpRegisterTpNotificationOnce.c)
 *     RtlDeregisterWaitEx @ 0x18004C870 (RtlDeregisterWaitEx.c)
 *     RtlpWnfRegisterTpNotification @ 0x1800502A4 (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     TppCancelWait @ 0x180030648 (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x180031A7C (TppWaitpValidateWait.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     TppCleanupGroupMemberRelease @ 0x18004EEE0 (TppCleanupGroupMemberRelease.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TpReleaseWait(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  int v4; // ebp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+30h] [rbp+8h] BYREF

  result = TppWaitpValidateWait(a1, 1LL, 0LL);
  if ( (_DWORD)result )
  {
    result = TppCleanupGroupMemberRelease(a1, 1LL);
    if ( (_DWORD)result )
    {
      v3 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(a1 + 184) = retaddr;
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
      TppCancelWait(a1, v3 + 112, 2, &v6);
      ++*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
      v4 = 1 - v6;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, v6 - 1);
      if ( (_DWORD)result == v4 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
