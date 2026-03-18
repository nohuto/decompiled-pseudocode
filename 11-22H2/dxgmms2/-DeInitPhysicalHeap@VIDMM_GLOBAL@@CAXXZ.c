/*
 * XREFs of ?DeInitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ @ 0x1C00E10D8
 * Callers:
 *     ?InitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ @ 0x1C00BE1E8 (-InitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ.c)
 *     ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x1C00E0FB0 (-DeInitGlobals@VIDMM_GLOBAL@@SAXXZ.c)
 * Callees:
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C002D79C (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 */

void VIDMM_GLOBAL::DeInitPhysicalHeap(void)
{
  if ( VIDMM_GLOBAL::m_pPhysicalPool )
  {
    VIDMM_LINEAR_POOL::`scalar deleting destructor'((VIDMM_LINEAR_POOL *)VIDMM_GLOBAL::m_pPhysicalPool);
    VIDMM_GLOBAL::m_pPhysicalPool = 0LL;
  }
  if ( VIDMM_GLOBAL::m_PhysicalBlock )
  {
    MmFreeContiguousMemorySpecifyCache(VIDMM_GLOBAL::m_PhysicalBlock, VIDMM_GLOBAL::m_PhysicalBlockSize, MmCached);
    VIDMM_GLOBAL::m_PhysicalBlock = 0LL;
  }
}
