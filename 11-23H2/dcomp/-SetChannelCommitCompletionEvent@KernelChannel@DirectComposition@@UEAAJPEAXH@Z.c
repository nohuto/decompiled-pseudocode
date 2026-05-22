/*
 * XREFs of ?SetChannelCommitCompletionEvent@KernelChannel@DirectComposition@@UEAAJPEAXH@Z @ 0x18008E000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::KernelChannel::SetChannelCommitCompletionEvent(
        DirectComposition::KernelChannel *this,
        void *a2)
{
  int v2; // eax

  v2 = NtDCompositionSetChannelCommitCompletionEvent(*((unsigned int *)this + 2), a2);
  return DirectComposition::CDevice::HRESULTFromNTSTATUS(v2);
}
