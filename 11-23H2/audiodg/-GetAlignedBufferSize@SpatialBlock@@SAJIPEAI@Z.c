/*
 * XREFs of ?GetAlignedBufferSize@SpatialBlock@@SAJIPEAI@Z @ 0x14009D4B4
 * Callers:
 *     ?Create@SpatialBlock@@QEAAJPEAEIIIII@Z @ 0x14009D340 (-Create@SpatialBlock@@QEAAJPEAEIIIII@Z.c)
 *     ?GetMemoryRequirement@SpatialBlock@@SAJIIIIPEAI@Z @ 0x14009D88C (-GetMemoryRequirement@SpatialBlock@@SAJIIIIPEAI@Z.c)
 *     ?SetPointersFromDescriptor@SpatialBlock@@AEAAJPEAUDescriptor@1@@Z @ 0x14009EAB8 (-SetPointersFromDescriptor@SpatialBlock@@AEAAJPEAUDescriptor@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SpatialBlock::GetAlignedBufferSize(unsigned int a1, unsigned int *a2)
{
  unsigned int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = a1;
  if ( (a1 & 0x1F) == 0 )
    return 0LL;
  v2 = a1 - (a1 & 0x1F) + 32;
  if ( v2 >= a1 )
  {
    *a2 = v2;
    return 0LL;
  }
  *a2 = -1;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF7,
    (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
    (const char *)0x80070216LL);
  return 2147942934LL;
}
