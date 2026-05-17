/*
 * XREFs of TpStartAsyncIoOperation @ 0x18001B860
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TppIopValidateIo @ 0x18001B7FC (TppIopValidateIo.c)
 *     TppBarrierAdjust @ 0x18006BAEC (TppBarrierAdjust.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180123E80 (TppAdjustRunningThreadGoalWithLock.c)
 */

signed __int64 __fastcall TpStartAsyncIoOperation(__int64 a1)
{
  signed __int64 result; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  __int64 v6; // rdi

  result = TppIopValidateIo((_PEB_LDR_DATA *)a1, 0LL, 1LL);
  if ( (_DWORD)result )
  {
    TppBarrierAdjust(a1 + 56, 1LL);
    _InterlockedAdd((volatile signed __int32 *)(a1 + 280), 1u);
    _InterlockedAdd((volatile signed __int32 *)a1, 1u);
    v6 = *(_QWORD *)(a1 + 144);
    if ( !v6 || (result = *(unsigned int *)(v6 + 440), !(_DWORD)result) )
      result = MEMORY[0x7FFE03C0];
    if ( *(_DWORD *)(v6 + 424) != (_DWORD)result )
    {
      RtlAcquireSRWLockExclusive(v6 + 72, v3, v4, v5);
      TppAdjustRunningThreadGoalWithLock(v6);
      return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 72));
    }
  }
  return result;
}
