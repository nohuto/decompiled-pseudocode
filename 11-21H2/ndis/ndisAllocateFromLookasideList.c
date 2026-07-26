/*
 * XREFs of ndisAllocateFromLookasideList @ 0x1C0027C18
 * Callers:
 *     ?ndisPplAllocate@@YAPEAXPEAUPPL_POOL_HANDLE__@@KPEAK@Z @ 0x1C0027AC4 (-ndisPplAllocate@@YAPEAXPEAUPPL_POOL_HANDLE__@@KPEAK@Z.c)
 * Callees:
 *     ??1KAcquireSpinLock@@QEAA@XZ @ 0x1C0004980 (--1KAcquireSpinLock@@QEAA@XZ.c)
 */

PSLIST_ENTRY __fastcall ndisAllocateFromLookasideList(__int64 a1)
{
  PSLIST_ENTRY v2; // rbx
  KIRQL v4; // al
  __int64 v5; // r8
  _SLIST_HEADER *v6; // rcx
  KAcquireSpinLock v7; // [rsp+20h] [rbp-18h] BYREF

  ++*(_DWORD *)(a1 + 20);
  v2 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(a1 + 192));
  if ( !v2 )
  {
    if ( ExQueryDepthSList(*(PSLIST_HEADER *)(a1 + 200)) < 0xAu )
      goto LABEL_3;
    v7.m_lock = (KSpinLockBase *)(a1 + 208);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 208));
    v5 = *(_QWORD *)(a1 + 192);
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
    *(_QWORD *)(a1 + 200) = v5;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 208), v4);
    v6 = *(_SLIST_HEADER **)(a1 + 192);
    v7.m_oldIrql = -1;
    v2 = ExpInterlockedPopEntrySList(v6);
    KAcquireSpinLock::~KAcquireSpinLock(&v7);
    if ( !v2 )
LABEL_3:
      ++*(_DWORD *)(a1 + 24);
  }
  return v2;
}
