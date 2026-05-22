/*
 * XREFs of ?GetDevice@CSharedAllocationBase@DirectComposition@@UEAAPEAVCDevice@2@XZ @ 0x18008EFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DirectComposition::CDevice *__fastcall DirectComposition::CSharedAllocationBase::GetDevice(
        DirectComposition::CSharedAllocationBase *this)
{
  return *(struct DirectComposition::CDevice **)(*((_QWORD *)this + 4) + 24LL);
}
