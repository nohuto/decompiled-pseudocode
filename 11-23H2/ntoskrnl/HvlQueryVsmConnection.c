/*
 * XREFs of HvlQueryVsmConnection @ 0x140340388
 * Callers:
 *     VslpEnterIumSecureMode @ 0x14033FCF0 (VslpEnterIumSecureMode.c)
 *     VslGetNestedPageProtectionFlags @ 0x140340320 (VslGetNestedPageProtectionFlags.c)
 *     VslGetSecureSpeculationControlInformation @ 0x140388154 (VslGetSecureSpeculationControlInformation.c)
 *     VslGetSecurePciEnabled @ 0x1403B6540 (VslGetSecurePciEnabled.c)
 *     VslConfigureDynamicMemory @ 0x14054ACC4 (VslConfigureDynamicMemory.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14054B2D0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciDeviceBootConfiguration @ 0x14054B370 (VslGetSecurePciDeviceBootConfiguration.c)
 *     VslMakeProtectedPageWritable @ 0x14054BC88 (VslMakeProtectedPageWritable.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14054BE64 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x14054C010 (VslRegisterLogPages.c)
 *     MmSnapTriageDumpInformation @ 0x1406307AC (MmSnapTriageDumpInformation.c)
 *     VslRelaxQuotas @ 0x140942E08 (VslRelaxQuotas.c)
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
