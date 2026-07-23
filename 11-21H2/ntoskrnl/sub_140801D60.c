/*
 * XREFs of sub_140801D60 @ 0x140801D60
 * Callers:
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 * Callees:
 *     RtlGetCompressionWorkSpaceSize @ 0x14035F800 (RtlGetCompressionWorkSpaceSize.c)
 *     sub_14038D44C @ 0x14038D44C (sub_14038D44C.c)
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140801C0C @ 0x140801C0C (sub_140801C0C.c)
 *     sub_140801D08 @ 0x140801D08 (sub_140801D08.c)
 *     sub_140802020 @ 0x140802020 (sub_140802020.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char *__fastcall sub_140801D60(_QWORD *MemoryMap)
{
  unsigned int v1; // r14d
  size_t v3; // r15
  unsigned __int64 v4; // r13
  ULONG v5; // ecx
  unsigned __int64 v6; // rdi
  unsigned int v7; // esi
  unsigned __int64 v8; // rdi
  __int64 Pool2; // rdi
  ULONG_PTR v10; // r12
  char *v11; // rcx
  unsigned int v12; // edx
  unsigned __int64 v13; // r9
  _QWORD *v14; // r8
  unsigned __int64 v15; // r10
  char *v16; // rax
  unsigned __int64 v17; // r15
  int v18; // r12d
  int v19; // r15d
  char *result; // rax
  unsigned __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  char *v22; // [rsp+38h] [rbp-30h]
  unsigned __int64 v23; // [rsp+40h] [rbp-28h]
  unsigned __int64 v24; // [rsp+48h] [rbp-20h]
  unsigned __int64 v25; // [rsp+50h] [rbp-18h]
  unsigned __int64 v26; // [rsp+58h] [rbp-10h]
  ULONG CompressBufferWorkSpaceSize; // [rsp+B0h] [rbp+48h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v29; // [rsp+C0h] [rbp+58h] BYREF
  int v30; // [rsp+C8h] [rbp+60h] BYREF

  v1 = dword_140D06884;
  CompressBufferWorkSpaceSize = 0;
  v3 = 0LL;
  CompressFragmentWorkSpaceSize = 0;
  v21 = 0LL;
  v29 = 0;
  v30 = 0;
  v22 = 0LL;
  if ( (dword_140C22278 & 0x10000000) != 0 )
    goto LABEL_23;
  v4 = (unsigned __int64)(unsigned int)dword_140D06884 << 7;
  if ( RtlGetCompressionWorkSpaceSize(0x104u, &CompressBufferWorkSpaceSize, &CompressFragmentWorkSpaceSize) < 0 )
    goto LABEL_23;
  v5 = CompressBufferWorkSpaceSize;
  v23 = (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( CompressFragmentWorkSpaceSize > CompressBufferWorkSpaceSize )
    v5 = CompressFragmentWorkSpaceSize;
  CompressBufferWorkSpaceSize = v5;
  v6 = v5 * v1 + ((v4 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  sub_14038D44C(&v30, &v29);
  v7 = v29 >> 12;
  if ( v29 >> 12 < 0x10 )
  {
    v7 = 16;
  }
  else if ( v7 > 0x100 )
  {
    v7 = 256;
  }
  if ( dword_140D050B8 )
  {
    v8 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v22 = (char *)v8;
    sub_140801C0C(&v21, 0LL);
    v3 = 2 * (v21 >> 9);
    v6 = v3 + v8;
  }
  v24 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  LODWORD(v21) = (-4096 * v7) & (65668 * v1 - 1 + 69632 * v7);
  v25 = (unsigned int)v21 + v24;
  v26 = (v1 << 17) + v25;
  Pool2 = ExAllocatePool2(64LL, v26, 1919052136LL);
  if ( !Pool2 )
    goto LABEL_23;
  v10 = sub_140801D08(v1 << 16);
  if ( !v10 )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0x72626968u);
LABEL_23:
    Pool2 = (__int64)qword_140C22C68;
    v7 = 1;
    v1 = 1;
    v19 = 1;
    memset(qword_140C22C68, 0, 0x80uLL);
    v18 = 12288;
    *(_QWORD *)(Pool2 + 8) = qword_140C22BE8;
    v22 = (char *)qword_140C22C60;
    goto LABEL_20;
  }
  if ( dword_140D050B8 )
  {
    v11 = &v22[Pool2];
    MemoryMap[55] = v3;
    MemoryMap[54] = v11;
    memset(v11, 0, v3);
  }
  v22 = (char *)(Pool2 + v24);
  memset((void *)Pool2, 0, (unsigned __int64)v1 << 7);
  v12 = 0;
  if ( v1 )
  {
    v13 = v23;
    v14 = (_QWORD *)(Pool2 + 8);
    v15 = v25;
    do
    {
      v16 = (char *)(Pool2 + v15 + (v12 << 17));
      *(v14 - 1) = v16;
      v14[2] = v16 + 0x10000;
      *v14 = v10 + (v12 << 16);
      if ( CompressBufferWorkSpaceSize )
        v14[1] = Pool2 + v13 + v12 * CompressBufferWorkSpaceSize;
      ++v12;
      v14 += 16;
    }
    while ( v12 < v1 );
  }
  sub_140802020(MemoryMap, v10, (unsigned __int64)(16 * v1) << 12);
  v17 = v26;
  PoSetHiberRange(MemoryMap, 0x8000u, (PVOID)(v23 + Pool2), v26 - v23, 0x72626968u);
  MemoryMap[36] = Pool2;
  MemoryMap[37] = v17;
  MemoryMap[38] = v10;
  v18 = v21;
  v19 = 16;
LABEL_20:
  PoSetHiberRange(MemoryMap, 0x8000u, qword_140C22C60, 0x3000uLL, 0x72626968u);
  result = v22;
  MemoryMap[34] = v22;
  *((_DWORD *)MemoryMap + 64) = v1;
  MemoryMap[33] = Pool2;
  *((_DWORD *)MemoryMap + 70) = v18;
  *((_DWORD *)MemoryMap + 71) = v19;
  *((_DWORD *)MemoryMap + 102) = v7;
  return result;
}
