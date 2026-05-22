/*
 * XREFs of ??_GCAtlasSurfacePool@DirectComposition@@EEAAPEAXI@Z @ 0x180089D40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CAtlasSurfacePool@DirectComposition@@EEAA@XZ @ 0x18005E68C (--1CAtlasSurfacePool@DirectComposition@@EEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

DirectComposition::CAtlasSurfacePool *__fastcall DirectComposition::CAtlasSurfacePool::`scalar deleting destructor'(
        DirectComposition::CAtlasSurfacePool *this,
        char a2)
{
  DirectComposition::CAtlasSurfacePool::~CAtlasSurfacePool(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x108uLL);
    else
      operator delete(this);
  }
  return this;
}
