/*
 * XREFs of ??_ECDDASwapChain@@MEAAPEAXI@Z @ 0x1802938C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??1CDDASwapChain@@MEAA@XZ @ 0x1802937E8 (--1CDDASwapChain@@MEAA@XZ.c)
 */

CDDASwapChain *__fastcall CDDASwapChain::`vector deleting destructor'(CDDASwapChain *this, char a2)
{
  CDDASwapChain::~CDDASwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
