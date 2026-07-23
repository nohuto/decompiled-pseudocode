/*
 * XREFs of VfSettingsMiscellaneousChecksInitPhase1 @ 0x140ADAEA8
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140AC2D08 (VfInitSystemNoRebootNeeded.c)
 *     ViInitSystemPhase1 @ 0x140B532E4 (ViInitSystemPhase1.c)
 * Callees:
 *     ViSettingsEnableKernelHandleChecking @ 0x140ADAEDC (ViSettingsEnableKernelHandleChecking.c)
 */

__int64 VfSettingsMiscellaneousChecksInitPhase1()
{
  __int64 result; // rax

  if ( (MmVerifierData & 0x800) != 0 && (VfRuleClasses & 0x400000) == 0 )
    return ViSettingsEnableKernelHandleChecking(1LL);
  return result;
}
