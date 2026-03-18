/*
 * XREFs of ??_GCDummyRemotingSwapChain@@MEAAPEAXI@Z @ 0x1802992C0
 * Callers:
 *     ??_ECDummyRemotingSwapChain@@OBA@EAAPEAXI@Z @ 0x18011F500 (--_ECDummyRemotingSwapChain@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 *     ??1CDummyRemotingSwapChain@@MEAA@XZ @ 0x180299154 (--1CDummyRemotingSwapChain@@MEAA@XZ.c)
 */

CDummyRemotingSwapChain *__fastcall CDummyRemotingSwapChain::`scalar deleting destructor'(
        CDummyRemotingSwapChain *this,
        char a2)
{
  CDummyRemotingSwapChain::~CDummyRemotingSwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
