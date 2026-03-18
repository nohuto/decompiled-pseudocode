/*
 * XREFs of ??_ECClientMemoryBitmap@@MEAAPEAXI@Z @ 0x180026F40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CClientMemoryBitmap@@MEAA@XZ @ 0x18002704C (--1CClientMemoryBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CClientMemoryBitmap *__fastcall CClientMemoryBitmap::`vector deleting destructor'(CClientMemoryBitmap *this, char a2)
{
  CClientMemoryBitmap::~CClientMemoryBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xE0uLL);
  return this;
}
