/*
 * XREFs of ??_ECVolumeHardware@@EEAAPEAXI@Z @ 0x1801270E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1CVolumeHardware@@EEAA@XZ @ 0x180126FD0 (--1CVolumeHardware@@EEAA@XZ.c)
 */

CVolumeHardware *__fastcall CVolumeHardware::`vector deleting destructor'(CVolumeHardware *this, char a2)
{
  CVolumeHardware::~CVolumeHardware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
