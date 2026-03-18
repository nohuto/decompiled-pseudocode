/*
 * XREFs of ??_ECConversionSwapChain@@UEAAPEAXI@Z @ 0x1802A05E8
 * Callers:
 *     ??_ECConversionSwapChain@@WBA@EAAPEAXI@Z @ 0x180120A50 (--_ECConversionSwapChain@@WBA@EAAPEAXI@Z.c)
 *     ??_ECConversionSwapChain@@WCI@EAAPEAXI@Z @ 0x180120A70 (--_ECConversionSwapChain@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 *     ??1CConversionSwapChain@@UEAA@XZ @ 0x1802A05B4 (--1CConversionSwapChain@@UEAA@XZ.c)
 */

void **__fastcall CConversionSwapChain::`vector deleting destructor'(void **this, char a2)
{
  CConversionSwapChain::~CConversionSwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
