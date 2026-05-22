/*
 * XREFs of ?CreateAndBindSharedSection@KernelChannel@DirectComposition@@UEAAJI_KPEAPEAX@Z @ 0x18008BF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::KernelChannel::CreateAndBindSharedSection(
        DirectComposition::KernelChannel *this,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  int v4; // eax

  v4 = NtDCompositionCreateAndBindSharedSection(*((unsigned int *)this + 2), a2, a3, a4);
  return DirectComposition::CDevice::HRESULTFromNTSTATUS(v4);
}
