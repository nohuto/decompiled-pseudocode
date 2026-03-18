/*
 * XREFs of HalpDmaInitializeMasterAdapter @ 0x140B1D9DC
 * Callers:
 *     HalpDmaInit @ 0x140B1D878 (HalpDmaInit.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x140215660 (MmUnmapIoSpace.c)
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x1403B1F04 (HalpMmAllocCtxAlloc.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x1403CDDB0 (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140B1DB14 (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaFreeTranslationBuffer @ 0x140B4BF10 (HalpDmaFreeTranslationBuffer.c)
 */

__int64 __fastcall HalpDmaInitializeMasterAdapter(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7)
{
  unsigned int v8; // ebp
  SIZE_T v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 TranslationBuffer; // rax
  __int64 v17; // rax
  void *v18; // rbp
  __int64 v20; // rdx

  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 160) = a1 + 152;
  *(_QWORD *)(a1 + 152) = a1 + 152;
  v8 = (a6 + 31) & 0xFFFFFFE0;
  *(_QWORD *)(a1 + 176) = a1 + 168;
  *(_QWORD *)(a1 + 168) = a1 + 168;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v10 = a3;
  *(_BYTE *)(a1 + 144) = 1;
  *(_BYTE *)(a1 + 145) = a7;
  v12 = HalpMmAllocCtxAlloc(a1, (unsigned __int64)v8 >> 3);
  if ( v12 )
  {
    v13 = HalpMmAllocCtxAlloc(v11, 16LL);
    *(_QWORD *)(a1 + 16) = v13;
    if ( v13 )
    {
      *(_DWORD *)v13 = v8;
      *(_QWORD *)(v13 + 8) = v12;
      RtlSetAllBits(*(PRTL_BITMAP *)(a1 + 16));
      if ( !(_DWORD)v10 )
        return 0LL;
      TranslationBuffer = HalpDmaAllocateTranslationBuffer(v15, a1 + 56);
      *(_QWORD *)(a1 + 40) = TranslationBuffer;
      if ( TranslationBuffer )
      {
        v17 = MmMapIoSpaceEx(a2, (unsigned int)v10, 4u);
        v18 = (void *)v17;
        if ( v17 )
        {
          if ( HalpDmaCommitContiguousMapBuffers(a1, v17, a2, ((unsigned int)v10 >> 12) + ((v10 & 0xFFF) != 0)) )
          {
            *(_DWORD *)(a1 + 204) = (unsigned int)v10 >> 13;
            return 0LL;
          }
          MmUnmapIoSpace(v18, v10);
        }
        HalpDmaFreeTranslationBuffer(*(_QWORD *)(a1 + 40));
      }
    }
    HalpMmAllocCtxFree(v14, v12);
  }
  v20 = *(_QWORD *)(a1 + 16);
  if ( v20 )
    HalpMmAllocCtxFree(v11, v20);
  return 3221225626LL;
}
