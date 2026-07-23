/*
 * XREFs of ExAllocateHeapPages @ 0x1403B9D9C
 * Callers:
 *     ExpInitializePoolTrackerTable @ 0x140389D54 (ExpInitializePoolTrackerTable.c)
 *     ExpResizeBigPageTable @ 0x1403B9A3C (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x1406074A0 (ExGetBigPoolInfo.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140608088 (ExpInsertPoolTrackerExpansion.c)
 * Callees:
 *     RtlpHpAllocateHeap @ 0x14024D4F0 (RtlpHpAllocateHeap.c)
 *     RtlpHpSegAlloc @ 0x14024DC10 (RtlpHpSegAlloc.c)
 *     ExGetHeapFromType @ 0x1403BA59C (ExGetHeapFromType.c)
 */

char *ExAllocateHeapPages()
{
  __int64 HeapFromType; // rax
  int v1; // r8d
  __int16 v2; // r9
  unsigned __int64 v3; // r10
  unsigned int v5; // [rsp+20h] [rbp-18h]

  HeapFromType = ExGetHeapFromType(512LL, 0x80000000LL, 0LL);
  if ( v3 >= *(unsigned int *)(HeapFromType + 528) )
    return RtlpHpAllocateHeap(HeapFromType, v3, v1, v2);
  else
    return (char *)RtlpHpSegAlloc(
                     HeapFromType + 320 + (*(unsigned int *)(HeapFromType + 336) < v3 ? 0xC0 : 0),
                     v3,
                     v3,
                     v3,
                     v1 & v5);
}
