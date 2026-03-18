/*
 * XREFs of KiDpcInterruptBypass @ 0x1404279E0
 * Callers:
 *     KiChainedDispatch @ 0x1404202A0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140420C70 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1404210B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1404214F0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140421930 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140421D60 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1404229F0 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x140425FE0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140426430 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140426B20 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140427A20 (KiIpiInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x140249530 (KiDispatchInterrupt.c)
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
