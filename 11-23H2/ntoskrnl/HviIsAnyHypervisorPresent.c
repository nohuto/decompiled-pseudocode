/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1403829F0
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x14038249C (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsBranchConfusionPresent @ 0x140382944 (KiIsBranchConfusionPresent.c)
 *     HviGetHypervisorInterface @ 0x1403829B8 (HviGetHypervisorInterface.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x140383920 (HviIsHypervisorVendorMicrosoft.c)
 *     HvlPhase1Initialize @ 0x140388284 (HvlPhase1Initialize.c)
 *     KiIsTsaMitigationSupported @ 0x140410E10 (KiIsTsaMitigationSupported.c)
 *     KiIsTsaPresent @ 0x140410E84 (KiIsTsaPresent.c)
 *     KiApplyProcessorErrata @ 0x140410F5C (KiApplyProcessorErrata.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x140574158 (KiDetectAmdNonArchSsbdSupport.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x140615964 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HvlPhase0Initialize @ 0x140820198 (HvlPhase0Initialize.c)
 *     VfFilterAttach @ 0x140ADF22C (VfFilterAttach.c)
 *     KiComputeDispatchInterruptCost @ 0x140B4CBF4 (KiComputeDispatchInterruptCost.c)
 *     KeInitSystem @ 0x140B4DED4 (KeInitSystem.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140B4FF30 (InitializeDynamicPartitioningPolicy.c)
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140B748B0 (KiIntSteerDetermineSteeringEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
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
