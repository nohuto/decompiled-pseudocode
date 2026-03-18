/*
 * XREFs of HalpBlkFatalErrorHalt @ 0x140AD30B0
 * Callers:
 *     HalpBlkDivideErrorFault @ 0x140AD3100 (HalpBlkDivideErrorFault.c)
 *     HalpBlkDebugExceptionTrap @ 0x140AD3180 (HalpBlkDebugExceptionTrap.c)
 *     HalpBlkBreakpointTrap @ 0x140AD3200 (HalpBlkBreakpointTrap.c)
 *     HalpBlkOverflowTrap @ 0x140AD3280 (HalpBlkOverflowTrap.c)
 *     HalpBlkBoundRangeExceededFault @ 0x140AD3300 (HalpBlkBoundRangeExceededFault.c)
 *     HalpBlkInvalidOpcodeFault @ 0x140AD3380 (HalpBlkInvalidOpcodeFault.c)
 *     HalpBlkDeviceNotAvailableFault @ 0x140AD3400 (HalpBlkDeviceNotAvailableFault.c)
 *     HalpBlkDoubleFaultAbort @ 0x140AD3480 (HalpBlkDoubleFaultAbort.c)
 *     HalpBlkCoprocessorSegmentOverrunFault @ 0x140AD3500 (HalpBlkCoprocessorSegmentOverrunFault.c)
 *     HalpBlkInvalidTssFault @ 0x140AD3580 (HalpBlkInvalidTssFault.c)
 *     HalpBlkSegmentNotPresentFault @ 0x140AD3600 (HalpBlkSegmentNotPresentFault.c)
 *     HalpBlkStackSegmentFault @ 0x140AD3680 (HalpBlkStackSegmentFault.c)
 *     HalpBlkGeneralProtectionFault @ 0x140AD3700 (HalpBlkGeneralProtectionFault.c)
 *     HalpBlkPageFault @ 0x140AD3780 (HalpBlkPageFault.c)
 *     HalpBlkFloatingPointErrorFault @ 0x140AD3800 (HalpBlkFloatingPointErrorFault.c)
 *     HalpBlkAlignmentFault @ 0x140AD3880 (HalpBlkAlignmentFault.c)
 *     HalpBlkFloatingPointFault @ 0x140AD3900 (HalpBlkFloatingPointFault.c)
 *     HalpBlkVirtualizationFault @ 0x140AD3980 (HalpBlkVirtualizationFault.c)
 *     HalpBlkReservedVector21 @ 0x140AD3A00 (HalpBlkReservedVector21.c)
 *     HalpBlkReservedVector22 @ 0x140AD3A80 (HalpBlkReservedVector22.c)
 *     HalpBlkReservedVector23 @ 0x140AD3B00 (HalpBlkReservedVector23.c)
 *     HalpBlkReservedVector24 @ 0x140AD3B80 (HalpBlkReservedVector24.c)
 *     HalpBlkReservedVector25 @ 0x140AD3C00 (HalpBlkReservedVector25.c)
 *     HalpBlkReservedVector26 @ 0x140AD3C80 (HalpBlkReservedVector26.c)
 *     HalpBlkReservedVector27 @ 0x140AD3D00 (HalpBlkReservedVector27.c)
 *     HalpBlkReservedVector28 @ 0x140AD3D80 (HalpBlkReservedVector28.c)
 *     HalpBlkReservedVector29 @ 0x140AD3E00 (HalpBlkReservedVector29.c)
 *     HalpBlkReservedVector30 @ 0x140AD3E80 (HalpBlkReservedVector30.c)
 *     HalpBlkReservedVector31 @ 0x140AD3F00 (HalpBlkReservedVector31.c)
 *     HalpBlkNmiInterrupt @ 0x140AD4400 (HalpBlkNmiInterrupt.c)
 *     HalpBlkHandleMachineCheckAbort @ 0x140AD51B0 (HalpBlkHandleMachineCheckAbort.c)
 *     HalpBlkMceFastForward @ 0x140AD52B0 (HalpBlkMceFastForward.c)
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
