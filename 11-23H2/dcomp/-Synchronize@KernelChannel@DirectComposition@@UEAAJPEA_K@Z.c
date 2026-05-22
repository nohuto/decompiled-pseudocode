/*
 * XREFs of ?Synchronize@KernelChannel@DirectComposition@@UEAAJPEA_K@Z @ 0x1800243F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::KernelChannel::Synchronize(
        DirectComposition::KernelChannel *this,
        unsigned __int64 *a2)
{
  int v2; // eax

  v2 = NtDCompositionSynchronize(*((unsigned int *)this + 2), a2);
  return DirectComposition::CDevice::HRESULTFromNTSTATUS(v2);
}
