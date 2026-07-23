/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExit @ 0x140435700
 * Callers:
 *     KxIsrLinkage @ 0x140422D80 (KxIsrLinkage.c)
 *     KyStartUserThread @ 0x140423F70 (KyStartUserThread.c)
 *     KiApcInterrupt @ 0x140424AD0 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x140425290 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1404255F0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140425950 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140425CB0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140426010 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x140426EB0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1404276A0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140427DB0 (KiIpiInterrupt.c)
 *     KiDivideErrorFault @ 0x14042C000 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x14042C540 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x14042CF00 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x14042D280 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x14042D600 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14042DD00 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x14042E3C0 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14042E780 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14042EB00 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14042EE80 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14042F200 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x14042F600 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x14042F980 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x14042FD00 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x140430500 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x140430900 (KiAlignmentFault.c)
 *     KxMcheckAlternateReturn @ 0x1404313C0 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x140431A40 (KiXmmException.c)
 *     KiVirtualizationException @ 0x140431E40 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140432540 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x140432C80 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x140433000 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x140433380 (KiDebugServiceTrap.c)
 *     KiSystemService @ 0x140433700 (KiSystemService.c)
 *     KiSystemCall32 @ 0x1404339C0 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x140433F00 (KiSystemCall64.c)
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
