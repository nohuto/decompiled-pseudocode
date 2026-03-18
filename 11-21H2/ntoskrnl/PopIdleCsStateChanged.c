/*
 * XREFs of PopIdleCsStateChanged @ 0x14099CFAC
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405D6AC0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140369100 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopGetModernStandbyTransitionReason @ 0x14039A88C (PopGetModernStandbyTransitionReason.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1405DC298 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopIdleCsStateChanged(int a1)
{
  char v1; // bl
  unsigned int ModernStandbyTransitionReason; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx

  v1 = a1;
  PopAcquirePolicyLock(a1);
  byte_140C22731 = v1;
  ModernStandbyTransitionReason = PopGetModernStandbyTransitionReason(0);
  if ( v1 )
  {
    qword_140C22738 = qword_140C54148;
    if ( !qword_140C54148 )
      qword_140C22738 = MEMORY[0xFFFFF78000000008];
    PopIdleArmAoAcDozeS4Timer();
  }
  else if ( ModernStandbyTransitionReason >= 0x1000000 || (ModernStandbyTransitionReason & 0xFFFFFF) != 6 )
  {
    PopIdleCancelAoAcDozeS4Timer(1u);
    dword_140C22710 = 0;
    qword_140C22738 = 0LL;
  }
  return PopReleasePolicyLock(v4, v3);
}
