/*
 * XREFs of KiBugCheckDispatch @ 0x1404348C0
 * Callers:
 *     KxIsrLinkage @ 0x1404229F0 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x14042C580 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14042D200 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x14042DFC0 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14042E380 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14042E700 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14042EA80 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14042EE00 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x14042F900 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x140430100 (KiFloatingErrorFault.c)
 *     KiXmmException @ 0x140431640 (KiXmmException.c)
 *     KiVirtualizationException @ 0x140431A40 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140432140 (KiControlProtectionFault.c)
 *     KiSystemServiceHandler @ 0x140433980 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x140433B00 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x140434E40 (KiFastFailDispatch.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
