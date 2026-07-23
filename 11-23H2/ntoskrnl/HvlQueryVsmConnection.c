/*
 * XREFs of HvlQueryVsmConnection @ 0x140340618
 * Callers:
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     VslGetNestedPageProtectionFlags @ 0x1403405B0 (VslGetNestedPageProtectionFlags.c)
 *     VslGetSecureSpeculationControlInformation @ 0x140388334 (VslGetSecureSpeculationControlInformation.c)
 *     VslGetSecurePciEnabled @ 0x1403B6720 (VslGetSecurePciEnabled.c)
 *     VslConfigureDynamicMemory @ 0x14054B384 (VslConfigureDynamicMemory.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14054B990 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciDeviceBootConfiguration @ 0x14054BA30 (VslGetSecurePciDeviceBootConfiguration.c)
 *     VslMakeProtectedPageWritable @ 0x14054C348 (VslMakeProtectedPageWritable.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14054C524 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x14054C6D0 (VslRegisterLogPages.c)
 *     MmSnapTriageDumpInformation @ 0x140630CFC (MmSnapTriageDumpInformation.c)
 *     VslRelaxQuotas @ 0x140943008 (VslRelaxQuotas.c)
 *     KiSwInterruptPresent @ 0x140B679C0 (KiSwInterruptPresent.c)
 *     VslConnectSwInterrupt @ 0x140B728D4 (VslConnectSwInterrupt.c)
 *     VslRegisterBootDrivers @ 0x140B729B8 (VslRegisterBootDrivers.c)
 *     VslpIumPhase0Initialize @ 0x140B935CC (VslpIumPhase0Initialize.c)
 * Callees:
 *     <none>
 */

char __fastcall HvlQueryVsmConnection(_QWORD *a1)
{
  char result; // al

  result = HvlpVsmVtlCallVa;
  if ( *(_QWORD *)&HvlpVsmVtlCallVa )
  {
    if ( a1 )
      *a1 = *(_QWORD *)&HvlpVsmVtlCallVa;
    return 1;
  }
  return result;
}
