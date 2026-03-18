/*
 * XREFs of MiReplenishTransitionPageHeatList @ 0x14065485C
 * Callers:
 *     MmAccessFault @ 0x140235370 (MmAccessFault.c)
 *     MmCheckCachedPageStates @ 0x140265320 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x1402CD7D0 (MmCopyToCachedPage.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428EF0 (RtlpInterlockedPushEntrySList.c)
 */

void MiReplenishTransitionPageHeatList()
{
  struct _SLIST_ENTRY *Pool; // rax

  while ( LOWORD(stru_140C682E0.Alignment) < 0x40u )
  {
    Pool = (struct _SLIST_ENTRY *)MiAllocatePool(64, 0x90uLL, 0x6C486D4Du);
    if ( !Pool )
    {
      _InterlockedExchange(&dword_140C682F0, 32);
      return;
    }
    *((_DWORD *)&Pool->Next + 2) = 16;
    RtlpInterlockedPushEntrySList(&stru_140C682E0, Pool);
  }
}
