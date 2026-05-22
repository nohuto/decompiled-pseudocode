/*
 * XREFs of ?SetClientDrawInProgress@CDevice@DirectComposition@@QEAAXXZ @ 0x18009B764
 * Callers:
 *     ??1ClientUpdateLockAcquire@DirectComposition@@QEAA@XZ @ 0x1800994F4 (--1ClientUpdateLockAcquire@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 */

void __fastcall DirectComposition::CDevice::SetClientDrawInProgress(DirectComposition::CDevice *this)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDevice *)((char *)this + 96));
  if ( *((_DWORD *)this + 171) )
    ModuleFailFastForHRESULT(2291664897LL, retaddr);
  *((_DWORD *)this + 171) = GetCurrentThreadId();
}
