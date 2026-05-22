/*
 * XREFs of ?SetChannelConnectionId@KernelChannel@DirectComposition@@UEAAJH_K@Z @ 0x18008CC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::KernelChannel::SetChannelConnectionId(DirectComposition::KernelChannel *this)
{
  int v1; // eax

  v1 = NtDCompositionSetChannelConnectionId(*((unsigned int *)this + 2));
  return DirectComposition::CDevice::HRESULTFromNTSTATUS(v1);
}
