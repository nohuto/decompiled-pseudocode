/*
 * XREFs of CmpReleaseGlobalQuota @ 0x140709B38
 * Callers:
 *     CmpAllocateForNonPagedHive @ 0x140616A60 (CmpAllocateForNonPagedHive.c)
 *     CmpAllocate @ 0x140703140 (CmpAllocate.c)
 *     HvFreeHivePartial @ 0x1407073B8 (HvFreeHivePartial.c)
 *     HvHiveCleanup @ 0x1407098E0 (HvHiveCleanup.c)
 *     CmpFree @ 0x140709B10 (CmpFree.c)
 *     CmpDeleteHive @ 0x14074E8C4 (CmpDeleteHive.c)
 *     HvpAddBin @ 0x14074F364 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14074F984 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140827334 (HvpDropPagedBins.c)
 *     HvpAllocateNonPagedBin @ 0x140A2A42C (HvpAllocateNonPagedBin.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
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
