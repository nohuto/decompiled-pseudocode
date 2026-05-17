/*
 * XREFs of TpReleaseTimer @ 0x18004E360
 * Callers:
 *     RtlDeleteTimer @ 0x18004D210 (RtlDeleteTimer.c)
 *     RtlpInitializeWnf @ 0x1800501D0 (RtlpInitializeWnf.c)
 *     RtlDeleteTimerQueueEx @ 0x180051CC0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     TppCancelTimer @ 0x180032B28 (TppCancelTimer.c)
 *     TppTimerpValidateTimer @ 0x1800349B8 (TppTimerpValidateTimer.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     TppCleanupGroupMemberRelease @ 0x18004EEE0 (TppCleanupGroupMemberRelease.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TpReleaseTimer(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  result = TppTimerpValidateTimer((_PEB_LDR_DATA *)a1, 1LL, 0LL);
  if ( (_DWORD)result )
  {
    result = TppCleanupGroupMemberRelease(a1, 1LL);
    if ( (_DWORD)result )
    {
      *(_QWORD *)(a1 + 184) = retaddr;
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
      v4 = *(_QWORD *)(a1 + 144);
      ++*(_BYTE *)(a1 + 355);
      if ( TppCancelTimer(a1, v4 + 112, 0LL, v5) )
        v2 = 2;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, -v2);
      if ( (_DWORD)result == v2 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
