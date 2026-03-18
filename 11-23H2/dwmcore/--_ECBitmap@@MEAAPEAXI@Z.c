/*
 * XREFs of ??_ECBitmap@@MEAAPEAXI@Z @ 0x1802811F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBitmap@@MEAA@XZ @ 0x1800288C0 (--1CBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CBitmap *__fastcall CBitmap::`vector deleting destructor'(CBitmap *this, char a2)
{
  CBitmap::~CBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
