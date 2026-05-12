/*
 * XREFs of RaidAdjustDeferredQueueDepth @ 0x1C003F144
 * Callers:
 *     RaidInitializeDeferredQueue @ 0x1C003F258 (RaidInitializeDeferredQueue.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 */

__int64 __fastcall RaidAdjustDeferredQueueDepth(union _SLIST_HEADER *a1)
{
  int v2; // edi
  __int64 Pool; // rax
  int Alignment_low; // edx

  if ( LOWORD(a1->Alignment) >= 0xAu )
    return 0LL;
  v2 = 0;
  while ( 1 )
  {
    Pool = RaidAllocatePool(64LL, *((unsigned __int16 *)&a1->HeaderX64 + 1), 1715757394LL, a1[2].Region);
    if ( !Pool )
      break;
    *(_DWORD *)(Pool + 16) = 134684675;
    ExpInterlockedPushEntrySList(a1 + 5, (PSLIST_ENTRY)Pool);
    Alignment_low = LOWORD(a1->Alignment);
    if ( ++v2 >= (unsigned int)(10 - Alignment_low) )
    {
      LOWORD(a1->Alignment) = v2 + Alignment_low;
      return 0LL;
    }
  }
  LOWORD(a1->Alignment) += v2;
  return 3221225495LL;
}
