/*
 * XREFs of PplpLazyInitializeLookasideList @ 0x1C0027AF4
 * Callers:
 *     NdisMAllocateNetBufferSGList @ 0x1C00277F0 (NdisMAllocateNetBufferSGList.c)
 *     NdisMFreeNetBufferSGList @ 0x1C0027DE0 (NdisMFreeNetBufferSGList.c)
 *     PplpRetrieveListIndex @ 0x1C00CE7BC (PplpRetrieveListIndex.c)
 * Callees:
 *     <none>
 */

void __fastcall PplpLazyInitializeLookasideList(__int64 a1, __int64 a2)
{
  KIRQL v4; // bp

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 104));
  if ( !*(_BYTE *)(a2 + 112) )
  {
    ExInitializeLookasideListEx(
      (PLOOKASIDE_LIST_EX)a2,
      PplpGenericAllocateFunction,
      PplpGenericFreeFunction,
      *(POOL_TYPE *)(a1 + 24),
      *(_DWORD *)(a1 + 4),
      *(_QWORD *)(a1 + 16),
      *(_DWORD *)(a1 + 8),
      *(_WORD *)(a1 + 28));
    *(_BYTE *)(a2 + 112) = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 104), v4);
}
