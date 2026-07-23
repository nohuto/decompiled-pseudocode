/*
 * XREFs of PpmReinitializeHeteroEngine @ 0x14082F4A8
 * Callers:
 *     PpmPerfClearBootOverrides @ 0x14036D9D4 (PpmPerfClearBootOverrides.c)
 *     PpmHeteroHgsBackupInit @ 0x1403AC594 (PpmHeteroHgsBackupInit.c)
 *     PpmHeteroHgsUpdateWorker @ 0x14059ED70 (PpmHeteroHgsUpdateWorker.c)
 *     PpmEnableProfile @ 0x14082C028 (PpmEnableProfile.c)
 *     PpmCheckInitProcessors @ 0x14082E5C4 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14082E84C (PpmRegisterPerfStates.c)
 *     PopPpmHeteroPolicyCallback @ 0x140864570 (PopPpmHeteroPolicyCallback.c)
 *     PpmUpdatePerfStates @ 0x140986EC0 (PpmUpdatePerfStates.c)
 *     PpmDisableProfile @ 0x14099D384 (PpmDisableProfile.c)
 * Callees:
 *     PpmReapplyPerfPolicy @ 0x14082C9C0 (PpmReapplyPerfPolicy.c)
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
