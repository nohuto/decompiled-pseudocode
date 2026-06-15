/*
 * XREFs of ??_ECVolumeControlBase@@MEAAPEAXI@Z @ 0x1801270A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1CVolumeControlBase@@MEAA@XZ @ 0x180126F28 (--1CVolumeControlBase@@MEAA@XZ.c)
 */

CVolumeControlBase *__fastcall CVolumeControlBase::`vector deleting destructor'(CVolumeControlBase *this, char a2)
{
  CVolumeControlBase::~CVolumeControlBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
