/*
 * XREFs of PsGetCurrentServerSilo @ 0x14028A220
 * Callers:
 *     MmIsSessionInCurrentServerSilo @ 0x140201A78 (MmIsSessionInCurrentServerSilo.c)
 *     EtwpTraceFileName @ 0x140213550 (EtwpTraceFileName.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     MmGetSessionById @ 0x1402C20C0 (MmGetSessionById.c)
 *     RtlGetNtProductType @ 0x1402F81D0 (RtlGetNtProductType.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x14030C670 (RtlpUpcaseUnicodeStringPrivate.c)
 *     ExLocalTimeToSystemTime @ 0x14033B530 (ExLocalTimeToSystemTime.c)
 *     ExSystemTimeToLocalTime @ 0x14033B580 (ExSystemTimeToLocalTime.c)
 *     RtlGetSystemGlobalData @ 0x140341780 (RtlGetSystemGlobalData.c)
 *     RtlSetSystemGlobalData @ 0x14035C1C0 (RtlSetSystemGlobalData.c)
 *     RtlGetActiveConsoleId @ 0x14035EE60 (RtlGetActiveConsoleId.c)
 *     MiGetNextSession @ 0x14035EEA8 (MiGetNextSession.c)
 *     RtlGetCurrentServiceSessionId @ 0x14036E610 (RtlGetCurrentServiceSessionId.c)
 *     SepAdtLogAuditRecord @ 0x14039B960 (SepAdtLogAuditRecord.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1403A5C0C (UpcaseUnicodeToUTF8NHelper.c)
 *     ExLogTimeZoneInformation @ 0x1403B0D00 (ExLogTimeZoneInformation.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x140463FC4 (UpcaseUnicodeToMultiByteNHelper.c)
 *     IopCheckSessionDeviceAccess @ 0x140557CE8 (IopCheckSessionDeviceAccess.c)
 *     PerfInfoLogSysCallEntry @ 0x1405FF130 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405FF1C0 (PerfInfoLogSysCallExit.c)
 *     PopTransitionCheckpoint @ 0x1406825AC (PopTransitionCheckpoint.c)
 *     SepBlockAccessForLogonSession @ 0x140682C9C (SepBlockAccessForLogonSession.c)
 *     IoRegisterPlugPlayNotification @ 0x140687F00 (IoRegisterPlugPlayNotification.c)
 *     SepIsMinTCB @ 0x1406B9BCC (SepIsMinTCB.c)
 *     EtwpStartLogger @ 0x1406BBFE0 (EtwpStartLogger.c)
 *     PsLookupProcessByProcessId @ 0x1406FA580 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1406FB120 (PsLookupThreadByThreadId.c)
 *     ExpWnfGenerateStateName @ 0x140711768 (ExpWnfGenerateStateName.c)
 *     SeCreateClientSecurityEx @ 0x14071D3B0 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x14071DAF0 (SepCreateClientSecurityEx.c)
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     ExpGetProcessInformation @ 0x140742FB0 (ExpGetProcessInformation.c)
 *     SepDeleteLogonSessionTrack @ 0x14076D52C (SepDeleteLogonSessionTrack.c)
 *     PnpNotifyTargetDeviceChange @ 0x14078354C (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x14078F470 (PnpNotifyDeviceClassChange.c)
 *     MiSessionCreate @ 0x1407A91FC (MiSessionCreate.c)
 *     PsCaptureUserProcessParameters @ 0x1407AD840 (PsCaptureUserProcessParameters.c)
 *     SepCreateLogonSessionTrack @ 0x1407BD77C (SepCreateLogonSessionTrack.c)
 *     SepReferenceLogonSession @ 0x1407C35E4 (SepReferenceLogonSession.c)
 *     NtManageHotPatch @ 0x1407D41C0 (NtManageHotPatch.c)
 *     NtGetNextProcess @ 0x1407D4930 (NtGetNextProcess.c)
 *     SepIsNgenImage @ 0x1407DD748 (SepIsNgenImage.c)
 *     NtImpersonateAnonymousToken @ 0x1407F5280 (NtImpersonateAnonymousToken.c)
 *     ExInitLicenseData @ 0x14080F248 (ExInitLicenseData.c)
 *     RtlpInitCodePageTables @ 0x140821458 (RtlpInitCodePageTables.c)
 *     ExpRefreshTimeZoneInformation @ 0x14083EE98 (ExpRefreshTimeZoneInformation.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x140956AF0 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     SepMakeLogonSessionsSiblings @ 0x1409D02C0 (SepMakeLogonSessionsSiblings.c)
 *     ExProcessCounterSetCallback @ 0x1409F6060 (ExProcessCounterSetCallback.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA924 (SLUpdateLicenseDataInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x140AAAFC0 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x14020C020 (PsIsServerSilo.c)
 */

__int64 PsGetCurrentServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Blink; // rcx
  __int64 v2; // rcx

  if ( KeGetPcr()->Prcb.NestingLevel )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  Blink = (__int64)CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == -3 )
    return *(_QWORD *)&CurrentThread->Process[2].Header.Lock;
  if ( Blink )
  {
    while ( !PsIsServerSilo(Blink) )
      Blink = *(_QWORD *)(v2 + 1288);
    return v2;
  }
  return 0LL;
}
