/*
 * XREFs of ?ClearClientDrawInProgress@CDevice@DirectComposition@@QEAAJXZ @ 0x18009ACE8
 * Callers:
 *     ??0ClientUpdateLockRelease@DirectComposition@@QEAA@PEBVCDxDevice@1@PEAJ_N@Z @ 0x18009948C (--0ClientUpdateLockRelease@DirectComposition@@QEAA@PEBVCDxDevice@1@PEAJ_N@Z.c)
 * Callees:
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 */

__int64 __fastcall DirectComposition::CDevice::ClearClientDrawInProgress(DirectComposition::CDevice *this)
{
  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDevice *)((char *)this + 96));
  if ( !*((_DWORD *)this + 171) )
    return 2291664898LL;
  if ( *((_DWORD *)this + 171) != GetCurrentThreadId() )
    return 2147549454LL;
  *((_DWORD *)this + 171) = 0;
  return 0LL;
}
