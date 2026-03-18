/*
 * XREFs of ??_ECD2DInk@@MEAAPEAXI@Z @ 0x18028D390
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??1CD2DInk@@MEAA@XZ @ 0x18028D2D8 (--1CD2DInk@@MEAA@XZ.c)
 */

CD2DInk *__fastcall CD2DInk::`vector deleting destructor'(CD2DInk *this, char a2)
{
  CD2DInk::~CD2DInk(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
