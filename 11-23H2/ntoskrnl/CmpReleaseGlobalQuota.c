/*
 * XREFs of CmpReleaseGlobalQuota @ 0x140709928
 * Callers:
 *     CmpAllocateForNonPagedHive @ 0x140616510 (CmpAllocateForNonPagedHive.c)
 *     CmpAllocate @ 0x140702F30 (CmpAllocate.c)
 *     HvFreeHivePartial @ 0x1407071A8 (HvFreeHivePartial.c)
 *     HvHiveCleanup @ 0x1407096D0 (HvHiveCleanup.c)
 *     CmpFree @ 0x140709900 (CmpFree.c)
 *     CmpDeleteHive @ 0x14074E6D4 (CmpDeleteHive.c)
 *     HvpAddBin @ 0x14074F174 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14074F794 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140827034 (HvpDropPagedBins.c)
 *     HvpAllocateNonPagedBin @ 0x140A2A17C (HvpAllocateNonPagedBin.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
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
