/*
 * XREFs of ??_EGraphStreamingResourceManager@@UEAAPEAXI@Z @ 0x140038040
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1GraphStreamingResourceManager@@UEAA@XZ @ 0x140037FDE (--1GraphStreamingResourceManager@@UEAA@XZ.c)
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
