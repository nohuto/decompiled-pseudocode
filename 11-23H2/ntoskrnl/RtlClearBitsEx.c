/*
 * XREFs of RtlClearBitsEx @ 0x14028BB20
 * Callers:
 *     RtlpHpFixedVsFree @ 0x1402018E0 (RtlpHpFixedVsFree.c)
 *     MiMakeSystemRangeAvailable @ 0x140212A98 (MiMakeSystemRangeAvailable.c)
 *     MiMoveDirtyBitsToPfns @ 0x140285A10 (MiMoveDirtyBitsToPfns.c)
 *     MiClearVadCellBits @ 0x14028AAD0 (MiClearVadCellBits.c)
 *     MiUpdateLargePageBitMap @ 0x1402E890C (MiUpdateLargePageBitMap.c)
 *     RtlFindSetBitsAndClearEx @ 0x14034A690 (RtlFindSetBitsAndClearEx.c)
 *     ExpSaPageGroupFreeMemory @ 0x14035CB94 (ExpSaPageGroupFreeMemory.c)
 *     MiExtendDynamicBitMap @ 0x1403AAA60 (MiExtendDynamicBitMap.c)
 *     IopAddPageRangeToPageMaps @ 0x14055204C (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x140553734 (IopRemovePageFromPageMap.c)
 *     RtlShiftLeftBitMapEx @ 0x1405A9280 (RtlShiftLeftBitMapEx.c)
 *     MiHotRemoveHugeRange @ 0x1406200D4 (MiHotRemoveHugeRange.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140627288 (MiMirrorOmitPagesFromCopy.c)
 *     MiMarkSystemVaAllocated @ 0x1406372B0 (MiMarkSystemVaAllocated.c)
 *     MiActOnPartitionNodePages @ 0x140658080 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x140658B1C (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x14065921C (MiClearRangeInPartitionTree.c)
 *     MiObtainRelocationBits @ 0x1406AAE04 (MiObtainRelocationBits.c)
 *     MiCopyToCfgBitMap @ 0x1406B1380 (MiCopyToCfgBitMap.c)
 *     MiReturnImageBase @ 0x140721CA0 (MiReturnImageBase.c)
 *     MiFreeToSubAllocatedRegion @ 0x14076EC84 (MiFreeToSubAllocatedRegion.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14094DF14 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiActOnMirrorBitmap @ 0x140A2EFF8 (MiActOnMirrorBitmap.c)
 *     MiMarkRetpolineBits @ 0x140A34480 (MiMarkRetpolineBits.c)
 *     MiApplyHotPatchToDriverDataPages @ 0x140A34F28 (MiApplyHotPatchToDriverDataPages.c)
 *     MiDeleteAweInfoPages @ 0x140A41A90 (MiDeleteAweInfoPages.c)
 *     MiInitializeDriverImages @ 0x140B460A0 (MiInitializeDriverImages.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
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
      v7 = ~(byte_140018F88[a3] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ &= byte_140018F88[v4];
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
      v7 = byte_140016E88[v6];
      goto LABEL_4;
    }
  }
}
