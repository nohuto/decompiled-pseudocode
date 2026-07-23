/*
 * XREFs of ExVerifySuite @ 0x1403735F0
 * Callers:
 *     MmWriteTriageInformation @ 0x14063093C (MmWriteTriageInformation.c)
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 *     PsLocateSystemDlls @ 0x140801B58 (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140B37414 (ExpUpdateProductSuiteTypeInRegistry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExVerifySuite(SUITE_TYPE SuiteType)
{
  int v1; // eax

  if ( SuiteType > (PhoneNT|BackOffice) )
    return 0;
  v1 = MEMORY[0xFFFFF780000002D0];
  return _bittest(&v1, SuiteType);
}
