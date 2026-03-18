/*
 * XREFs of ??_GCGlobalSurfaceManager@@MEAAPEAXI@Z @ 0x1801B6F70
 * Callers:
 *     ??_ECGlobalSurfaceManager@@OBA@EAAPEAXI@Z @ 0x18011B8B0 (--_ECGlobalSurfaceManager@@OBA@EAAPEAXI@Z.c)
 *     ??_ECGlobalSurfaceManager@@OJI@EAAPEAXI@Z @ 0x18011B8D0 (--_ECGlobalSurfaceManager@@OJI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x1801B6D08 (--1CGlobalSurfaceManager@@MEAA@XZ.c)
 */

CGlobalSurfaceManager *__fastcall CGlobalSurfaceManager::`scalar deleting destructor'(
        CGlobalSurfaceManager *this,
        char a2)
{
  CGlobalSurfaceManager::~CGlobalSurfaceManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
