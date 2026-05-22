/*
 * XREFs of ??_ECBitmapInfo@DirectComposition@@MEAAPEAXI@Z @ 0x1800EA6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1CBitmapInfo@DirectComposition@@MEAA@XZ @ 0x1800EA658 (--1CBitmapInfo@DirectComposition@@MEAA@XZ.c)
 */

DirectComposition::CBitmapInfo *__fastcall DirectComposition::CBitmapInfo::`vector deleting destructor'(
        DirectComposition::CBitmapInfo *this,
        char a2)
{
  DirectComposition::CBitmapInfo::~CBitmapInfo(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
