/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x140382EA0
 * Callers:
 *     HviIsHypervisorVendorMicrosoft @ 0x140373BE0 (HviIsHypervisorVendorMicrosoft.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x14038294C (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsBranchConfusionPresent @ 0x140382DF4 (KiIsBranchConfusionPresent.c)
 *     HviGetHypervisorInterface @ 0x140382E68 (HviGetHypervisorInterface.c)
 *     HvlPhase1Initialize @ 0x1403872A4 (HvlPhase1Initialize.c)
 *     KiIsTsaMitigationSupported @ 0x140410340 (KiIsTsaMitigationSupported.c)
 *     KiIsTsaPresent @ 0x1404103B4 (KiIsTsaPresent.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x140573CB8 (KiDetectAmdNonArchSsbdSupport.c)
 *     KiRestoreFeatureBits @ 0x140576730 (KiRestoreFeatureBits.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x140615484 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HvlPhase0Initialize @ 0x1408273D8 (HvlPhase0Initialize.c)
 *     KiSetFeatureBits @ 0x140A8DD24 (KiSetFeatureBits.c)
 *     VfFilterAttach @ 0x140AE020C (VfFilterAttach.c)
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140B52464 (InitializeDynamicPartitioningPolicy.c)
 *     KeInitSystem @ 0x140B53548 (KeInitSystem.c)
 *     KiComputeDispatchInterruptCost @ 0x140B54AFC (KiComputeDispatchInterruptCost.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140B75650 (KiIntSteerDetermineSteeringEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
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
