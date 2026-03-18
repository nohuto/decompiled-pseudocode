/*
 * XREFs of PopCheckpointSystemSleepUnsafe @ 0x140AAA6B4
 * Callers:
 *     PopEnableSystemSleepCheckpoint @ 0x140996E9C (PopEnableSystemSleepCheckpoint.c)
 *     PopCheckpointSystemSleep @ 0x140AAA5A8 (PopCheckpointSystemSleep.c)
 * Callees:
 *     HalSetEnvironmentVariableEx @ 0x140504B70 (HalSetEnvironmentVariableEx.c)
 *     VslReportBugCheckProgress @ 0x14054C380 (VslReportBugCheckProgress.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1409FBA50 (ExSetFirmwareEnvironmentVariable.c)
 */

__int64 __fastcall PopCheckpointSystemSleepUnsafe(char a1)
{
  char v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  if ( !PoAllProcIntrDisabled )
    return ExSetFirmwareEnvironmentVariable(
             (const void **)L"*,",
             (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
             (__int64)&v2,
             1,
             1);
  if ( PopCheckpointEfiRuntimeRedirected )
    return VslReportBugCheckProgress(
             (char *)L"SystemSleepCheckpoint",
             (__int128 *)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
             &v2,
             1u,
             1);
  return HalSetEnvironmentVariableEx(
           L"SystemSleepCheckpoint",
           (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
           (__int64)&v2,
           1,
           1);
}
