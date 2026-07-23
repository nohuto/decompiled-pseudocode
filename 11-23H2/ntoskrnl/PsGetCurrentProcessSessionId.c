/*
 * XREFs of PsGetCurrentProcessSessionId @ 0x1402A2070
 * Callers:
 *     PnpNotifyDriverCallback @ 0x140687B60 (PnpNotifyDriverCallback.c)
 *     NtSetInformationObject @ 0x140697640 (NtSetInformationObject.c)
 *     ObpLookupObjectName @ 0x1406ED750 (ObpLookupObjectName.c)
 *     EtwpWriteUserEvent @ 0x1406F4170 (EtwpWriteUserEvent.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     PfpProcessScenarioPhase @ 0x1407D3920 (PfpProcessScenarioPhase.c)
 *     IoGetContainerInformation @ 0x140948350 (IoGetContainerInformation.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 */

__int64 PsGetCurrentProcessSessionId()
{
  unsigned int SessionId; // ecx
  __int64 result; // rax

  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  result = 0LL;
  if ( SessionId != -1 )
    return SessionId;
  return result;
}
