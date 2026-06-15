/*
 * XREFs of ??_GCVolumeStrip@@MEAAPEAXI@Z @ 0x180054FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVolumeStrip@@MEAA@XZ @ 0x18005502C (--1CVolumeStrip@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

CVolumeStrip *__fastcall CVolumeStrip::`scalar deleting destructor'(CVolumeStrip *this, char a2)
{
  CVolumeStrip::~CVolumeStrip(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xC0uLL);
  return this;
}
