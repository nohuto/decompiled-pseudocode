/*
 * XREFs of sub_14035F614 @ 0x14035F614
 * Callers:
 *     sub_1407D84EC @ 0x1407D84EC (sub_1407D84EC.c)
 * Callees:
 *     RtlDecompressBufferEx @ 0x14035F780 (RtlDecompressBufferEx.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x14035F800 (RtlGetCompressionWorkSpaceSize.c)
 *     RtlComputeCrc32 @ 0x140369820 (RtlComputeCrc32.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_14035F614(char *Buffer, __int64 a2, _QWORD *a3, _DWORD *a4, _DWORD *a5)
{
  NTSTATUS CompressionWorkSpaceSize; // ebx
  void *WorkSpace; // r15
  int v9; // ecx
  ULONG CompressedBufferSize; // esi
  char *v11; // r14
  size_t v12; // rdi
  __int64 v13; // rdx
  void *v14; // rbp
  unsigned __int8 v15; // al
  USHORT v16; // r13
  _DWORD *v18; // rbx
  ULONG32 v19; // eax
  ULONG32 v20; // eax
  int Buffera; // [rsp+40h] [rbp-58h] BYREF
  ULONG CompressBufferWorkSpaceSize[21]; // [rsp+44h] [rbp-54h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+A0h] [rbp+8h] BYREF
  ULONG FinalUncompressedSize; // [rsp+A8h] [rbp+10h] BYREF
  _QWORD *v25; // [rsp+B0h] [rbp+18h]
  _DWORD *v26; // [rsp+B8h] [rbp+20h]

  v26 = a4;
  v25 = a3;
  CompressionWorkSpaceSize = 0;
  FinalUncompressedSize = 0;
  CompressFragmentWorkSpaceSize = 0;
  WorkSpace = 0LL;
  CompressBufferWorkSpaceSize[0] = 0;
  if ( (unsigned int)a2 < 8 )
    return (unsigned int)-1073741246;
  v9 = *(_DWORD *)Buffer;
  CompressedBufferSize = a2 - 8;
  if ( (v9 & 0xFFFFFF) != 0x4D414D )
    return (unsigned int)-1073741672;
  if ( v9 < 0 )
  {
    if ( CompressedBufferSize >= 4 )
    {
      v18 = Buffer + 8;
      Buffera = 0;
      v11 = Buffer + 12;
      CompressedBufferSize = a2 - 12;
      v19 = RtlComputeCrc32(0, Buffer, 8u);
      v20 = RtlComputeCrc32(v19, &Buffera, 4u);
      if ( RtlComputeCrc32(v20, v11, CompressedBufferSize) == *v18 )
      {
        CompressionWorkSpaceSize = 0;
        goto LABEL_5;
      }
    }
    return (unsigned int)-1073741246;
  }
  v11 = Buffer + 8;
LABEL_5:
  v12 = *((unsigned int *)Buffer + 1);
  if ( a5 && (unsigned int)v12 > *a5 )
    return (unsigned int)-1073739516;
  v14 = (void *)sub_14042A5E0((unsigned int)v12, a2);
  if ( !v14 )
    return (unsigned int)-1073741670;
  v15 = Buffer[3] & 0x7F;
  v16 = v15;
  if ( !v15 )
  {
    if ( CompressedBufferSize == (_DWORD)v12 )
    {
      memmove(v14, v11, v12);
      FinalUncompressedSize = v12;
      goto LABEL_15;
    }
    goto LABEL_29;
  }
  CompressionWorkSpaceSize = RtlGetCompressionWorkSpaceSize(
                               v15,
                               CompressBufferWorkSpaceSize,
                               &CompressFragmentWorkSpaceSize);
  if ( CompressionWorkSpaceSize >= 0 )
  {
    if ( CompressFragmentWorkSpaceSize && (WorkSpace = (void *)sub_14042A5E0(CompressFragmentWorkSpaceSize, v13)) == 0LL )
    {
      CompressionWorkSpaceSize = -1073741670;
    }
    else
    {
      CompressionWorkSpaceSize = RtlDecompressBufferEx(
                                   v16,
                                   (PUCHAR)v14,
                                   v12,
                                   (PUCHAR)v11,
                                   CompressedBufferSize,
                                   &FinalUncompressedSize,
                                   WorkSpace);
      if ( CompressionWorkSpaceSize >= 0 )
      {
        if ( (_DWORD)v12 == FinalUncompressedSize )
        {
          CompressionWorkSpaceSize = 0;
LABEL_15:
          *v25 = v14;
          *v26 = v12;
          goto LABEL_16;
        }
LABEL_29:
        CompressionWorkSpaceSize = -1073741246;
      }
    }
  }
  sub_14042A5E0(v14, v13);
LABEL_16:
  if ( WorkSpace )
    sub_14042A5E0(WorkSpace, v13);
  return (unsigned int)CompressionWorkSpaceSize;
}
