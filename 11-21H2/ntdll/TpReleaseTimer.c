/*
 * XREFs of TpReleaseTimer @ 0x180070A70
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x18006F8B0 (RtlDeleteTimerQueueEx.c)
 *     RtlDeleteTimer @ 0x18006FC50 (RtlDeleteTimer.c)
 *     RtlpInitializeWnf @ 0x180083980 (RtlpInitializeWnf.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     TppTimerpValidateTimer @ 0x18001B710 (TppTimerpValidateTimer.c)
 *     TppCancelTimer @ 0x18001C7D8 (TppCancelTimer.c)
 *     TppCleanupGroupMemberRelease @ 0x1800214A0 (TppCleanupGroupMemberRelease.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall TpReleaseTimer(__int64 a1)
{
  int v2; // edi
  signed __int32 v3; // eax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  v3 = TppTimerpValidateTimer((_PEB_LDR_DATA *)a1, 1LL, 0LL);
  if ( v3 )
  {
    LOBYTE(v3) = TppCleanupGroupMemberRelease(a1, 1LL);
    if ( v3 )
    {
      *(_QWORD *)(a1 + 184) = retaddr;
      RtlAcquireSRWLockExclusive(a1 + 240, v4, v5, v6);
      v7 = *(_QWORD *)(a1 + 144);
      ++*(_BYTE *)(a1 + 355);
      if ( TppCancelTimer(a1, (volatile signed __int64 *)(v7 + 112), 0) )
        v2 = 2;
      v3 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, -v2);
      if ( v3 == v2 )
        LOBYTE(v3) = (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return v3;
}
