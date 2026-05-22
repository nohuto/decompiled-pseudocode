/*
 * XREFs of ?SuspendAnimations@KernelChannel@DirectComposition@@UEAAJH@Z @ 0x180012E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::KernelChannel::SuspendAnimations(DirectComposition::KernelChannel *this)
{
  int v1; // eax

  v1 = NtDCompositionSuspendAnimations(*((unsigned int *)this + 2));
  return DirectComposition::CDevice::HRESULTFromNTSTATUS(v1);
}
