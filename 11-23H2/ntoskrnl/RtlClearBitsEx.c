/*
 * XREFs of RtlClearBitsEx @ 0x14028BDB0
 * Callers:
 *     RtlpHpFixedVsFree @ 0x1402018E0 (RtlpHpFixedVsFree.c)
 *     MiMakeSystemRangeAvailable @ 0x140212A98 (MiMakeSystemRangeAvailable.c)
 *     MiMoveDirtyBitsToPfns @ 0x140285CA0 (MiMoveDirtyBitsToPfns.c)
 *     MiClearVadCellBits @ 0x14028AD60 (MiClearVadCellBits.c)
 *     MiUpdateLargePageBitMap @ 0x1402E8B9C (MiUpdateLargePageBitMap.c)
 *     RtlFindSetBitsAndClearEx @ 0x14034A830 (RtlFindSetBitsAndClearEx.c)
 *     ExpSaPageGroupFreeMemory @ 0x14035CD34 (ExpSaPageGroupFreeMemory.c)
 *     MiExtendDynamicBitMap @ 0x1403AAC40 (MiExtendDynamicBitMap.c)
 *     IopAddPageRangeToPageMaps @ 0x14055270C (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x140553DF4 (IopRemovePageFromPageMap.c)
 *     RtlShiftLeftBitMapEx @ 0x1405A97F0 (RtlShiftLeftBitMapEx.c)
 *     MiHotRemoveHugeRange @ 0x140620624 (MiHotRemoveHugeRange.c)
 *     MiMirrorOmitPagesFromCopy @ 0x1406277D8 (MiMirrorOmitPagesFromCopy.c)
 *     MiMarkSystemVaAllocated @ 0x140637800 (MiMarkSystemVaAllocated.c)
 *     MiActOnPartitionNodePages @ 0x1406585D0 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14065906C (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x14065976C (MiClearRangeInPartitionTree.c)
 *     MiObtainRelocationBits @ 0x1406AAE04 (MiObtainRelocationBits.c)
 *     MiCopyToCfgBitMap @ 0x1406B13B0 (MiCopyToCfgBitMap.c)
 *     MiReturnImageBase @ 0x140721EA0 (MiReturnImageBase.c)
 *     MiFreeToSubAllocatedRegion @ 0x14076EE74 (MiFreeToSubAllocatedRegion.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14094E114 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiActOnMirrorBitmap @ 0x140A2F2A8 (MiActOnMirrorBitmap.c)
 *     MiMarkRetpolineBits @ 0x140A34730 (MiMarkRetpolineBits.c)
 *     MiApplyHotPatchToDriverDataPages @ 0x140A351D8 (MiApplyHotPatchToDriverDataPages.c)
 *     MiDeleteAweInfoPages @ 0x140A41D40 (MiDeleteAweInfoPages.c)
 *     MiInitializeDriverImages @ 0x140B460A0 (MiInitializeDriverImages.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall RtlClearBitsEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdx
  _BYTE *v5; // rsi
  unsigned __int64 v6; // rdi
  char v7; // al

  if ( a3 )
  {
    v4 = a2 & 7;
    v5 = (_BYTE *)(*(_QWORD *)(a1 + 8) + (a2 >> 3));
    v6 = a3;
    if ( v4 + a3 <= 8 )
    {
      v7 = ~(byte_140018F80[a3] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ &= byte_140018F80[v4];
      v6 = a3 - (unsigned int)(8 - v4);
    }
    if ( v6 > 8 )
    {
      memset(v5, 0, v6 >> 3);
      v5 += v6 >> 3;
      v6 &= 7u;
    }
    if ( v6 )
    {
      v7 = byte_140016E78[v6];
      goto LABEL_4;
    }
  }
}
