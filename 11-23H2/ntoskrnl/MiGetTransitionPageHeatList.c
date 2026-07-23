/*
 * XREFs of MiGetTransitionPageHeatList @ 0x14065442C
 * Callers:
 *     MiMakeTransitionHeatBatch @ 0x140654808 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140429240 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY MiGetTransitionPageHeatList()
{
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY v1; // rdx
  signed __int32 v2; // eax
  signed __int32 v3; // ett

  result = RtlpInterlockedPopEntrySList(&stru_140C682E0);
  v1 = result;
  if ( result )
  {
    HIDWORD(result->Next) = 0;
    LODWORD(result->Next) = 1;
  }
  else
  {
    v2 = dword_140C682F0;
    while ( v2 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange(&dword_140C682F0, v2 - 1, v2);
      if ( v3 == v2 )
        return v1;
    }
    return (PSLIST_ENTRY)-1LL;
  }
  return result;
}
