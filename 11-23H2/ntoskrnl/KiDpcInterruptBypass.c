/*
 * XREFs of KiDpcInterruptBypass @ 0x140427D70
 * Callers:
 *     KiChainedDispatch @ 0x140420630 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140421000 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140421440 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140421880 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140421CC0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404220F0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140422D80 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x140426370 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1404267C0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140426EB0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140427DB0 (KiIpiInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x140249600 (KiDispatchInterrupt.c)
 */

__int64 __fastcall KiDpcInterruptBypass()
{
  __int64 v0; // rbp
  __int64 result; // rax

  __writecr8(2uLL);
  _enable();
  result = KiDispatchInterrupt(*(_QWORD *)(v0 - 87), v0 - 128);
  _disable();
  return result;
}
