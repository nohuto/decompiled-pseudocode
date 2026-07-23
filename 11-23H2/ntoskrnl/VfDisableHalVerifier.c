/*
 * XREFs of VfDisableHalVerifier @ 0x1405CEDC8
 * Callers:
 *     VfAllocateCrashDumpRegisters @ 0x140AC53A0 (VfAllocateCrashDumpRegisters.c)
 *     VfAllocateCrashDumpRegistersEx @ 0x140AC5440 (VfAllocateCrashDumpRegistersEx.c)
 *     VfNotifyOfHibernate @ 0x140AC7238 (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

void VfDisableHalVerifier()
{
  ViVerifyDma = 0;
}
