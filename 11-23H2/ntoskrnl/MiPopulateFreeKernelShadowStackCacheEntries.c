/*
 * XREFs of MiPopulateFreeKernelShadowStackCacheEntries @ 0x1403A1110
 * Callers:
 *     MmCreatePartition @ 0x1403AC88C (MmCreatePartition.c)
 *     MiCreatePfnDatabase @ 0x140B450C8 (MiCreatePfnDatabase.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiPopulateFreeKernelShadowStackCacheEntries(_SLIST_HEADER *a1, _SLIST_ENTRY *a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  _SLIST_ENTRY *v4; // rbx
  _SLIST_HEADER *v5; // rdi
  PSLIST_ENTRY result; // rax

  v3 = (unsigned __int64)a2 + a3;
  v4 = a2;
  if ( a2 < (_SLIST_ENTRY *)((char *)a2 + a3) )
  {
    v5 = a1 + 29;
    do
    {
      result = RtlpInterlockedPushEntrySList(v5, v4);
      v4 += 2;
    }
    while ( (unsigned __int64)v4 < v3 );
  }
  return result;
}
