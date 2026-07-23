/*
 * XREFs of SmDecompressBuffer @ 0x1402F5A40
 * Callers:
 *     PfSnGetPrefetchInstructions @ 0x14074D26C (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     RtlGetCompressionWorkSpaceSize @ 0x1402F5BB0 (RtlGetCompressionWorkSpaceSize.c)
 *     RtlDecompressBufferEx @ 0x1402F5C10 (RtlDecompressBufferEx.c)
 *     RtlComputeCrc32 @ 0x14032D670 (RtlComputeCrc32.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B00 (memmove.c)
 */

__int64 __fastcall SmDecompressBuffer(char *Buffer, unsigned int a2, _QWORD *a3, _DWORD *a4, _DWORD *a5, __int64 a6)
{
  __int64 v6; // r12
  NTSTATUS CompressionWorkSpaceSize; // ebx
  void *WorkSpace; // rbp
  int v11; // ecx
  ULONG CompressedBufferSize; // esi
  char *v13; // r14
  size_t v14; // rdi
  void *v15; // r15
  unsigned __int8 v16; // al
  USHORT v17; // r13
  _DWORD *v19; // rbx
  ULONG32 v20; // eax
  ULONG32 v21; // eax
  int Buffera; // [rsp+40h] [rbp-58h] BYREF
  ULONG CompressBufferWorkSpaceSize[21]; // [rsp+44h] [rbp-54h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+A0h] [rbp+8h] BYREF
  ULONG FinalUncompressedSize; // [rsp+A8h] [rbp+10h] BYREF
  _QWORD *v26; // [rsp+B0h] [rbp+18h]
  _DWORD *v27; // [rsp+B8h] [rbp+20h]

  v27 = a4;
  v26 = a3;
  v6 = a6;
  CompressionWorkSpaceSize = 0;
  FinalUncompressedSize = 0;
  CompressFragmentWorkSpaceSize = 0;
  CompressBufferWorkSpaceSize[0] = 0;
  WorkSpace = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741246;
  v11 = *(_DWORD *)Buffer;
  CompressedBufferSize = a2 - 8;
  if ( (v11 & 0xFFFFFF) != 0x4D414D )
    return (unsigned int)-1073741672;
  if ( v11 < 0 )
  {
    if ( CompressedBufferSize >= 4 )
    {
      v19 = Buffer + 8;
      Buffera = 0;
      v13 = Buffer + 12;
      CompressedBufferSize = a2 - 12;
      v20 = RtlComputeCrc32(0, Buffer, 8u);
      v21 = RtlComputeCrc32(v20, &Buffera, 4u);
      if ( RtlComputeCrc32(v21, v13, CompressedBufferSize) == *v19 )
      {
        CompressionWorkSpaceSize = 0;
        goto LABEL_5;
      }
    }
    return (unsigned int)-1073741246;
  }
  v13 = Buffer + 8;
LABEL_5:
  v14 = *((unsigned int *)Buffer + 1);
  if ( a5 && (unsigned int)v14 > *a5 )
    return (unsigned int)-1073739516;
  v15 = (void *)(*(__int64 (__fastcall **)(_QWORD))v6)((unsigned int)v14);
  if ( !v15 )
    return (unsigned int)-1073741670;
  v16 = Buffer[3] & 0x7F;
  v17 = v16;
  if ( !v16 )
  {
    if ( CompressedBufferSize == (_DWORD)v14 )
    {
      memmove(v15, v13, v14);
      FinalUncompressedSize = v14;
      goto LABEL_15;
    }
    goto LABEL_29;
  }
  CompressionWorkSpaceSize = RtlGetCompressionWorkSpaceSize(
                               v16,
                               CompressBufferWorkSpaceSize,
                               &CompressFragmentWorkSpaceSize);
  if ( CompressionWorkSpaceSize >= 0 )
  {
    if ( CompressFragmentWorkSpaceSize && (WorkSpace = (void *)(*(__int64 (**)(void))v6)()) == 0LL )
    {
      CompressionWorkSpaceSize = -1073741670;
    }
    else
    {
      CompressionWorkSpaceSize = RtlDecompressBufferEx(
                                   v17,
                                   (PUCHAR)v15,
                                   v14,
                                   (PUCHAR)v13,
                                   CompressedBufferSize,
                                   &FinalUncompressedSize,
                                   WorkSpace);
      if ( CompressionWorkSpaceSize >= 0 )
      {
        if ( (_DWORD)v14 == FinalUncompressedSize )
        {
          CompressionWorkSpaceSize = 0;
LABEL_15:
          *v26 = v15;
          *v27 = v14;
          goto LABEL_16;
        }
LABEL_29:
        CompressionWorkSpaceSize = -1073741246;
      }
    }
  }
  (*(void (__fastcall **)(void *))(v6 + 8))(v15);
LABEL_16:
  if ( WorkSpace )
    (*(void (__fastcall **)(void *))(v6 + 8))(WorkSpace);
  return (unsigned int)CompressionWorkSpaceSize;
}
