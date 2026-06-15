/*
 * XREFs of ??_GCVolumeStrip@@MEAAPEAXI@Z @ 0x1800CFD80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CVolumeStrip@@MEAA@XZ @ 0x1800CFBD8 (--1CVolumeStrip@@MEAA@XZ.c)
 */

CVolumeStrip *__fastcall CVolumeStrip::`scalar deleting destructor'(CVolumeStrip *this, char a2)
{
  CVolumeStrip::~CVolumeStrip(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
