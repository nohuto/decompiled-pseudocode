/*
 * XREFs of VfDisableHalVerifier @ 0x1405CE858
 * Callers:
 *     VfAllocateCrashDumpRegisters @ 0x140AC53B0 (VfAllocateCrashDumpRegisters.c)
 *     VfAllocateCrashDumpRegistersEx @ 0x140AC5450 (VfAllocateCrashDumpRegistersEx.c)
 *     VfNotifyOfHibernate @ 0x140AC7248 (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

void VfDisableHalVerifier()
{
  ViVerifyDma = 0;
}
