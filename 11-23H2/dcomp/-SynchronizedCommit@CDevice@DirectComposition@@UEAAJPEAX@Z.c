/*
 * XREFs of ?SynchronizedCommit@CDevice@DirectComposition@@UEAAJPEAX@Z @ 0x1800F6920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::SynchronizedCommit(DirectComposition::CDevice *this, void *a2)
{
  return DirectComposition::CDevice::Commit((DirectComposition::CDevice *)((char *)this - 16), 0, a2);
}
