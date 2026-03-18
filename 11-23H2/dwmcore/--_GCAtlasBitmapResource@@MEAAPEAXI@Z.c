/*
 * XREFs of ??_GCAtlasBitmapResource@@MEAAPEAXI@Z @ 0x1800A4070
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAtlasBitmapResource@@MEAA@XZ @ 0x1800A40D0 (--1CAtlasBitmapResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CAtlasBitmapResource *__fastcall CAtlasBitmapResource::`scalar deleting destructor'(
        CAtlasBitmapResource *this,
        char a2)
{
  CAtlasBitmapResource::~CAtlasBitmapResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x70uLL);
  return this;
}
