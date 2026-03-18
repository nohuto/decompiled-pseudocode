/*
 * XREFs of ??_ECOverlaySwapChainBase@@MEAAPEAXI@Z @ 0x1802887A8
 * Callers:
 *     ??_ECOverlaySwapChainBase@@OBA@EAAPEAXI@Z @ 0x18011E830 (--_ECOverlaySwapChainBase@@OBA@EAAPEAXI@Z.c)
 *     ??_ECOverlaySwapChainBase@@OCI@EAAPEAXI@Z @ 0x18011E850 (--_ECOverlaySwapChainBase@@OCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1COverlaySwapChainBase@@MEAA@XZ @ 0x1800FD2A8 (--1COverlaySwapChainBase@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

COverlaySwapChainBase *__fastcall COverlaySwapChainBase::`vector deleting destructor'(
        COverlaySwapChainBase *this,
        char a2)
{
  COverlaySwapChainBase::~COverlaySwapChainBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
