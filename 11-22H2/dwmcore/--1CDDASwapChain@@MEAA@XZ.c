/*
 * XREFs of ??1CDDASwapChain@@MEAA@XZ @ 0x1802A30B0
 * Callers:
 *     ??_ECDDASwapChain@@MEAAPEAXI@Z @ 0x1802A3190 (--_ECDDASwapChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800343B8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DFD90 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall CDDASwapChain::~CDDASwapChain(CDDASwapChain *this)
{
  FastRegion::CRegion::FreeMemory((void **)this + 10);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 32);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 3);
}
