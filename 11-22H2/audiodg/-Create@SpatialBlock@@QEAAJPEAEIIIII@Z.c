/*
 * XREFs of ?Create@SpatialBlock@@QEAAJPEAEIIIII@Z @ 0x14009D390
 * Callers:
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14009DF4C (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUt.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAlignedBufferSize@SpatialBlock@@SAJIPEAI@Z @ 0x14009D504 (-GetAlignedBufferSize@SpatialBlock@@SAJIPEAI@Z.c)
 *     ?GetMemoryRequirement@SpatialBlock@@SAJIIIIPEAI@Z @ 0x14009D8DC (-GetMemoryRequirement@SpatialBlock@@SAJIIIIPEAI@Z.c)
 *     ?SetPointersFromDescriptor@SpatialBlock@@AEAAJPEAUDescriptor@1@@Z @ 0x14009EB08 (-SetPointersFromDescriptor@SpatialBlock@@AEAAJPEAUDescriptor@1@@Z.c)
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
  int MemoryRequirement; // ebx
  __int64 v15; // rdx
  __int64 v17; // rdx
  unsigned int v18[4]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v20; // [rsp+88h] [rbp+20h] BYREF

  v20 = a4;
  v7 = a7;
  v8 = a6;
  v10 = a5;
  MemoryRequirement = SpatialBlock::GetMemoryRequirement(a4, a5, a6, a7, v18);
  if ( MemoryRequirement < 0 )
  {
    v15 = 57LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
      (const char *)(unsigned int)MemoryRequirement);
    return (unsigned int)MemoryRequirement;
  }
  if ( a3 != v18[0] )
  {
    MemoryRequirement = -2147418113;
    v15 = 58LL;
    goto LABEL_3;
  }
  if ( !a2 )
  {
    MemoryRequirement = -2147024882;
    v15 = 60LL;
    goto LABEL_3;
  }
  if ( ((unsigned __int8)a2 & 0x1F) != 0 )
  {
    MemoryRequirement = -2005139372;
    v15 = 62LL;
    goto LABEL_3;
  }
  *((_QWORD *)this + 4) = a2;
  MemoryRequirement = SpatialBlock::GetAlignedBufferSize(a4, &v20);
  if ( MemoryRequirement < 0 )
  {
    v15 = 71LL;
    goto LABEL_3;
  }
  **((_DWORD **)this + 4) = 28;
  *(_DWORD *)(*((_QWORD *)this + 4) + 4LL) = a3;
  *(_DWORD *)(*((_QWORD *)this + 4) + 8LL) = v7;
  *(_DWORD *)(*((_QWORD *)this + 4) + 12LL) = v10;
  *(_DWORD *)(*((_QWORD *)this + 4) + 16LL) = v8;
  *(_DWORD *)(*((_QWORD *)this + 4) + 20LL) = v20;
  *(_DWORD *)(*((_QWORD *)this + 4) + 24LL) = 1396785732;
  v17 = *((_QWORD *)this + 4);
  *(_OWORD *)this = *(_OWORD *)v17;
  *((_QWORD *)this + 2) = *(_QWORD *)(v17 + 16);
  *((_DWORD *)this + 6) = *(_DWORD *)(v17 + 24);
  MemoryRequirement = SpatialBlock::SetPointersFromDescriptor(this, (struct SpatialBlock::Descriptor *)v17);
  if ( MemoryRequirement < 0 )
  {
    v15 = 84LL;
    goto LABEL_3;
  }
  return 0LL;
}
