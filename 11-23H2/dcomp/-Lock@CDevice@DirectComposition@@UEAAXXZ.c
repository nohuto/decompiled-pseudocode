/*
 * XREFs of ?Lock@CDevice@DirectComposition@@UEAAXXZ @ 0x1800F25C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CDevice::Lock(DirectComposition::CDevice *this)
{
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDevice *)((char *)this + 24));
}
