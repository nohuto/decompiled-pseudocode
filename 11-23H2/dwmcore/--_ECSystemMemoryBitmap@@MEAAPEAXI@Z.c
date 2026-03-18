/*
 * XREFs of ??_ECSystemMemoryBitmap@@MEAAPEAXI@Z @ 0x180280D60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSystemMemoryBitmap@@MEAA@XZ @ 0x180026F7C (--1CSystemMemoryBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CSystemMemoryBitmap *__fastcall CSystemMemoryBitmap::`vector deleting destructor'(CSystemMemoryBitmap *this, char a2)
{
  CSystemMemoryBitmap::~CSystemMemoryBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
