/*
 * XREFs of ExVerifySuite @ 0x1403A6920
 * Callers:
 *     MmWriteTriageInformation @ 0x1406308CC (MmWriteTriageInformation.c)
 *     NtPowerInformation @ 0x140783F20 (NtPowerInformation.c)
 *     PsLocateSystemDlls @ 0x14084D30C (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140B679E4 (ExpUpdateProductSuiteTypeInRegistry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExVerifySuite(SUITE_TYPE SuiteType)
{
  int v1; // eax

  if ( SuiteType > MaxSuiteType )
    return 0;
  v1 = MEMORY[0xFFFFF780000002D0];
  return _bittest(&v1, SuiteType);
}
