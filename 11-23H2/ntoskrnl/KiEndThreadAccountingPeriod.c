/*
 * XREFs of KiEndThreadAccountingPeriod @ 0x140248430
 * Callers:
 *     KiScanInterruptObjectList @ 0x1404206E0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1404208C0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140420A10 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140420B60 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiSpuriousDispatchNoEOI @ 0x140421D60 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1404229F0 (KxIsrLinkage.c)
 *     KiHvInterruptSubDispatch @ 0x140426860 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1404269C0 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x140426B20 (KiSwInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1404281B0 (KiIpiInterruptSubDispatch.c)
 * Callees:
 *     KiEndThreadAccountingPeriodEx @ 0x140248450 (KiEndThreadAccountingPeriodEx.c)
 */

__int64 __fastcall KiEndThreadAccountingPeriod(__int64 a1, __int64 a2, __int64 a3)
{
  return KiEndThreadAccountingPeriodEx(a1, a2, a3, 0LL);
}
