/*
 * XREFs of HalpBlkFatalErrorHalt @ 0x140B140B0
 * Callers:
 *     HalpBlkDivideErrorFault @ 0x140B14100 (HalpBlkDivideErrorFault.c)
 *     HalpBlkDebugExceptionTrap @ 0x140B14180 (HalpBlkDebugExceptionTrap.c)
 *     HalpBlkBreakpointTrap @ 0x140B14200 (HalpBlkBreakpointTrap.c)
 *     HalpBlkOverflowTrap @ 0x140B14280 (HalpBlkOverflowTrap.c)
 *     HalpBlkBoundRangeExceededFault @ 0x140B14300 (HalpBlkBoundRangeExceededFault.c)
 *     HalpBlkInvalidOpcodeFault @ 0x140B14380 (HalpBlkInvalidOpcodeFault.c)
 *     HalpBlkDeviceNotAvailableFault @ 0x140B14400 (HalpBlkDeviceNotAvailableFault.c)
 *     HalpBlkDoubleFaultAbort @ 0x140B14480 (HalpBlkDoubleFaultAbort.c)
 *     HalpBlkCoprocessorSegmentOverrunFault @ 0x140B14500 (HalpBlkCoprocessorSegmentOverrunFault.c)
 *     HalpBlkInvalidTssFault @ 0x140B14580 (HalpBlkInvalidTssFault.c)
 *     HalpBlkSegmentNotPresentFault @ 0x140B14600 (HalpBlkSegmentNotPresentFault.c)
 *     HalpBlkStackSegmentFault @ 0x140B14680 (HalpBlkStackSegmentFault.c)
 *     HalpBlkGeneralProtectionFault @ 0x140B14700 (HalpBlkGeneralProtectionFault.c)
 *     HalpBlkPageFault @ 0x140B14780 (HalpBlkPageFault.c)
 *     HalpBlkFloatingPointErrorFault @ 0x140B14800 (HalpBlkFloatingPointErrorFault.c)
 *     HalpBlkAlignmentFault @ 0x140B14880 (HalpBlkAlignmentFault.c)
 *     HalpBlkFloatingPointFault @ 0x140B14900 (HalpBlkFloatingPointFault.c)
 *     HalpBlkVirtualizationFault @ 0x140B14980 (HalpBlkVirtualizationFault.c)
 *     HalpBlkReservedVector21 @ 0x140B14A00 (HalpBlkReservedVector21.c)
 *     HalpBlkReservedVector22 @ 0x140B14A80 (HalpBlkReservedVector22.c)
 *     HalpBlkReservedVector23 @ 0x140B14B00 (HalpBlkReservedVector23.c)
 *     HalpBlkReservedVector24 @ 0x140B14B80 (HalpBlkReservedVector24.c)
 *     HalpBlkReservedVector25 @ 0x140B14C00 (HalpBlkReservedVector25.c)
 *     HalpBlkReservedVector26 @ 0x140B14C80 (HalpBlkReservedVector26.c)
 *     HalpBlkReservedVector27 @ 0x140B14D00 (HalpBlkReservedVector27.c)
 *     HalpBlkReservedVector28 @ 0x140B14D80 (HalpBlkReservedVector28.c)
 *     HalpBlkReservedVector29 @ 0x140B14E00 (HalpBlkReservedVector29.c)
 *     HalpBlkReservedVector30 @ 0x140B14E80 (HalpBlkReservedVector30.c)
 *     HalpBlkReservedVector31 @ 0x140B14F00 (HalpBlkReservedVector31.c)
 *     HalpBlkNmiInterrupt @ 0x140B15400 (HalpBlkNmiInterrupt.c)
 *     HalpBlkHandleMachineCheckAbort @ 0x140B161B0 (HalpBlkHandleMachineCheckAbort.c)
 *     HalpBlkMceFastForward @ 0x140B162B0 (HalpBlkMceFastForward.c)
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
