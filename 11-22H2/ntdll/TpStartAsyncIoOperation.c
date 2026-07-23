/*
 * XREFs of TpStartAsyncIoOperation @ 0x180034CE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     TppValidateCleanupGroupMember @ 0x180034DD4 (TppValidateCleanupGroupMember.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     TppBarrierAdjust @ 0x180068030 (TppBarrierAdjust.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x1801258C0 (TppAdjustRunningThreadGoalWithLock.c)
 *     TppRaiseInvalidParameter @ 0x180125DC8 (TppRaiseInvalidParameter.c)
 */

void __cdecl TpStartAsyncIoOperation(PTP_IO Io)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  PTP_IO v3; // rbx
  __int64 v4; // rdi
  int v5; // eax

  v3 = Io;
  if ( Io
    && (unsigned int)TppValidateCleanupGroupMember(Io, 0LL)
    && *((__int64 (__fastcall ***)(PVOID))v3 + 1) == &TppIopCleanupGroupMemberVFuncs
    && (Io = (PTP_IO)NtCurrentPeb()->Ldr, *((_BYTE *)Io + 72) == (_BYTE)v1) )
  {
    TppBarrierAdjust((char *)v3 + 56, 1LL, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)v3 + 70);
    _InterlockedIncrement((volatile signed __int32 *)v3);
    v4 = *((_QWORD *)v3 + 18);
    if ( !v4 || (v5 = *(_DWORD *)(v4 + 440)) == 0 )
      v5 = MEMORY[0x7FFE03C0];
    if ( *(_DWORD *)(v4 + 424) != v5 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v4 + 72));
      TppAdjustRunningThreadGoalWithLock(v4);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v4 + 72));
    }
  }
  else
  {
    TppRaiseInvalidParameter(Io, v1, v2);
  }
}
