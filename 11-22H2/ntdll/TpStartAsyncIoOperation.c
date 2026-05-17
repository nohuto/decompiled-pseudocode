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

signed __int64 __fastcall TpStartAsyncIoOperation(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4)
{
  _PEB_LDR_DATA *v4; // rbx
  _LIST_ENTRY *Blink; // rdi
  signed __int64 result; // rax

  v4 = Ldr;
  if ( !Ldr )
    return TppRaiseInvalidParameter(Ldr, a2, a3, a4);
  if ( !(unsigned int)TppValidateCleanupGroupMember(Ldr, 0LL, a3, a4) )
    return TppRaiseInvalidParameter(Ldr, a2, a3, a4);
  if ( v4->SsHandle != TppIopCleanupGroupMemberVFuncs )
    return TppRaiseInvalidParameter(Ldr, a2, a3, a4);
  Ldr = NtCurrentPeb()->Ldr;
  if ( Ldr->ShutdownInProgress != (_BYTE)a2 )
    return TppRaiseInvalidParameter(Ldr, a2, a3, a4);
  TppBarrierAdjust(&v4->InInitializationOrderModuleList.Blink, 1LL, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)&v4[3].InLoadOrderModuleList);
  _InterlockedIncrement((volatile signed __int32 *)v4);
  Blink = v4[1].InInitializationOrderModuleList.Blink;
  if ( !Blink || (result = LODWORD(Blink[27].Blink), !(_DWORD)result) )
    result = MEMORY[0x7FFE03C0];
  if ( LODWORD(Blink[26].Blink) != (_DWORD)result )
  {
    RtlAcquireSRWLockExclusive(&Blink[4].Blink);
    TppAdjustRunningThreadGoalWithLock(Blink);
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)&Blink[4].Blink);
  }
  return result;
}
