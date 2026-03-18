/*
 * XREFs of ??_ECD3DResource@@MEAAPEAXI@Z @ 0x180287B80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD3DResource@@MEAA@XZ @ 0x1800B9F1C (--1CD3DResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CD3DResource *__fastcall CD3DResource::`vector deleting destructor'(CD3DResource *this, char a2)
{
  CD3DResource::~CD3DResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
