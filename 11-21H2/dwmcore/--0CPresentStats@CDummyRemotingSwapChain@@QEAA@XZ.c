/*
 * XREFs of ??0CPresentStats@CDummyRemotingSwapChain@@QEAA@XZ @ 0x180289320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CDummyRemotingSwapChain::CPresentStats *__fastcall CDummyRemotingSwapChain::CPresentStats::CPresentStats(
        CDummyRemotingSwapChain::CPresentStats *this)
{
  CDummyRemotingSwapChain::CPresentStats *result; // rax

  *(_QWORD *)this = 0LL;
  result = this;
  *((_BYTE *)this + 48) = 1;
  return result;
}
