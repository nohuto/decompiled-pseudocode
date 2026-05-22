/*
 * XREFs of ?Unlock@CDevice@DirectComposition@@UEAAXXZ @ 0x1800F6960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CDevice::Unlock(DirectComposition::CDevice *this)
{
  DirectComposition::CDeviceLock::Leave((DirectComposition::CDevice *)((char *)this + 24));
}
