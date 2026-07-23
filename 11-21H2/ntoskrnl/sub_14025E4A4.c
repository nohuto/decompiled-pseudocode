/*
 * XREFs of sub_14025E4A4 @ 0x14025E4A4
 * Callers:
 *     sub_1402D1304 @ 0x1402D1304 (sub_1402D1304.c)
 * Callees:
 *     sub_140276AAC @ 0x140276AAC (sub_140276AAC.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14025E4A4(PVOID P, PVOID Object)
{
  char *PoolWithTag; // rbx

  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)1536, 0x30uLL, 0x65546343u);
  if ( PoolWithTag )
  {
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    *((_QWORD *)PoolWithTag + 1) = Object;
    *(_QWORD *)PoolWithTag = P;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_QWORD *)PoolWithTag + 4) = sub_14025E370;
    *((_QWORD *)PoolWithTag + 5) = PoolWithTag;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(PoolWithTag + 16), NormalWorkQueue);
    return 0LL;
  }
  else
  {
    sub_140276AAC(P);
    return 3221225626LL;
  }
}
