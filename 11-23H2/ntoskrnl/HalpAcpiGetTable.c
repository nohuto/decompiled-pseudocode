/*
 * XREFs of HalpAcpiGetTable @ 0x140337280
 * Callers:
 *     HalAcpiGetTableDispatch @ 0x140337260 (HalAcpiGetTableDispatch.c)
 *     HalpInterruptParseAcpiTables @ 0x140379F1C (HalpInterruptParseAcpiTables.c)
 *     HalAcpiGetTable @ 0x140396AC0 (HalAcpiGetTable.c)
 *     HalMatchAcpiOemId @ 0x140398F70 (HalMatchAcpiOemId.c)
 *     HalMatchAcpiOemTableId @ 0x1403A1160 (HalMatchAcpiOemTableId.c)
 *     HalMatchAcpiFADTBootArch @ 0x1403A2E10 (HalMatchAcpiFADTBootArch.c)
 *     HalSocGetAcpiTable @ 0x1403A4DBC (HalSocGetAcpiTable.c)
 *     HalAcpiGetTableEx @ 0x1405012F0 (HalAcpiGetTableEx.c)
 *     HalMatchAcpiCreatorRevision @ 0x140501310 (HalMatchAcpiCreatorRevision.c)
 *     HalMatchAcpiOemRevision @ 0x140501390 (HalMatchAcpiOemRevision.c)
 *     HalMatchAcpiRevision @ 0x140501410 (HalMatchAcpiRevision.c)
 *     HalpExtGetAcpiTable @ 0x14050DEC0 (HalpExtGetAcpiTable.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B36E28 (CmpInitializeMachineDependentConfiguration.c)
 *     KsepMatchInitAcpiOemInfo @ 0x140B614DC (KsepMatchInitAcpiOemInfo.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140B61F18 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpIommuHsaDiscover @ 0x140B652F0 (HalpIommuHsaDiscover.c)
 *     HalpSetupAcpiPhase0 @ 0x140B65578 (HalpSetupAcpiPhase0.c)
 *     HalpInitBootTable @ 0x140B65A3C (HalpInitBootTable.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140B65B38 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140B65BE8 (HalpAcpiDetectMachineSpecificActions.c)
 *     HalpInitializeConfigurationFromMadt @ 0x140B65CA4 (HalpInitializeConfigurationFromMadt.c)
 *     HalpPciInitializeMmConfigAccess @ 0x140B69D74 (HalpPciInitializeMmConfigAccess.c)
 *     HalpDpInitDiscard @ 0x140B6A4B0 (HalpDpInitDiscard.c)
 *     HalpExtInitExtensions @ 0x140B6DD3C (HalpExtInitExtensions.c)
 *     CmpGetAcpiBiosVersion @ 0x140B983F0 (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     HalpAcpiGetTableWork @ 0x140337300 (HalpAcpiGetTableWork.c)
 *     HalpAcpiTableCacheInit @ 0x140B48D28 (HalpAcpiTableCacheInit.c)
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
    ExReleaseFastMutex(&HalpAcpiTableCacheLock);
  return TableWork;
}
