/*
 * XREFs of PpmReinitializeHeteroEngine @ 0x140848BE8
 * Callers:
 *     PpmPerfClearBootOverrides @ 0x140225D70 (PpmPerfClearBootOverrides.c)
 *     PpmHeteroHgsBackupInit @ 0x1403DC9D4 (PpmHeteroHgsBackupInit.c)
 *     PpmHeteroHgsUpdateWorker @ 0x1405D90F0 (PpmHeteroHgsUpdateWorker.c)
 *     PpmEnableProfile @ 0x14083113C (PpmEnableProfile.c)
 *     PpmRegisterPerfStates @ 0x140848C18 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140849690 (PpmCheckInitProcessors.c)
 *     PopPpmHeteroPolicyCallback @ 0x140863A40 (PopPpmHeteroPolicyCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x140864980 (PopSetupHighPerfPowerRequest.c)
 *     PpmUpdatePerfStates @ 0x14098EE60 (PpmUpdatePerfStates.c)
 *     PpmDisableProfile @ 0x14099D66C (PpmDisableProfile.c)
 * Callees:
 *     PpmReapplyPerfPolicy @ 0x140849940 (PpmReapplyPerfPolicy.c)
 */

__int64 __fastcall PpmReinitializeHeteroEngine(char a1)
{
  int v1; // eax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
    v1 = 2048;
  else
    v1 = 4096;
  v3 = v1;
  return PpmReapplyPerfPolicy(&v3);
}
