/*
 * XREFs of PopCheckTestsigningEnabled @ 0x140980860
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 *     PopDripsWatchdogTakeAction @ 0x1409A13AC (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x14041B7B0 (ZwQuerySystemInformation.c)
 */

bool PopCheckTestsigningEnabled()
{
  char v0; // bl
  ULONG v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  v3 = 8LL;
  v2 = 0;
  if ( ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v3, 8u, &v2) >= 0 )
    return (v3 & 0x200000000LL) != 0;
  return v0;
}
