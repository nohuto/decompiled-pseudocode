/*
 * XREFs of ??1KAcquireSpinLock@@QEAA@XZ @ 0x1C0004980
 * Callers:
 *     NdisAllocateNetBufferMdlAndData @ 0x1C0003A40 (NdisAllocateNetBufferMdlAndData.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0004090 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateCloneNetBufferList @ 0x1C0004450 (NdisAllocateCloneNetBufferList.c)
 *     ndisFreeToNPagedPool @ 0x1C00048F0 (ndisFreeToNPagedPool.c)
 *     NdisFreeNetBufferListPool @ 0x1C0017450 (NdisFreeNetBufferListPool.c)
 *     NdisAllocateNetBufferListPool @ 0x1C0021140 (NdisAllocateNetBufferListPool.c)
 *     ?ndisPplAllocate@@YAPEAXPEAUPPL_POOL_HANDLE__@@KPEAK@Z @ 0x1C0027AC4 (-ndisPplAllocate@@YAPEAXPEAUPPL_POOL_HANDLE__@@KPEAK@Z.c)
 *     ndisAllocateFromLookasideList @ 0x1C0027C18 (ndisAllocateFromLookasideList.c)
 *     NdisAllocateNetBufferPool @ 0x1C00320C0 (NdisAllocateNetBufferPool.c)
 *     NdisFreeNetBufferPool @ 0x1C00AE6F0 (NdisFreeNetBufferPool.c)
 *     ?ndisCaptureStackTrace@@YAKK@Z @ 0x1C00C0064 (-ndisCaptureStackTrace@@YAKK@Z.c)
 *     ?ndisReleaseStackTrace@@YAXK@Z @ 0x1C00C0364 (-ndisReleaseStackTrace@@YAXK@Z.c)
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
