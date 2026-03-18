/*
 * XREFs of HalpAcpiGetTable @ 0x140213A40
 * Callers:
 *     HalAcpiGetTableDispatch @ 0x140213A20 (HalAcpiGetTableDispatch.c)
 *     HalMatchAcpiOemId @ 0x1403B1D20 (HalMatchAcpiOemId.c)
 *     HalAcpiGetTable @ 0x1403B8380 (HalAcpiGetTable.c)
 *     HalpInterruptParseAcpiTables @ 0x1403B85D0 (HalpInterruptParseAcpiTables.c)
 *     HalSocGetAcpiTable @ 0x1403BE664 (HalSocGetAcpiTable.c)
 *     HalMatchAcpiOemTableId @ 0x1403D24A0 (HalMatchAcpiOemTableId.c)
 *     HalMatchAcpiFADTBootArch @ 0x1403D4880 (HalMatchAcpiFADTBootArch.c)
 *     HalAcpiGetTableEx @ 0x140505310 (HalAcpiGetTableEx.c)
 *     HalMatchAcpiCreatorRevision @ 0x140505330 (HalMatchAcpiCreatorRevision.c)
 *     HalMatchAcpiOemRevision @ 0x1405053B0 (HalMatchAcpiOemRevision.c)
 *     HalMatchAcpiRevision @ 0x140505430 (HalMatchAcpiRevision.c)
 *     HalpExtGetAcpiTable @ 0x140510760 (HalpExtGetAcpiTable.c)
 *     HalpIommuHsaDiscover @ 0x140AF9490 (HalpIommuHsaDiscover.c)
 *     HalpSetupAcpiPhase0 @ 0x140AF968C (HalpSetupAcpiPhase0.c)
 *     HalpInitBootTable @ 0x140AFA228 (HalpInitBootTable.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140AFA274 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpInitializeConfigurationFromMadt @ 0x140AFA320 (HalpInitializeConfigurationFromMadt.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140AFA7A8 (HalpAcpiDetectMachineSpecificActions.c)
 *     KsepMatchInitAcpiOemInfo @ 0x140B014B0 (KsepMatchInitAcpiOemInfo.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B17304 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpGetAcpiBiosVersion @ 0x140B182A0 (CmpGetAcpiBiosVersion.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140B2388C (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpPciInitializeMmConfigAccess @ 0x140B26CFC (HalpPciInitializeMmConfigAccess.c)
 *     HalpDpInitDiscard @ 0x140B27788 (HalpDpInitDiscard.c)
 *     HalpExtInitExtensions @ 0x140B2AB30 (HalpExtInitExtensions.c)
 * Callees:
 *     HalpAcpiGetTableWork @ 0x140213AC0 (HalpAcpiGetTableWork.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     HalpAcpiTableCacheInit @ 0x140AF9A94 (HalpAcpiTableCacheInit.c)
 */

__int64 __fastcall HalpAcpiGetTable(__int64 a1, int a2, int a3, int a4)
{
  __int64 TableWork; // rdi

  if ( a1 )
  {
    if ( (int)HalpAcpiTableCacheInit() < 0 )
      return 0LL;
  }
  else
  {
    ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  }
  TableWork = HalpAcpiGetTableWork(a1, a2, a3, a4);
  if ( !a1 )
    KeReleaseGuardedMutex(&HalpAcpiTableCacheLock);
  return TableWork;
}
