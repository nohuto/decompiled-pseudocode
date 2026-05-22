/*
 * XREFs of ?WaitForChannel@KernelChannel@DirectComposition@@UEAAJH@Z @ 0x18008DD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::KernelChannel::WaitForChannel(DirectComposition::KernelChannel *this)
{
  int v1; // eax

  v1 = NtDCompositionWaitForChannel(*((unsigned int *)this + 2));
  return DirectComposition::CDevice::HRESULTFromNTSTATUS(v1);
}
