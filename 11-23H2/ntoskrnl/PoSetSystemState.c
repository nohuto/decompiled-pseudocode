/*
 * XREFs of PoSetSystemState @ 0x14058E260
 * Callers:
 *     PoRegisterSystemState @ 0x14058E190 (PoRegisterSystemState.c)
 * Callees:
 *     PopSetSystemState @ 0x14058E40C (PopSetSystemState.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

void __stdcall PoSetSystemState(EXECUTION_STATE Flags)
{
  char v2; // bl

  v2 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    PopAcquirePolicyLock(Flags);
    v2 = 1;
  }
  PopSetSystemState(Flags, 7LL);
  if ( v2 )
    PopReleasePolicyLock();
}
