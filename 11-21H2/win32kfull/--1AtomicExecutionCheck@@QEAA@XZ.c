/*
 * XREFs of ??1AtomicExecutionCheck@@QEAA@XZ @ 0x1C01CC410
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     xxxCreateDesktopEx @ 0x1C00CFDF4 (xxxCreateDesktopEx.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

void __fastcall AtomicExecutionCheck::~AtomicExecutionCheck(AtomicExecutionCheck *this, __int64 a2, __int64 a3)
{
  AtomicExecutionCheck::Disarm(this, a2, a3);
}
