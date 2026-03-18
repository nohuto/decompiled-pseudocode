/*
 * XREFs of CmpReleaseGlobalQuota @ 0x14079CF18
 * Callers:
 *     CmpAllocateForNonPagedHive @ 0x14053F520 (CmpAllocateForNonPagedHive.c)
 *     HvFreeHivePartial @ 0x140689900 (HvFreeHivePartial.c)
 *     CmpAllocate @ 0x14068B0E0 (CmpAllocate.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14068C544 (HvpRemapAndEnlistHiveBins.c)
 *     HvpAddBin @ 0x14068C820 (HvpAddBin.c)
 *     CmpDeleteHive @ 0x1406BBAD8 (CmpDeleteHive.c)
 *     HvHiveCleanup @ 0x14079B518 (HvHiveCleanup.c)
 *     CmpFree @ 0x14079CEF0 (CmpFree.c)
 *     HvpDropPagedBins @ 0x14083D244 (HvpDropPagedBins.c)
 *     HvpAllocateNonPagedBin @ 0x140924648 (HvpAllocateNonPagedBin.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpReleaseGlobalQuota(unsigned int a1)
{
  __int64 result; // rax

  result = a1;
  if ( a1 > (unsigned __int64)CmpGlobalQuotaUsed )
    KeBugCheckEx(0x51u, 0xDuLL, 1uLL, 0LL, 0LL);
  _InterlockedExchangeAdd((volatile signed __int32 *)&CmpGlobalQuotaUsed, -a1);
  return result;
}
