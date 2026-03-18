/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x140382850
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403822FC (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsBranchConfusionPresent @ 0x1403827A4 (KiIsBranchConfusionPresent.c)
 *     HviGetHypervisorInterface @ 0x140382818 (HviGetHypervisorInterface.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x140383740 (HviIsHypervisorVendorMicrosoft.c)
 *     HvlPhase1Initialize @ 0x1403880A4 (HvlPhase1Initialize.c)
 *     KiIsTsaMitigationSupported @ 0x140410BB0 (KiIsTsaMitigationSupported.c)
 *     KiIsTsaPresent @ 0x140410C24 (KiIsTsaPresent.c)
 *     KiApplyProcessorErrata @ 0x140410D50 (KiApplyProcessorErrata.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x140573C18 (KiDetectAmdNonArchSsbdSupport.c)
 *     KiRestoreFeatureBits @ 0x140576690 (KiRestoreFeatureBits.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x140615414 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HvlPhase0Initialize @ 0x14081FE98 (HvlPhase0Initialize.c)
 *     KiSetFeatureBits @ 0x140A8D4C4 (KiSetFeatureBits.c)
 *     VfFilterAttach @ 0x140ADF23C (VfFilterAttach.c)
 *     KiComputeDispatchInterruptCost @ 0x140B4CBF4 (KiComputeDispatchInterruptCost.c)
 *     KeInitSystem @ 0x140B4DED4 (KeInitSystem.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140B4FF30 (InitializeDynamicPartitioningPolicy.c)
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140B748B0 (KiIntSteerDetermineSteeringEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 */

bool HviIsAnyHypervisorPresent()
{
  char v1; // r8

  _RAX = 1LL;
  v1 = 0;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX != 1986945624;
  }
  return v1;
}
