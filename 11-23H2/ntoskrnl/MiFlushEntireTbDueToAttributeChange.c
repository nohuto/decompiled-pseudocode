/*
 * XREFs of MiFlushEntireTbDueToAttributeChange @ 0x14036F59C
 * Callers:
 *     MiChangePageAttributeContiguous @ 0x14021A6A0 (MiChangePageAttributeContiguous.c)
 *     MiFlushCacheForAttributeChange @ 0x14021AB84 (MiFlushCacheForAttributeChange.c)
 *     MiChangePageAttributeBatch @ 0x14021C9B4 (MiChangePageAttributeBatch.c)
 *     MiCopyPage @ 0x140283E10 (MiCopyPage.c)
 *     MiValidateInPage @ 0x1402DC480 (MiValidateInPage.c)
 *     MiReferenceIoPages @ 0x140336500 (MiReferenceIoPages.c)
 *     MiCombiningInProgress @ 0x14036F23C (MiCombiningInProgress.c)
 *     MiChangePageAttribute @ 0x14036F3BC (MiChangePageAttribute.c)
 *     MiRemovePhysicalMemoryBatchComplete @ 0x14061BF84 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiDeleteStaleCacheMaps @ 0x14062D9D0 (MiDeleteStaleCacheMaps.c)
 *     MiMakeIoRangePermanent @ 0x14062E45C (MiMakeIoRangePermanent.c)
 *     MiInsertPartitionPages @ 0x14065A480 (MiInsertPartitionPages.c)
 *     MiValidateSectionCreate @ 0x1406ABE8C (MiValidateSectionCreate.c)
 *     MiRemovePhysicalMemory @ 0x140A2CC4C (MiRemovePhysicalMemory.c)
 *     MiInitializeCacheFlushing @ 0x140B6A51C (MiInitializeCacheFlushing.c)
 * Callees:
 *     KeFlushTb @ 0x140279970 (KeFlushTb.c)
 *     VslpEnterIumSecureMode @ 0x14033FCF0 (VslpEnterIumSecureMode.c)
 *     HvcallFastExtended @ 0x1403CC1B0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 */

__int64 MiFlushEntireTbDueToAttributeChange()
{
  _BYTE v1[112]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v2[4]; // [rsp+B0h] [rbp-38h] BYREF

  ++dword_140C65B00;
  if ( VslVsmEnabled )
  {
    if ( (HvlEnlightenments & 0x4000000) != 0 )
    {
      v2[0] = 0LL;
      v2[2] = 0LL;
      v2[1] = 531LL;
      HvcallFastExtended(65538, (unsigned int)v2, 24, 0, 0);
    }
    else
    {
      memset(v1, 0, 0x68uLL);
      VslpEnterIumSecureMode(3u, 0, 0, (__int64)v1);
    }
  }
  return KeFlushTb(4u, 2u);
}
