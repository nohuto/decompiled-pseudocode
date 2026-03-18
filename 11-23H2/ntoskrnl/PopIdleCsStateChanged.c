/*
 * XREFs of PopIdleCsStateChanged @ 0x14099BE3C
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405997B0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14032EFC0 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopGetModernStandbyTransitionReason @ 0x1403C84BC (PopGetModernStandbyTransitionReason.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14059E178 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopIdleCsStateChanged(int a1)
{
  char v1; // bl
  unsigned int ModernStandbyTransitionReason; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  v1 = a1;
  PopAcquirePolicyLock(a1);
  byte_140C3CD51 = v1;
  ModernStandbyTransitionReason = PopGetModernStandbyTransitionReason(0);
  if ( v1 )
  {
    qword_140C3CD58 = qword_140CF7C08;
    if ( !qword_140CF7C08 )
      qword_140C3CD58 = MEMORY[0xFFFFF78000000008];
    PopIdleArmAoAcDozeS4Timer();
  }
  else if ( ModernStandbyTransitionReason >= 0x1000000 || (ModernStandbyTransitionReason & 0xFFFFFF) != 6 )
  {
    PopIdleCancelAoAcDozeS4Timer(1u);
    dword_140C3CD30 = 0;
    qword_140C3CD58 = 0LL;
  }
  return PopReleasePolicyLock(v4, v3, v5);
}
