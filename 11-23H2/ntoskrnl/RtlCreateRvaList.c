/*
 * XREFs of RtlCreateRvaList @ 0x1406A7CA0
 * Callers:
 *     MiParseImageLoadConfig @ 0x1406A828C (MiParseImageLoadConfig.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlpCompressRvaList @ 0x1406B1D30 (RtlpCompressRvaList.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlCreateRvaList(int a1, __int64 a2, __int64 a3, unsigned int a4, void *Src, int a6, __int64 **a7)
{
  __int64 v7; // r14
  __int64 *v8; // rbx
  int v9; // edi
  __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned __int64 v13; // r12
  size_t v14; // r13
  __int64 Pool2; // rax
  __int64 v16; // rsi
  const void *v17; // rdx
  char *v18; // rsi
  __int64 v21; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v22; // [rsp+90h] [rbp+18h] BYREF
  int v23; // [rsp+94h] [rbp+1Ch]

  v23 = HIDWORD(a3);
  v7 = a4;
  v22 = 0;
  v21 = 0LL;
  v8 = 0LL;
  v9 = RtlpCompressRvaList(
         0,
         a1,
         (unsigned int)MiImageRvaRawEnumFirst,
         (unsigned int)MiImageRvaRawEnumNext,
         0LL,
         (__int64)&v21,
         (__int64)&v22);
  if ( v9 >= 0 )
  {
    v10 = v22;
    if ( (unsigned int)v7 <= 1 )
      v11 = 0LL;
    else
      v11 = (((unsigned __int64)((unsigned int)v7 * v22) + 63) >> 3) & 0x1FFFFFFFFFFFFFF8LL;
    v12 = v21;
    v13 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    v14 = v11 + 4 * v7 + v13;
    Pool2 = ExAllocatePool2(256LL, v14 + 64, 1281455698LL);
    v8 = (__int64 *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 24) = v12;
      v16 = Pool2 + 64;
      *(_QWORD *)Pool2 = v10;
      *(_DWORD *)(Pool2 + 8) = v7;
      *(_QWORD *)(Pool2 + 16) = Pool2 + 64;
      memset((void *)(Pool2 + 64), 0, v14);
      v17 = Src;
      v18 = (char *)(v13 + v16);
      if ( Src )
      {
        v8[6] = (__int64)v18;
        memmove(v18, v17, 4 * v7);
        v18 += 4 * v7;
      }
      if ( v11 )
      {
        v8[5] = (__int64)v18;
        v8[4] = (unsigned int)(v7 * v10);
      }
      v9 = RtlpCompressRvaList(
             (_DWORD)v8,
             a1,
             (unsigned int)MiImageRvaRawEnumFirst,
             (unsigned int)MiImageRvaRawEnumNext,
             v8[2],
             (__int64)&v21,
             (__int64)&v22);
      if ( v9 < 0 )
      {
        ExFreePoolWithTag(v8, 0x4C617652u);
        v8 = 0LL;
      }
    }
    else
    {
      v9 = -1073741670;
    }
  }
  *a7 = v8;
  return (unsigned int)v9;
}
