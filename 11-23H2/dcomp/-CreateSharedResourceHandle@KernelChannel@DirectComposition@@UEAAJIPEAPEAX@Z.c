/*
 * XREFs of ?CreateSharedResourceHandle@KernelChannel@DirectComposition@@UEAAJIPEAPEAX@Z @ 0x1801003D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::KernelChannel::CreateSharedResourceHandle(
        DirectComposition::KernelChannel *this,
        unsigned int a2,
        void **a3)
{
  int SharedResourceHandle; // eax

  SharedResourceHandle = NtDCompositionCreateSharedResourceHandle(a2, a3);
  return DirectComposition::CDevice::HRESULTFromNTSTATUS(SharedResourceHandle);
}
