/*
 * XREFs of PsGetCurrentServerSilo @ 0x140289E70
 * Callers:
 *     MmIsSessionInCurrentServerSilo @ 0x140201A78 (MmIsSessionInCurrentServerSilo.c)
 *     EtwpTraceFileName @ 0x140213570 (EtwpTraceFileName.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 *     MmGetSessionById @ 0x1402C1E00 (MmGetSessionById.c)
 *     RtlGetNtProductType @ 0x1402F7F40 (RtlGetNtProductType.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x14030C2B0 (RtlpUpcaseUnicodeStringPrivate.c)
 *     ExLocalTimeToSystemTime @ 0x14033B0A0 (ExLocalTimeToSystemTime.c)
 *     ExSystemTimeToLocalTime @ 0x14033B0F0 (ExSystemTimeToLocalTime.c)
 *     RtlGetSystemGlobalData @ 0x140341000 (RtlGetSystemGlobalData.c)
 *     RtlSetSystemGlobalData @ 0x14035B9D0 (RtlSetSystemGlobalData.c)
 *     RtlGetActiveConsoleId @ 0x14035E670 (RtlGetActiveConsoleId.c)
 *     MiGetNextSession @ 0x14035E6B8 (MiGetNextSession.c)
 *     RtlGetCurrentServiceSessionId @ 0x14036DE20 (RtlGetCurrentServiceSessionId.c)
 *     SepAdtLogAuditRecord @ 0x14039B490 (SepAdtLogAuditRecord.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1403A52CC (UpcaseUnicodeToUTF8NHelper.c)
 *     ExLogTimeZoneInformation @ 0x1403B0490 (ExLogTimeZoneInformation.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x140463564 (UpcaseUnicodeToMultiByteNHelper.c)
 *     IopCheckSessionDeviceAccess @ 0x1405576C8 (IopCheckSessionDeviceAccess.c)
 *     PerfInfoLogSysCallEntry @ 0x1405FEC50 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405FECE0 (PerfInfoLogSysCallExit.c)
 *     PopTransitionCheckpoint @ 0x1406825AC (PopTransitionCheckpoint.c)
 *     SepBlockAccessForLogonSession @ 0x140682C9C (SepBlockAccessForLogonSession.c)
 *     IoRegisterPlugPlayNotification @ 0x140687F00 (IoRegisterPlugPlayNotification.c)
 *     SepIsMinTCB @ 0x1406B9B9C (SepIsMinTCB.c)
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     PsLookupProcessByProcessId @ 0x1406FA420 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1406FAFC0 (PsLookupThreadByThreadId.c)
 *     ExpWnfGenerateStateName @ 0x140711608 (ExpWnfGenerateStateName.c)
 *     SeCreateClientSecurityEx @ 0x14071D220 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x14071D960 (SepCreateClientSecurityEx.c)
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     ExpGetProcessInformation @ 0x1407432D0 (ExpGetProcessInformation.c)
 *     SepDeleteLogonSessionTrack @ 0x14076D84C (SepDeleteLogonSessionTrack.c)
 *     PnpNotifyTargetDeviceChange @ 0x14078386C (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x14078F790 (PnpNotifyDeviceClassChange.c)
 *     MiSessionCreate @ 0x1407A95BC (MiSessionCreate.c)
 *     PsCaptureUserProcessParameters @ 0x1407ADC00 (PsCaptureUserProcessParameters.c)
 *     SepCreateLogonSessionTrack @ 0x1407BDA3C (SepCreateLogonSessionTrack.c)
 *     SepReferenceLogonSession @ 0x1407C38A4 (SepReferenceLogonSession.c)
 *     NtManageHotPatch @ 0x1407D4470 (NtManageHotPatch.c)
 *     NtGetNextProcess @ 0x1407D4BE0 (NtGetNextProcess.c)
 *     SepIsNgenImage @ 0x1407DD9F8 (SepIsNgenImage.c)
 *     NtImpersonateAnonymousToken @ 0x1407F5620 (NtImpersonateAnonymousToken.c)
 *     ExInitLicenseData @ 0x1408114F8 (ExInitLicenseData.c)
 *     RtlpInitCodePageTables @ 0x140823520 (RtlpInitCodePageTables.c)
 *     ExpRefreshTimeZoneInformation @ 0x140840928 (ExpRefreshTimeZoneInformation.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1409569A0 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     SepMakeLogonSessionsSiblings @ 0x1409D0170 (SepMakeLogonSessionsSiblings.c)
 *     ExProcessCounterSetCallback @ 0x1409F5E80 (ExProcessCounterSetCallback.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA744 (SLUpdateLicenseDataInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x140AAB210 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x14020C040 (PsIsServerSilo.c)
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
