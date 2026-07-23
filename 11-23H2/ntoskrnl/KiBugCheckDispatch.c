/*
 * XREFs of KiBugCheckDispatch @ 0x140434CC0
 * Callers:
 *     KxIsrLinkage @ 0x140422D80 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x14042C980 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14042D600 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x14042E3C0 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14042E780 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14042EB00 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14042EE80 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14042F200 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x14042FD00 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x140430500 (KiFloatingErrorFault.c)
 *     KiXmmException @ 0x140431A40 (KiXmmException.c)
 *     KiVirtualizationException @ 0x140431E40 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140432540 (KiControlProtectionFault.c)
 *     KiSystemServiceHandler @ 0x140433D80 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x140433F00 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x140435240 (KiFastFailDispatch.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
