/*
 * XREFs of ??1KAcquireSpinLock@@QEAA@XZ @ 0x1C0001A30
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C0001180 (NdisAllocateCloneNetBufferList.c)
 *     ?ndisPplAllocate@@YAPEAXPEAUPPL_POOL_HANDLE__@@KPEAK@Z @ 0x1C0001828 (-ndisPplAllocate@@YAPEAXPEAUPPL_POOL_HANDLE__@@KPEAK@Z.c)
 *     ndisAllocateFromLookasideList @ 0x1C0001984 (ndisAllocateFromLookasideList.c)
 *     NdisFreeNetBufferListPool @ 0x1C0015A40 (NdisFreeNetBufferListPool.c)
 *     NdisAllocateNetBufferListPool @ 0x1C001AA50 (NdisAllocateNetBufferListPool.c)
 *     NdisAllocateNetBufferPool @ 0x1C0031630 (NdisAllocateNetBufferPool.c)
 *     NdisFreeNetBufferPool @ 0x1C00B45D0 (NdisFreeNetBufferPool.c)
 *     ?ndisCaptureStackTrace@@YAKK@Z @ 0x1C00C4C34 (-ndisCaptureStackTrace@@YAKK@Z.c)
 *     ?ndisReleaseStackTrace@@YAXK@Z @ 0x1C00C4F50 (-ndisReleaseStackTrace@@YAXK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall KAcquireSpinLock::~KAcquireSpinLock(KAcquireSpinLock *this)
{
  if ( this->m_oldIrql != 0xFF )
  {
    KeReleaseSpinLock(&this->m_lock->m_lock, this->m_oldIrql);
    this->m_oldIrql = -1;
  }
}
