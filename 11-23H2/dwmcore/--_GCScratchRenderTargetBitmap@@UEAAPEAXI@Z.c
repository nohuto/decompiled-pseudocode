/*
 * XREFs of ??_GCScratchRenderTargetBitmap@@UEAAPEAXI@Z @ 0x1800A0C60
 * Callers:
 *     ??_ECScratchRenderTargetBitmap@@WFA@EAAPEAXI@Z @ 0x180123910 (--_ECScratchRenderTargetBitmap@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x1800A0D7C (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CScratchRenderTargetBitmap *__fastcall CScratchRenderTargetBitmap::`scalar deleting destructor'(
        CScratchRenderTargetBitmap *this,
        char a2)
{
  CRenderTargetBitmap::~CRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x120uLL);
  return this;
}
