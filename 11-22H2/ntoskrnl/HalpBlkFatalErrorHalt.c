/*
 * XREFs of HalpBlkFatalErrorHalt @ 0x140B150B0
 * Callers:
 *     HalpBlkDivideErrorFault @ 0x140B15100 (HalpBlkDivideErrorFault.c)
 *     HalpBlkDebugExceptionTrap @ 0x140B15180 (HalpBlkDebugExceptionTrap.c)
 *     HalpBlkBreakpointTrap @ 0x140B15200 (HalpBlkBreakpointTrap.c)
 *     HalpBlkOverflowTrap @ 0x140B15280 (HalpBlkOverflowTrap.c)
 *     HalpBlkBoundRangeExceededFault @ 0x140B15300 (HalpBlkBoundRangeExceededFault.c)
 *     HalpBlkInvalidOpcodeFault @ 0x140B15380 (HalpBlkInvalidOpcodeFault.c)
 *     HalpBlkDeviceNotAvailableFault @ 0x140B15400 (HalpBlkDeviceNotAvailableFault.c)
 *     HalpBlkDoubleFaultAbort @ 0x140B15480 (HalpBlkDoubleFaultAbort.c)
 *     HalpBlkCoprocessorSegmentOverrunFault @ 0x140B15500 (HalpBlkCoprocessorSegmentOverrunFault.c)
 *     HalpBlkInvalidTssFault @ 0x140B15580 (HalpBlkInvalidTssFault.c)
 *     HalpBlkSegmentNotPresentFault @ 0x140B15600 (HalpBlkSegmentNotPresentFault.c)
 *     HalpBlkStackSegmentFault @ 0x140B15680 (HalpBlkStackSegmentFault.c)
 *     HalpBlkGeneralProtectionFault @ 0x140B15700 (HalpBlkGeneralProtectionFault.c)
 *     HalpBlkPageFault @ 0x140B15780 (HalpBlkPageFault.c)
 *     HalpBlkFloatingPointErrorFault @ 0x140B15800 (HalpBlkFloatingPointErrorFault.c)
 *     HalpBlkAlignmentFault @ 0x140B15880 (HalpBlkAlignmentFault.c)
 *     HalpBlkFloatingPointFault @ 0x140B15900 (HalpBlkFloatingPointFault.c)
 *     HalpBlkVirtualizationFault @ 0x140B15980 (HalpBlkVirtualizationFault.c)
 *     HalpBlkReservedVector21 @ 0x140B15A00 (HalpBlkReservedVector21.c)
 *     HalpBlkReservedVector22 @ 0x140B15A80 (HalpBlkReservedVector22.c)
 *     HalpBlkReservedVector23 @ 0x140B15B00 (HalpBlkReservedVector23.c)
 *     HalpBlkReservedVector24 @ 0x140B15B80 (HalpBlkReservedVector24.c)
 *     HalpBlkReservedVector25 @ 0x140B15C00 (HalpBlkReservedVector25.c)
 *     HalpBlkReservedVector26 @ 0x140B15C80 (HalpBlkReservedVector26.c)
 *     HalpBlkReservedVector27 @ 0x140B15D00 (HalpBlkReservedVector27.c)
 *     HalpBlkReservedVector28 @ 0x140B15D80 (HalpBlkReservedVector28.c)
 *     HalpBlkReservedVector29 @ 0x140B15E00 (HalpBlkReservedVector29.c)
 *     HalpBlkReservedVector30 @ 0x140B15E80 (HalpBlkReservedVector30.c)
 *     HalpBlkReservedVector31 @ 0x140B15F00 (HalpBlkReservedVector31.c)
 *     HalpBlkNmiInterrupt @ 0x140B16400 (HalpBlkNmiInterrupt.c)
 *     HalpBlkHandleMachineCheckAbort @ 0x140B171B0 (HalpBlkHandleMachineCheckAbort.c)
 *     HalpBlkMceFastForward @ 0x140B172B0 (HalpBlkMceFastForward.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn HalpBlkFatalErrorHalt(unsigned __int8 a1, unsigned __int64 a2)
{
  __writegsbyte(0x70u, a1);
  _mm_sfence();
  __writegsqword(0x78u, a2);
  _disable();
  __halt();
}
