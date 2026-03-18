/*
 * XREFs of ??_GCDecodeBitmap@@UEAAPEAXI@Z @ 0x18001FA10
 * Callers:
 *     ??_ECDecodeBitmap@@WFA@EAAPEAXI@Z @ 0x1801230B0 (--_ECDecodeBitmap@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x1800A0D7C (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CDecodeBitmap *__fastcall CDecodeBitmap::`scalar deleting destructor'(CDecodeBitmap *this, char a2)
{
  CRenderTargetBitmap::~CRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x108uLL);
  return this;
}
