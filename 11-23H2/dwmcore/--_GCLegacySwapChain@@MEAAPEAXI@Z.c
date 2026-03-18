/*
 * XREFs of ??_GCLegacySwapChain@@MEAAPEAXI@Z @ 0x1800FBFBC
 * Callers:
 *     ??_ECLegacySwapChain@@OBA@EAAPEAXI@Z @ 0x18011F2F0 (--_ECLegacySwapChain@@OBA@EAAPEAXI@Z.c)
 *     ??_ECLegacySwapChain@@OCI@EAAPEAXI@Z @ 0x18011F310 (--_ECLegacySwapChain@@OCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x1800FD374 (--1CLegacySwapChain@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CLegacySwapChain *__fastcall CLegacySwapChain::`scalar deleting destructor'(CLegacySwapChain *this, char a2)
{
  CLegacySwapChain::~CLegacySwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x1C0uLL);
  return this;
}
