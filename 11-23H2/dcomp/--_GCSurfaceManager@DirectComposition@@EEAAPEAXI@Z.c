/*
 * XREFs of ??_GCSurfaceManager@DirectComposition@@EEAAPEAXI@Z @ 0x18001B250
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CSurfaceManager@DirectComposition@@EEAA@XZ @ 0x18001B464 (--1CSurfaceManager@DirectComposition@@EEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

DirectComposition::CSurfaceManager *__fastcall DirectComposition::CSurfaceManager::`scalar deleting destructor'(
        DirectComposition::CSurfaceManager *this,
        char a2)
{
  DirectComposition::CSurfaceManager::~CSurfaceManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x178uLL);
    else
      operator delete(this);
  }
  return this;
}
