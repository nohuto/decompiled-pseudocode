/*
 * XREFs of KiIntPartInit @ 0x140B4E6D0
 * Callers:
 *     KiIntSteerInit @ 0x140B4E594 (KiIntSteerInit.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140222050 (KeQueryActiveProcessorCountEx.c)
 *     IntPartCreate @ 0x140B4E724 (IntPartCreate.c)
 *     IntPartGetClassAffinityGroup @ 0x140B4E9A0 (IntPartGetClassAffinityGroup.c)
 */

__int64 KiIntPartInit()
{
  ULONG ActiveProcessorCount; // eax
  __int64 v1; // rcx
  __int64 result; // rax

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
  KiInterruptEfficiencyClassGroup = IntPartGetClassAffinityGroup(v1, ActiveProcessorCount);
  if ( !KiInterruptEfficiencyClassGroup )
    return 3221225626LL;
  result = IntPartCreate((KiInterruptSteeringFlags & 4) != 0, (KiInterruptSteeringFlags & 4) != 0);
  KiIntPartInitialized = 1;
  return result;
}
