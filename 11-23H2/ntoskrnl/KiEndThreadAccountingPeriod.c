/*
 * XREFs of KiEndThreadAccountingPeriod @ 0x140248500
 * Callers:
 *     KiScanInterruptObjectList @ 0x140420A70 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140420C50 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140420DA0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140420EF0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404220F0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140422D80 (KxIsrLinkage.c)
 *     KiHvInterruptSubDispatch @ 0x140426BF0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140426D50 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x140426EB0 (KiSwInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x140428540 (KiIpiInterruptSubDispatch.c)
 * Callees:
 *     KiEndThreadAccountingPeriodEx @ 0x140248520 (KiEndThreadAccountingPeriodEx.c)
 */

__int64 __fastcall KiEndThreadAccountingPeriod(__int64 a1, __int64 a2, __int64 a3)
{
  return KiEndThreadAccountingPeriodEx(a1, a2, a3, 0LL);
}
