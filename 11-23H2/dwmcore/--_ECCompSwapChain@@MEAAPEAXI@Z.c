/*
 * XREFs of ??_ECCompSwapChain@@MEAAPEAXI@Z @ 0x18029DBE0
 * Callers:
 *     ??_ECCompSwapChain@@OBI@EAAPEAXI@Z @ 0x18011FC50 (--_ECCompSwapChain@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 *     ??1CCompSwapChain@@MEAA@XZ @ 0x18029D9C8 (--1CCompSwapChain@@MEAA@XZ.c)
 */

CCompSwapChain *__fastcall CCompSwapChain::`vector deleting destructor'(CCompSwapChain *this, char a2)
{
  CCompSwapChain::~CCompSwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
