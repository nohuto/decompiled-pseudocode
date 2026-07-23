/*
 * XREFs of sub_1406A6F00 @ 0x1406A6F00
 * Callers:
 *     sub_1406A633C @ 0x1406A633C (sub_1406A633C.c)
 *     sub_1406A6ECC @ 0x1406A6ECC (sub_1406A6ECC.c)
 * Callees:
 *     PsChargeProcessPagedPoolQuota @ 0x1406A6F60 (PsChargeProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_1406A6F00(__int64 a1, SIZE_T a2)
{
  PVOID PoolWithTag; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2, 0x6274624Fu);
  if ( PoolWithTag && a1 && (int)PsChargeProcessPagedPoolQuota(a1, a2) < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0x6274624Fu);
    return 0LL;
  }
  return PoolWithTag;
}
