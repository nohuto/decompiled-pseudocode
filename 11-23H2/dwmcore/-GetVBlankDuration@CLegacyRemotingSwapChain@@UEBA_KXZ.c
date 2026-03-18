/*
 * XREFs of ?GetVBlankDuration@CLegacyRemotingSwapChain@@UEBA_KXZ @ 0x18010AFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONGLONG __fastcall CLegacyRemotingSwapChain::GetVBlankDuration(CLegacyRemotingSwapChain *this)
{
  return g_qpcFrequency.QuadPart * *((unsigned int *)this + 31) / *((unsigned int *)this + 30);
}
