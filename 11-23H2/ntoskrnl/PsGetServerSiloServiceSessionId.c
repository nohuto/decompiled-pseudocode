/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x1402C0880
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x140687F00 (IoRegisterPlugPlayNotification.c)
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x1407406E0 (CmpDoesProcessBelongToServiceSession.c)
 *     SeQuerySessionIdTokenEx @ 0x140741DD0 (SeQuerySessionIdTokenEx.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077D958 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PnpNotifyTargetDeviceChange @ 0x14078335C (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x14078F280 (PnpNotifyDeviceClassChange.c)
 *     SeGetTokenDeviceMap @ 0x1407AF750 (SeGetTokenDeviceMap.c)
 *     PsIsServiceSession @ 0x1407E86CC (PsIsServiceSession.c)
 *     DbgkpSendErrorMessage @ 0x14093A27C (DbgkpSendErrorMessage.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1409568F0 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1409ADAC0 (PspTerminateSiloSubsystemProcesses.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C9360 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1409C9510 (SepCopyClientTokenAndSetSilo.c)
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
