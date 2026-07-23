/*
 * XREFs of EtwpAllocatePmcData @ 0x1409E34D8
 * Callers:
 *     EtwpUpdatePmcCounters @ 0x1409E5008 (EtwpUpdatePmcCounters.c)
 *     EtwpUpdatePmcEvents @ 0x1409E5160 (EtwpUpdatePmcEvents.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x14033B230 (KeQueryMaximumProcessorCountEx.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAllocatePmcData(__int64 a1)
{
  ULONG MaximumProcessorCount; // eax
  __int64 *Pool2; // rbx
  __int64 v5; // rax

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  Pool2 = (__int64 *)ExAllocatePool2(64LL, 8 * MaximumProcessorCount + 24, 1484223557LL);
  if ( !Pool2 )
    return 3221225495LL;
  v5 = ExAllocatePool2(64LL, 4LL * *(unsigned int *)((char *)&NlsMbCodePageTag + 6), 1484223557LL);
  *Pool2 = v5;
  if ( !v5 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221225495LL;
  }
  *(_QWORD *)(a1 + 1016) = Pool2;
  return 0LL;
}
