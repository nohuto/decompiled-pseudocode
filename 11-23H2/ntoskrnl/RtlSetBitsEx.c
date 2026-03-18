/*
 * XREFs of RtlSetBitsEx @ 0x14028B3C0
 * Callers:
 *     RtlFindClearBitsAndSetEx @ 0x140210350 (RtlFindClearBitsAndSetEx.c)
 *     MiObtainDynamicVa @ 0x140211044 (MiObtainDynamicVa.c)
 *     MiUpdateLargePageBitMap @ 0x1402E890C (MiUpdateLargePageBitMap.c)
 *     RtlpHpFixedHeapCreate @ 0x140362E88 (RtlpHpFixedHeapCreate.c)
 *     IopAddPageRangeToPageMaps @ 0x14055204C (IopAddPageRangeToPageMaps.c)
 *     MiPhysicalMemoryEverRemoved @ 0x14061BC60 (MiPhysicalMemoryEverRemoved.c)
 *     MiAddPartitionHugeRange @ 0x14061F204 (MiAddPartitionHugeRange.c)
 *     MiMirrorAddPagesToBrownList @ 0x140626B0C (MiMirrorAddPagesToBrownList.c)
 *     MiMarkSystemVaAllocated @ 0x1406372B0 (MiMarkSystemVaAllocated.c)
 *     MiAddRangeToPartitionTree @ 0x140658B1C (MiAddRangeToPartitionTree.c)
 *     MiObtainRelocationBits @ 0x1406AAE04 (MiObtainRelocationBits.c)
 *     MiCopyToCfgBitMap @ 0x1406B1380 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406B19D0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiSetVadBits @ 0x1406FAA20 (MiSetVadBits.c)
 *     MiFreeInitializationCode @ 0x140703AFC (MiFreeInitializationCode.c)
 *     MiActOnMirrorBitmap @ 0x140A2EFF8 (MiActOnMirrorBitmap.c)
 *     MiMarkRetpolineBits @ 0x140A34480 (MiMarkRetpolineBits.c)
 *     MiIdentifyImageDiscardablePages @ 0x140A37674 (MiIdentifyImageDiscardablePages.c)
 *     MiIdentifyPatchImageDataPages @ 0x140A3777C (MiIdentifyPatchImageDataPages.c)
 *     MiPatchDataPagesCallback @ 0x140A3A730 (MiPatchDataPagesCallback.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x140A9BF90 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x140A9C160 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
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
      v7 = byte_140018F88[a3] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ |= byte_140016E88[v4];
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
      v7 = byte_140018F88[v6];
      goto LABEL_4;
    }
  }
}
