/*
 * XREFs of ?Create@SpatialBlock@@QEAAJPEAEIIIII@Z @ 0x140091464
 * Callers:
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x1400922C8 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUt.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAlignedBufferSize@SpatialBlock@@SAJIPEAI@Z @ 0x1400915F0 (-GetAlignedBufferSize@SpatialBlock@@SAJIPEAI@Z.c)
 *     ?GetMemoryRequirement@SpatialBlock@@SAJIIIIPEAI@Z @ 0x140091A4C (-GetMemoryRequirement@SpatialBlock@@SAJIIIIPEAI@Z.c)
 *     ?SetPointersFromDescriptor@SpatialBlock@@AEAAJPEAUDescriptor@1@@Z @ 0x140093028 (-SetPointersFromDescriptor@SpatialBlock@@AEAAJPEAUDescriptor@1@@Z.c)
 */

__int64 __fastcall SpatialBlock::Create(
        SpatialBlock *this,
        unsigned __int8 *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  unsigned int v10; // r13d
  int MemoryRequirement; // eax
  unsigned int v15; // esi
  int AlignedBufferSize; // ebx
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned int v20[4]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v22; // [rsp+88h] [rbp+20h] BYREF

  v22 = a4;
  v7 = a7;
  v8 = a6;
  v10 = a5;
  MemoryRequirement = SpatialBlock::GetMemoryRequirement(a4, a5, a6, a7, v20);
  v15 = MemoryRequirement;
  if ( MemoryRequirement < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
      (const char *)(unsigned int)MemoryRequirement);
    return v15;
  }
  if ( a3 != v20[0] )
  {
    AlignedBufferSize = -2147418113;
    v18 = 58LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
      (const char *)(unsigned int)AlignedBufferSize);
    return (unsigned int)AlignedBufferSize;
  }
  if ( !a2 )
  {
    AlignedBufferSize = -2147024882;
    v18 = 60LL;
    goto LABEL_5;
  }
  if ( ((unsigned __int8)a2 & 0x1F) != 0 )
  {
    AlignedBufferSize = -2005139372;
    v18 = 62LL;
    goto LABEL_5;
  }
  *((_QWORD *)this + 4) = a2;
  AlignedBufferSize = SpatialBlock::GetAlignedBufferSize(a4, &v22);
  if ( AlignedBufferSize < 0 )
  {
    v18 = 71LL;
    goto LABEL_5;
  }
  **((_DWORD **)this + 4) = 28;
  *(_DWORD *)(*((_QWORD *)this + 4) + 4LL) = a3;
  *(_DWORD *)(*((_QWORD *)this + 4) + 8LL) = v7;
  *(_DWORD *)(*((_QWORD *)this + 4) + 12LL) = v10;
  *(_DWORD *)(*((_QWORD *)this + 4) + 16LL) = v8;
  *(_DWORD *)(*((_QWORD *)this + 4) + 20LL) = v22;
  *(_DWORD *)(*((_QWORD *)this + 4) + 24LL) = 1396785732;
  v19 = *((_QWORD *)this + 4);
  *(_OWORD *)this = *(_OWORD *)v19;
  *((_QWORD *)this + 2) = *(_QWORD *)(v19 + 16);
  *((_DWORD *)this + 6) = *(_DWORD *)(v19 + 24);
  AlignedBufferSize = SpatialBlock::SetPointersFromDescriptor(this, (struct SpatialBlock::Descriptor *)v19);
  if ( AlignedBufferSize < 0 )
  {
    v18 = 84LL;
    goto LABEL_5;
  }
  return 0LL;
}
