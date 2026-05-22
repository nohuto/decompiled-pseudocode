/*
 * XREFs of ?SetDebugCounter@KernelChannel@DirectComposition@@UEAAJH@Z @ 0x18008E330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::KernelChannel::SetDebugCounter(DirectComposition::KernelChannel *this)
{
  int v1; // eax

  v1 = NtDCompositionSetDebugCounter(*((unsigned int *)this + 2));
  return DirectComposition::CDevice::HRESULTFromNTSTATUS(v1);
}
