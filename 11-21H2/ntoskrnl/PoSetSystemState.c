/*
 * XREFs of PoSetSystemState @ 0x1405CFE90
 * Callers:
 *     PoRegisterSystemState @ 0x140201CD0 (PoRegisterSystemState.c)
 * Callees:
 *     PopSetSystemState @ 0x140368E90 (PopSetSystemState.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

void __stdcall PoSetSystemState(EXECUTION_STATE Flags)
{
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    PopAcquirePolicyLock(Flags);
    v2 = 1;
  }
  PopSetSystemState(Flags, 7u);
  if ( v2 )
    PopReleasePolicyLock(v4, v3);
}
