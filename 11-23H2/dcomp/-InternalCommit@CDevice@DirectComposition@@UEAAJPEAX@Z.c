/*
 * XREFs of ?InternalCommit@CDevice@DirectComposition@@UEAAJPEAX@Z @ 0x1800F2290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::InternalCommit(DirectComposition::CDevice *this, void *a2)
{
  return DirectComposition::CDevice::Commit((DirectComposition::CDevice *)((char *)this - 72), 0, a2);
}
