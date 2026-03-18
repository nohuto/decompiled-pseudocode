/*
 * XREFs of ??_ECD2DResource@@MEAAPEAXI@Z @ 0x18028BB70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DResource@@MEAA@XZ @ 0x1800A1D94 (--1CD2DResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CD2DResource *__fastcall CD2DResource::`vector deleting destructor'(CD2DResource *this, char a2)
{
  CD2DResource::~CD2DResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
