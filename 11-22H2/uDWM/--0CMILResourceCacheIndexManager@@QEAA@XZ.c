/*
 * XREFs of ??0CMILResourceCacheIndexManager@@QEAA@XZ @ 0x18004EB84
 * Callers:
 *     _dynamic_initializer_for__g_ResourceCacheIndexManager__ @ 0x180001FC0 (_dynamic_initializer_for__g_ResourceCacheIndexManager__.c)
 * Callees:
 *     ?Init@CCriticalSection@@QEAAJXZ @ 0x18004F3E0 (-Init@CCriticalSection@@QEAAJXZ.c)
 */

CMILResourceCacheIndexManager *__fastcall CMILResourceCacheIndexManager::CMILResourceCacheIndexManager(
        CMILResourceCacheIndexManager *this)
{
  byte_180148488 = 0;
  if ( (int)CCriticalSection::Init(&g_ResourceCacheIndexManager) >= 0 )
  {
    BitMapBuffer = 0;
    RtlInitializeBitMap(&BitMapHeader, &BitMapBuffer, 0x20u);
    RtlSetBits(&BitMapHeader, 0, 1u);
  }
  return (CMILResourceCacheIndexManager *)&g_ResourceCacheIndexManager;
}
