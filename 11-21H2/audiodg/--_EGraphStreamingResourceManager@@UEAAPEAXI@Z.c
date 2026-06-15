/*
 * XREFs of ??_EGraphStreamingResourceManager@@UEAAPEAXI@Z @ 0x14002BEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1GraphStreamingResourceManager@@UEAA@XZ @ 0x14002BEDC (--1GraphStreamingResourceManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

GraphStreamingResourceManager *__fastcall GraphStreamingResourceManager::`vector deleting destructor'(
        GraphStreamingResourceManager *this,
        char a2)
{
  GraphStreamingResourceManager::~GraphStreamingResourceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
