/*
 * XREFs of ??_GCDynamicPool@DirectComposition@@EEAAPEAXI@Z @ 0x180085990
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CDynamicPool@DirectComposition@@EEAA@XZ @ 0x1800859D4 (--1CDynamicPool@DirectComposition@@EEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

DirectComposition::CDynamicPool *__fastcall DirectComposition::CDynamicPool::`scalar deleting destructor'(
        DirectComposition::CDynamicPool *this,
        char a2)
{
  DirectComposition::CDynamicPool::~CDynamicPool(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x40uLL);
    else
      operator delete(this);
  }
  return this;
}
