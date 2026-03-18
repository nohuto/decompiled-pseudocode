/*
 * XREFs of ??_ECLegacyStereoSwapChain@@UEAAPEAXI@Z @ 0x18029FAAC
 * Callers:
 *     ??_ECLegacyStereoSwapChain@@WBA@EAAPEAXI@Z @ 0x180120370 (--_ECLegacyStereoSwapChain@@WBA@EAAPEAXI@Z.c)
 *     ??_ECLegacyStereoSwapChain@@WCI@EAAPEAXI@Z @ 0x180120390 (--_ECLegacyStereoSwapChain@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002731C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x1800FD374 (--1CLegacySwapChain@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CLegacyStereoSwapChain *__fastcall CLegacyStereoSwapChain::`vector deleting destructor'(
        CLegacyStereoSwapChain *this,
        char a2)
{
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 360);
  CLegacySwapChain::~CLegacySwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
