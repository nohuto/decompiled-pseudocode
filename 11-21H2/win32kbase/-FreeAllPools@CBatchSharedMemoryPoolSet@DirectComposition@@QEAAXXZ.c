/*
 * XREFs of ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C000C6D8
 * Callers:
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C000C784 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C009549C (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ??1CBatchSharedMemoryPool@DirectComposition@@QEAA@XZ @ 0x1C000C728 (--1CBatchSharedMemoryPool@DirectComposition@@QEAA@XZ.c)
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C00135EC (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools(
        DirectComposition::CBatchSharedMemoryPool **this)
{
  DirectComposition::CBatchSharedMemoryPoolSet *v2; // rbx

  while ( 1 )
  {
    v2 = *this;
    if ( *this == (DirectComposition::CBatchSharedMemoryPool *)this )
      break;
    DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(*this);
    if ( v2 )
    {
      DirectComposition::CBatchSharedMemoryPool::~CBatchSharedMemoryPool(v2);
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v2);
    }
  }
}
