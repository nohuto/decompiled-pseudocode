/*
 * XREFs of ExVerifySuite @ 0x1403A6B00
 * Callers:
 *     MmWriteTriageInformation @ 0x140630E1C (MmWriteTriageInformation.c)
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 *     PsLocateSystemDlls @ 0x14084D60C (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140B679E4 (ExpUpdateProductSuiteTypeInRegistry.c)
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
