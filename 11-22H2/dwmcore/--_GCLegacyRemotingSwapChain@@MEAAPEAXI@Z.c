/*
 * XREFs of ??_GCLegacyRemotingSwapChain@@MEAAPEAXI@Z @ 0x180109590
 * Callers:
 *     ??_ECLegacyRemotingSwapChain@@OBI@EAAPEAXI@Z @ 0x1801215A0 (--_ECLegacyRemotingSwapChain@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CLegacyRemotingSwapChain@@MEAA@XZ @ 0x180109A38 (--1CLegacyRemotingSwapChain@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 */

CLegacyRemotingSwapChain *__fastcall CLegacyRemotingSwapChain::`scalar deleting destructor'(
        CLegacyRemotingSwapChain *this,
        char a2)
{
  CLegacyRemotingSwapChain::~CLegacyRemotingSwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x120uLL);
  return this;
}
