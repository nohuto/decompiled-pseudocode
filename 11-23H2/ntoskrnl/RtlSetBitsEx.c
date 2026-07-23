/*
 * XREFs of RtlSetBitsEx @ 0x14028B650
 * Callers:
 *     RtlFindClearBitsAndSetEx @ 0x140210350 (RtlFindClearBitsAndSetEx.c)
 *     MiObtainDynamicVa @ 0x140211044 (MiObtainDynamicVa.c)
 *     MiUpdateLargePageBitMap @ 0x1402E8B9C (MiUpdateLargePageBitMap.c)
 *     RtlpHpFixedHeapCreate @ 0x140363028 (RtlpHpFixedHeapCreate.c)
 *     IopAddPageRangeToPageMaps @ 0x14055270C (IopAddPageRangeToPageMaps.c)
 *     MiPhysicalMemoryEverRemoved @ 0x14061C1B0 (MiPhysicalMemoryEverRemoved.c)
 *     MiAddPartitionHugeRange @ 0x14061F754 (MiAddPartitionHugeRange.c)
 *     MiMirrorAddPagesToBrownList @ 0x14062705C (MiMirrorAddPagesToBrownList.c)
 *     MiMarkSystemVaAllocated @ 0x140637800 (MiMarkSystemVaAllocated.c)
 *     MiAddRangeToPartitionTree @ 0x14065906C (MiAddRangeToPartitionTree.c)
 *     MiObtainRelocationBits @ 0x1406AAE04 (MiObtainRelocationBits.c)
 *     MiCopyToCfgBitMap @ 0x1406B13B0 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406B1A00 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiSetVadBits @ 0x1406FAC30 (MiSetVadBits.c)
 *     MiFreeInitializationCode @ 0x140703D0C (MiFreeInitializationCode.c)
 *     MiActOnMirrorBitmap @ 0x140A2F2A8 (MiActOnMirrorBitmap.c)
 *     MiMarkRetpolineBits @ 0x140A34730 (MiMarkRetpolineBits.c)
 *     MiIdentifyImageDiscardablePages @ 0x140A37924 (MiIdentifyImageDiscardablePages.c)
 *     MiIdentifyPatchImageDataPages @ 0x140A37A2C (MiIdentifyPatchImageDataPages.c)
 *     MiPatchDataPagesCallback @ 0x140A3A9E0 (MiPatchDataPagesCallback.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x140A9BE00 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x140A9BFD0 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall RtlSetBitsEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
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
      v7 = byte_140018F80[a3] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ |= byte_140016E78[v4];
      v6 = a3 - (unsigned int)(8 - v4);
    }
    if ( v6 > 8 )
    {
      memset(v5, 255, v6 >> 3);
      v5 += v6 >> 3;
      v6 &= 7u;
    }
    if ( v6 )
    {
      v7 = byte_140018F80[v6];
      goto LABEL_4;
    }
  }
}
