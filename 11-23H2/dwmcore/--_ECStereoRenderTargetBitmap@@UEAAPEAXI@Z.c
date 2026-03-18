/*
 * XREFs of ??_ECStereoRenderTargetBitmap@@UEAAPEAXI@Z @ 0x1802B5690
 * Callers:
 *     ??_ECStereoRenderTargetBitmap@@WFA@EAAPEAXI@Z @ 0x180123530 (--_ECStereoRenderTargetBitmap@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002731C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x1800A0D7C (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CStereoRenderTargetBitmap *__fastcall CStereoRenderTargetBitmap::`vector deleting destructor'(
        CStereoRenderTargetBitmap *this,
        char a2)
{
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 168);
  CRenderTargetBitmap::~CRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
