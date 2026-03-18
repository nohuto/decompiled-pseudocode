/*
 * XREFs of PsGetCurrentServerSilo @ 0x140289F90
 * Callers:
 *     MmIsSessionInCurrentServerSilo @ 0x140201A78 (MmIsSessionInCurrentServerSilo.c)
 *     EtwpTraceFileName @ 0x140213550 (EtwpTraceFileName.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287470 (PsIsCurrentThreadInServerSilo.c)
 *     MmGetSessionById @ 0x1402C1E30 (MmGetSessionById.c)
 *     RtlGetNtProductType @ 0x1402F7F40 (RtlGetNtProductType.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x14030C3E0 (RtlpUpcaseUnicodeStringPrivate.c)
 *     ExLocalTimeToSystemTime @ 0x14033B2A0 (ExLocalTimeToSystemTime.c)
 *     ExSystemTimeToLocalTime @ 0x14033B2F0 (ExSystemTimeToLocalTime.c)
 *     RtlGetSystemGlobalData @ 0x1403414F0 (RtlGetSystemGlobalData.c)
 *     RtlSetSystemGlobalData @ 0x14035C020 (RtlSetSystemGlobalData.c)
 *     RtlGetActiveConsoleId @ 0x14035ECC0 (RtlGetActiveConsoleId.c)
 *     MiGetNextSession @ 0x14035ED08 (MiGetNextSession.c)
 *     RtlGetCurrentServiceSessionId @ 0x14036E470 (RtlGetCurrentServiceSessionId.c)
 *     SepAdtLogAuditRecord @ 0x14039B780 (SepAdtLogAuditRecord.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1403A5A2C (UpcaseUnicodeToUTF8NHelper.c)
 *     ExLogTimeZoneInformation @ 0x1403B0B20 (ExLogTimeZoneInformation.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x140463BC4 (UpcaseUnicodeToMultiByteNHelper.c)
 *     IopCheckSessionDeviceAccess @ 0x140557628 (IopCheckSessionDeviceAccess.c)
 *     PerfInfoLogSysCallEntry @ 0x1405FEBC0 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405FEC50 (PerfInfoLogSysCallExit.c)
 *     PopTransitionCheckpoint @ 0x1406825AC (PopTransitionCheckpoint.c)
 *     SepBlockAccessForLogonSession @ 0x140682C9C (SepBlockAccessForLogonSession.c)
 *     IoRegisterPlugPlayNotification @ 0x140687F00 (IoRegisterPlugPlayNotification.c)
 *     SepIsMinTCB @ 0x1406B9B9C (SepIsMinTCB.c)
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     PsLookupProcessByProcessId @ 0x1406FA370 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1406FAF10 (PsLookupThreadByThreadId.c)
 *     ExpWnfGenerateStateName @ 0x140711558 (ExpWnfGenerateStateName.c)
 *     SeCreateClientSecurityEx @ 0x14071D1B0 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x14071D8F0 (SepCreateClientSecurityEx.c)
 *     ExpQuerySystemInformation @ 0x140726850 (ExpQuerySystemInformation.c)
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     ExpGetProcessInformation @ 0x140742DC0 (ExpGetProcessInformation.c)
 *     SepDeleteLogonSessionTrack @ 0x14076D33C (SepDeleteLogonSessionTrack.c)
 *     PnpNotifyTargetDeviceChange @ 0x14078335C (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x14078F280 (PnpNotifyDeviceClassChange.c)
 *     MiSessionCreate @ 0x1407A900C (MiSessionCreate.c)
 *     PsCaptureUserProcessParameters @ 0x1407AD650 (PsCaptureUserProcessParameters.c)
 *     SepCreateLogonSessionTrack @ 0x1407BD4AC (SepCreateLogonSessionTrack.c)
 *     SepReferenceLogonSession @ 0x1407C3314 (SepReferenceLogonSession.c)
 *     NtManageHotPatch @ 0x1407D3EF0 (NtManageHotPatch.c)
 *     NtGetNextProcess @ 0x1407D4660 (NtGetNextProcess.c)
 *     SepIsNgenImage @ 0x1407DD478 (SepIsNgenImage.c)
 *     NtImpersonateAnonymousToken @ 0x1407F4FB0 (NtImpersonateAnonymousToken.c)
 *     ExInitLicenseData @ 0x14080EF78 (ExInitLicenseData.c)
 *     RtlpInitCodePageTables @ 0x140821158 (RtlpInitCodePageTables.c)
 *     ExpRefreshTimeZoneInformation @ 0x14083EB98 (ExpRefreshTimeZoneInformation.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1409568F0 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     SepMakeLogonSessionsSiblings @ 0x1409D00C0 (SepMakeLogonSessionsSiblings.c)
 *     ExProcessCounterSetCallback @ 0x1409F5DD0 (ExProcessCounterSetCallback.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA694 (SLUpdateLicenseDataInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x140AAB150 (ExpSystemErrorHandler2.c)
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
