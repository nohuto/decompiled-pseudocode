/*
 * XREFs of ??_GCLegacyRemotingSwapChain@@MEAAPEAXI@Z @ 0x180109250
 * Callers:
 *     ??_ECLegacyRemotingSwapChain@@OBI@EAAPEAXI@Z @ 0x180121270 (--_ECLegacyRemotingSwapChain@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CLegacyRemotingSwapChain@@MEAA@XZ @ 0x180109B30 (--1CLegacyRemotingSwapChain@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
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
