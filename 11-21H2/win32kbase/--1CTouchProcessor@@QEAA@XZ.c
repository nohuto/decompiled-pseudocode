/*
 * XREFs of ??1CTouchProcessor@@QEAA@XZ @ 0x1C009E8D0
 * Callers:
 *     UnInitializeInputComponents @ 0x1C009EA30 (UnInitializeInputComponents.c)
 *     ??1CPTPProcessor@@AEAA@XZ @ 0x1C01DD480 (--1CPTPProcessor@@AEAA@XZ.c)
 * Callees:
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C009E9F0 (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C00C5E70 (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 */

void __fastcall CTouchProcessor::~CTouchProcessor(CTouchProcessor *this)
{
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  CTouchProcessor::CleanupCoalesceInfo(this);
  CInpLockGuard::Uninitialize((CTouchProcessor *)((char *)this + 32));
  *(_QWORD *)this = &CBaseProcessor::`vftable';
}
