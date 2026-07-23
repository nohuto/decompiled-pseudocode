/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x1402C0B10
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x140687F00 (IoRegisterPlugPlayNotification.c)
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x1407408D0 (CmpDoesProcessBelongToServiceSession.c)
 *     SeQuerySessionIdTokenEx @ 0x140741FC0 (SeQuerySessionIdTokenEx.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077DB48 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PnpNotifyTargetDeviceChange @ 0x14078354C (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x14078F470 (PnpNotifyDeviceClassChange.c)
 *     SeGetTokenDeviceMap @ 0x1407AF940 (SeGetTokenDeviceMap.c)
 *     PsIsServiceSession @ 0x1407E899C (PsIsServiceSession.c)
 *     DbgkpSendErrorMessage @ 0x14093A47C (DbgkpSendErrorMessage.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x140956AF0 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1409ADCC0 (PspTerminateSiloSubsystemProcesses.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C9560 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1409C9710 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloServiceSessionId(__int64 a1)
{
  unsigned int **v1; // rax

  v1 = (unsigned int **)&PspHostSiloGlobals;
  if ( a1 )
    v1 = *(unsigned int ***)(a1 + 1488);
  return *v1[165];
}
