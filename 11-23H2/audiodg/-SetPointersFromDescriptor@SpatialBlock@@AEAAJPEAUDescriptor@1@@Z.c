/*
 * XREFs of ?SetPointersFromDescriptor@SpatialBlock@@AEAAJPEAUDescriptor@1@@Z @ 0x14009EAB8
 * Callers:
 *     ?Create@SpatialBlock@@QEAAJPEAEIIIII@Z @ 0x14009D340 (-Create@SpatialBlock@@QEAAJPEAEIIIII@Z.c)
 *     ?Initialize@SpatialBlock@@QEAAJPEAEI@Z @ 0x14009DDD8 (-Initialize@SpatialBlock@@QEAAJPEAEI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAlignedBufferSize@SpatialBlock@@SAJIPEAI@Z @ 0x14009D4B4 (-GetAlignedBufferSize@SpatialBlock@@SAJIPEAI@Z.c)
 */

__int64 __fastcall SpatialBlock::SetPointersFromDescriptor(SpatialBlock *this, struct SpatialBlock::Descriptor *a2)
{
  char *v4; // r8
  char *v5; // rdx
  int AlignedBufferSize; // eax
  unsigned int v7; // esi
  char *v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 5) = (char *)a2 + 28;
  v4 = (char *)a2 + (unsigned int)(*((_DWORD *)a2 + 2) * *((_DWORD *)a2 + 3)) + 28;
  *((_QWORD *)this + 8) = v4;
  v5 = &v4[*((_DWORD *)a2 + 2) * *((_DWORD *)a2 + 3)];
  *((_QWORD *)this + 6) = v5;
  *((_QWORD *)this + 9) = &v5[*((_DWORD *)a2 + 2) * *((_DWORD *)a2 + 4)];
  v11 = *((_DWORD *)this + 18) + *((_DWORD *)a2 + 2) * *((_DWORD *)a2 + 4) - (_DWORD)a2;
  AlignedBufferSize = SpatialBlock::GetAlignedBufferSize(v11, &v11);
  v7 = AlignedBufferSize;
  if ( AlignedBufferSize >= 0 )
  {
    v9 = (char *)a2 + v11;
    *((_QWORD *)this + 7) = v9;
    *((_QWORD *)this + 10) = &v9[*((_DWORD *)a2 + 2) * *((_DWORD *)a2 + 5)];
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x137,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
      (const char *)(unsigned int)AlignedBufferSize);
    return v7;
  }
}
