/*
 * XREFs of ??_ECDeviceTextureManager@DirectComposition@@UEAAPEAXI@Z @ 0x1800986B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1CDeviceTextureManager@DirectComposition@@UEAA@XZ @ 0x1800985B4 (--1CDeviceTextureManager@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CDeviceTextureManager *__fastcall DirectComposition::CDeviceTextureManager::`vector deleting destructor'(
        DirectComposition::CDeviceTextureManager *this,
        char a2)
{
  DirectComposition::CDeviceTextureManager::~CDeviceTextureManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
