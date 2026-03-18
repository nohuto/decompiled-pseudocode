/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExit @ 0x140435300
 * Callers:
 *     KxIsrLinkage @ 0x1404229F0 (KxIsrLinkage.c)
 *     KyStartUserThread @ 0x140423BE0 (KyStartUserThread.c)
 *     KiApcInterrupt @ 0x140424740 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x140424F00 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140425260 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1404255C0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140425920 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140425C80 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x140426B20 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140427310 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140427A20 (KiIpiInterrupt.c)
 *     KiDivideErrorFault @ 0x14042BC00 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x14042C140 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x14042CB00 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x14042CE80 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x14042D200 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14042D900 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x14042DFC0 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14042E380 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14042E700 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14042EA80 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14042EE00 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x14042F200 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x14042F580 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x14042F900 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x140430100 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x140430500 (KiAlignmentFault.c)
 *     KxMcheckAlternateReturn @ 0x140430FC0 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x140431640 (KiXmmException.c)
 *     KiVirtualizationException @ 0x140431A40 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140432140 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x140432880 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x140432C00 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x140432F80 (KiDebugServiceTrap.c)
 *     KiSystemService @ 0x140433300 (KiSystemService.c)
 *     KiSystemCall32 @ 0x1404335C0 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x140433B00 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140AF7E40 (KiSystemCall32Shadow.c)
 *     KiSystemCall64Shadow @ 0x140AF81C0 (KiSystemCall64Shadow.c)
 * Callees:
 *     <none>
 */

char KiFlushBhbDuringTrapEntryOrExit()
{
  char result; // al

  if ( (KeGetPcr()->Prcb.BpbFeatures & 0x30) == 0 )
    __debugbreak();
  result = KeGetPcr()->Prcb.BpbFeatures & 0x30;
  switch ( result )
  {
    case 16:
      return KiFlushBhbDuringTrapEntryOrExitPreAlderLake(56026LL);
    case 32:
      return KiFlushBhbDuringTrapEntryOrExitAlderLake(56026LL);
    case 48:
      return KiFlushBhbDuringTrapEntryOrExitTsx(56026LL);
  }
  __debugbreak();
  return result;
}
