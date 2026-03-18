/*
 * XREFs of ??_GCPathData@@MEAAPEAXI@Z @ 0x1800913F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPathData@@MEAA@XZ @ 0x18009142C (--1CPathData@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CPathData *__fastcall CPathData::`scalar deleting destructor'(CPathData *this, char a2)
{
  CPathData::~CPathData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x50uLL);
  return this;
}
