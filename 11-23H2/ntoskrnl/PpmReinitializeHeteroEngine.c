/*
 * XREFs of PpmReinitializeHeteroEngine @ 0x14082F1A8
 * Callers:
 *     PpmPerfClearBootOverrides @ 0x14036D834 (PpmPerfClearBootOverrides.c)
 *     PpmHeteroHgsBackupInit @ 0x1403AC3B4 (PpmHeteroHgsBackupInit.c)
 *     PpmHeteroHgsUpdateWorker @ 0x14059E880 (PpmHeteroHgsUpdateWorker.c)
 *     PpmEnableProfile @ 0x14082BD28 (PpmEnableProfile.c)
 *     PpmCheckInitProcessors @ 0x14082E2C4 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14082E54C (PpmRegisterPerfStates.c)
 *     PopPpmHeteroPolicyCallback @ 0x140864330 (PopPpmHeteroPolicyCallback.c)
 *     PpmUpdatePerfStates @ 0x140986CC0 (PpmUpdatePerfStates.c)
 *     PpmDisableProfile @ 0x14099D184 (PpmDisableProfile.c)
 * Callees:
 *     PpmReapplyPerfPolicy @ 0x14082C6C0 (PpmReapplyPerfPolicy.c)
 */

void __fastcall PpmReinitializeHeteroEngine(char a1, char a2)
{
  int v2; // eax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
    v2 = 2048;
  else
    v2 = 4096;
  v3 = v2;
  if ( a2 )
    v3 = v2 | 0x4000;
  PpmReapplyPerfPolicy(&v3);
}
