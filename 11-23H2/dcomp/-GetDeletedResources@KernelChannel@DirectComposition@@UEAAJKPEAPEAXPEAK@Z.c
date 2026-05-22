/*
 * XREFs of ?GetDeletedResources@KernelChannel@DirectComposition@@UEAAJKPEAPEAXPEAK@Z @ 0x18008C670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::KernelChannel::GetDeletedResources(
        DirectComposition::KernelChannel *this,
        __int64 a2,
        void **a3,
        unsigned int *a4)
{
  int DeletedResources; // eax

  DeletedResources = NtDCompositionGetDeletedResources(*((unsigned int *)this + 2), a2, a3, a4);
  return DirectComposition::CDevice::HRESULTFromNTSTATUS(DeletedResources);
}
