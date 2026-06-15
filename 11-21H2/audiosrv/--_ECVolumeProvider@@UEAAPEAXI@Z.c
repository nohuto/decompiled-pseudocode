/*
 * XREFs of ??_ECVolumeProvider@@UEAAPEAXI@Z @ 0x1800D1050
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CVolumeProvider@@UEAA@XZ @ 0x1800D0F98 (--1CVolumeProvider@@UEAA@XZ.c)
 */

CVolumeProvider *__fastcall CVolumeProvider::`vector deleting destructor'(CVolumeProvider *this, char a2)
{
  CVolumeProvider::~CVolumeProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
