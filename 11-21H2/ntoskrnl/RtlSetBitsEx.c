/*
 * XREFs of RtlSetBitsEx @ 0x14030B740
 * Callers:
 *     MiObtainDynamicVa @ 0x14026B354 (MiObtainDynamicVa.c)
 *     RtlFindClearBitsAndSetEx @ 0x14029E780 (RtlFindClearBitsAndSetEx.c)
 *     MiUpdateLargePageBitMap @ 0x1402C38D0 (MiUpdateLargePageBitMap.c)
 *     RtlpHpFixedHeapCreate @ 0x14036FD8C (RtlpHpFixedHeapCreate.c)
 *     MiMirrorAddPagesToBrownList @ 0x14038A790 (MiMirrorAddPagesToBrownList.c)
 *     IopAddPageRangeToPageMaps @ 0x140553E38 (IopAddPageRangeToPageMaps.c)
 *     MiPhysicalMemoryEverRemoved @ 0x140583778 (MiPhysicalMemoryEverRemoved.c)
 *     MiAddPartitionHugeRange @ 0x14058617C (MiAddPartitionHugeRange.c)
 *     MiMarkSystemVaAllocated @ 0x140599050 (MiMarkSystemVaAllocated.c)
 *     MiAddRangeToPartitionTree @ 0x1405BD66C (MiAddRangeToPartitionTree.c)
 *     MiCopyToCfgBitMap @ 0x140700460 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140700A40 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiObtainRelocationBits @ 0x1407095A8 (MiObtainRelocationBits.c)
 *     MiSetVadBits @ 0x1407B8A60 (MiSetVadBits.c)
 *     MiActOnMirrorBitmap @ 0x1407FD674 (MiActOnMirrorBitmap.c)
 *     MiMarkRetpolineBits @ 0x140970C6C (MiMarkRetpolineBits.c)
 *     MiIdentifyImageDiscardablePages @ 0x14097389C (MiIdentifyImageDiscardablePages.c)
 *     MiIdentifyPatchImageDataPages @ 0x1409739A4 (MiIdentifyPatchImageDataPages.c)
 *     MiPatchDataPagesCallback @ 0x1409766B0 (MiPatchDataPagesCallback.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x140A67430 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x140A67608 (IopLiveDumpPopulateBitmapForDump.c)
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
      v7 = byte_140018DF0[a3] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ |= byte_140015C40[v4];
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
      v7 = byte_140018DF0[v6];
      goto LABEL_4;
    }
  }
}
