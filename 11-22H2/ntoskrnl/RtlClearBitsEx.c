/*
 * XREFs of RtlClearBitsEx @ 0x14028BA00
 * Callers:
 *     RtlpHpFixedVsFree @ 0x1402018E0 (RtlpHpFixedVsFree.c)
 *     MiMakeSystemRangeAvailable @ 0x140212AB8 (MiMakeSystemRangeAvailable.c)
 *     MiMoveDirtyBitsToPfns @ 0x1402858F0 (MiMoveDirtyBitsToPfns.c)
 *     MiClearVadCellBits @ 0x14028A9B0 (MiClearVadCellBits.c)
 *     MiUpdateLargePageBitMap @ 0x1402E890C (MiUpdateLargePageBitMap.c)
 *     RtlFindSetBitsAndClearEx @ 0x14034A090 (RtlFindSetBitsAndClearEx.c)
 *     ExpSaPageGroupFreeMemory @ 0x14035C544 (ExpSaPageGroupFreeMemory.c)
 *     MiExtendDynamicBitMap @ 0x1403AA370 (MiExtendDynamicBitMap.c)
 *     IopAddPageRangeToPageMaps @ 0x1405520EC (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x1405537D4 (IopRemovePageFromPageMap.c)
 *     RtlShiftLeftBitMapEx @ 0x1405A9310 (RtlShiftLeftBitMapEx.c)
 *     MiHotRemoveHugeRange @ 0x140620144 (MiHotRemoveHugeRange.c)
 *     MiMirrorOmitPagesFromCopy @ 0x1406272F8 (MiMirrorOmitPagesFromCopy.c)
 *     MiMarkSystemVaAllocated @ 0x140637320 (MiMarkSystemVaAllocated.c)
 *     MiActOnPartitionNodePages @ 0x1406580F0 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x140658B8C (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x14065928C (MiClearRangeInPartitionTree.c)
 *     MiObtainRelocationBits @ 0x1406AAE04 (MiObtainRelocationBits.c)
 *     MiCopyToCfgBitMap @ 0x1406B1380 (MiCopyToCfgBitMap.c)
 *     MiReturnImageBase @ 0x140721D10 (MiReturnImageBase.c)
 *     MiFreeToSubAllocatedRegion @ 0x14076F194 (MiFreeToSubAllocatedRegion.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14094DFC4 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiActOnMirrorBitmap @ 0x140A2F068 (MiActOnMirrorBitmap.c)
 *     MiMarkRetpolineBits @ 0x140A344F0 (MiMarkRetpolineBits.c)
 *     MiApplyHotPatchToDriverDataPages @ 0x140A34F98 (MiApplyHotPatchToDriverDataPages.c)
 *     MiDeleteAweInfoPages @ 0x140A41B00 (MiDeleteAweInfoPages.c)
 *     MiInitializeDriverImages @ 0x140B497A0 (MiInitializeDriverImages.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
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
      v7 = ~(byte_140018F40[a3] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ &= byte_140018F40[v4];
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
      v7 = byte_140016E48[v6];
      goto LABEL_4;
    }
  }
}
