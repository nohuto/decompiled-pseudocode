/*
 * XREFs of ExpAllocateTablePagedPoolNoZero @ 0x1407B0BB4
 * Callers:
 *     ExpAllocateLowLevelTable @ 0x1407B0B80 (ExpAllocateLowLevelTable.c)
 *     ExpAllocateTablePagedPool @ 0x1407B0C58 (ExpAllocateTablePagedPool.c)
 * Callees:
 *     PsChargeProcessPagedPoolQuota @ 0x1407B0C20 (PsChargeProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void *__fastcall ExpAllocateTablePagedPoolNoZero(__int64 a1, __int64 a2)
{
  void *Pool2; // rbx

  Pool2 = (void *)ExAllocatePool2(256LL, a2, 1651794511LL);
  if ( Pool2 && a1 && (int)PsChargeProcessPagedPoolQuota(a1) < 0 )
  {
    ExFreePoolWithTag(Pool2, 0x6274624Fu);
    return 0LL;
  }
  return Pool2;
}
