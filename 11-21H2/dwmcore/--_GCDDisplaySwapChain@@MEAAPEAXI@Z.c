/*
 * XREFs of ??_GCDDisplaySwapChain@@MEAAPEAXI@Z @ 0x180283240
 * Callers:
 *     ??_ECDDisplaySwapChain@@OBI@EAAPEAXI@Z @ 0x180108330 (--_ECDDisplaySwapChain@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x180282544 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 */

CDDisplaySwapChain *__fastcall CDDisplaySwapChain::`scalar deleting destructor'(CDDisplaySwapChain *this, char a2)
{
  CDDisplaySwapChain::~CDDisplaySwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
