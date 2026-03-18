/*
 * XREFs of BiCreateMergedBootEntry @ 0x140A1F420
 * Callers:
 *     BiUpdateEfiEntry @ 0x140A210D4 (BiUpdateEfiEntry.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     BiGetDeviceFromEfiPath @ 0x140A1FFC0 (BiGetDeviceFromEfiPath.c)
 *     BiGetFilePathFromEfiPath @ 0x140A20144 (BiGetFilePathFromEfiPath.c)
 *     BiTranslateFilePath @ 0x140A20C90 (BiTranslateFilePath.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiCreateMergedBootEntry(_DWORD *a1, _WORD *a2, _DWORD *a3, _WORD *a4, _QWORD *a5)
{
  __int64 v5; // rax
  _WORD *v6; // rbx
  _DWORD *v8; // rdi
  _WORD *v9; // r15
  char *v10; // r14
  char *v12; // r12
  int FilePathFromEfiPath; // eax
  int DeviceFromEfiPath; // ebx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // ebx
  char *PoolWithTag; // rax
  __int64 v21; // rbx
  size_t v22; // r8
  int v23; // eax
  unsigned int v24; // edx
  int v25; // r8d
  int v26; // r9d
  unsigned int v27; // r12d
  PVOID v28; // rax
  _DWORD *v29; // rax
  __int64 v30; // rcx
  size_t v31; // r8
  _DWORD *v32; // r12
  char v33; // [rsp+20h] [rbp-30h]
  size_t Size; // [rsp+24h] [rbp-2Ch] BYREF
  size_t v35; // [rsp+30h] [rbp-20h] BYREF
  void *Src; // [rsp+38h] [rbp-18h] BYREF
  PVOID P; // [rsp+40h] [rbp-10h]
  char v39; // [rsp+A0h] [rbp+50h]
  _WORD *v40; // [rsp+A8h] [rbp+58h]

  v40 = a4;
  v5 = -1LL;
  v6 = a2;
  Size = 0LL;
  P = 0LL;
  v35 = 0LL;
  v8 = 0LL;
  v39 = 0;
  v9 = 0LL;
  Src = 0LL;
  v10 = 0LL;
  v33 = 0;
  if ( !a3 )
  {
    v8 = (_DWORD *)((char *)a1 + (unsigned int)a1[5]);
    if ( !a4 )
      goto LABEL_23;
    v35 = (size_t)a1 + (unsigned int)a1[5];
    DeviceFromEfiPath = BiGetDeviceFromEfiPath(v8 + 3);
    if ( DeviceFromEfiPath < 0 )
      goto LABEL_32;
    a4 = v40;
    v12 = (char *)P + 20;
LABEL_12:
    v9 = a4;
LABEL_13:
    v15 = -1LL;
    v16 = -1LL;
    do
      ++v16;
    while ( *(_WORD *)&v12[2 * v16] );
    v17 = 2 * v16 + 2;
    HIDWORD(Size) = v17;
    do
      ++v15;
    while ( v9[v15] );
    LODWORD(Size) = 2 * v15 + 2;
    v18 = v17 + Size;
    if ( v17 + (unsigned int)Size < v17 || (v19 = v18 + 12, v18 + 12 < v18) )
    {
      DeviceFromEfiPath = -1073741675;
      goto LABEL_32;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v19, 0x4B444342u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_20:
      DeviceFromEfiPath = -1073741670;
      goto LABEL_32;
    }
    *((_DWORD *)PoolWithTag + 1) = v19;
    v21 = HIDWORD(Size);
    v22 = HIDWORD(Size);
    *(_DWORD *)PoolWithTag = 1;
    *((_DWORD *)PoolWithTag + 2) = 3;
    memmove(PoolWithTag + 12, v12, v22);
    memmove(&v10[v21 + 12], v9, (unsigned int)Size);
    v23 = BiTranslateFilePath(v10, 4LL, &v35);
    v8 = (_DWORD *)v35;
    DeviceFromEfiPath = v23;
    if ( v23 < 0 )
      goto LABEL_32;
    v6 = a2;
    v5 = -1LL;
    v39 = 1;
LABEL_23:
    if ( !v6 )
      v6 = (_WORD *)((char *)a1 + (unsigned int)a1[4]);
    do
      ++v5;
    while ( v6[v5] );
    v24 = a1[6];
    v25 = 2 * v5 + 2;
    LODWORD(v35) = v25;
    if ( v24 + v25 < v24 || (v26 = v8[1], v26 + v24 + v25 + 36 < v24 + v25) )
    {
      DeviceFromEfiPath = -1073741675;
      goto LABEL_32;
    }
    HIDWORD(Size) = (v24 + 31) & 0xFFFFFFFC;
    LODWORD(Size) = (v25 + HIDWORD(Size) + 3) & 0xFFFFFFFC;
    v27 = v26 + Size;
    v28 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v26 + Size), 0x4B444342u);
    P = v28;
    if ( v28 )
    {
      memset(v28, 0, v27);
      v29 = P;
      v30 = HIDWORD(Size);
      v31 = (unsigned int)v35;
      *((_DWORD *)P + 1) = v27;
      v32 = P;
      *v29 = 1;
      v32[2] = a1[2];
      v32[3] = a1[3];
      LODWORD(v29) = Size;
      v32[4] = v30;
      v32[5] = (_DWORD)v29;
      v32[6] = a1[6];
      memmove((char *)v32 + v30, v6, v31);
      memmove((char *)v32 + (unsigned int)Size, v8, (unsigned int)v8[1]);
      memmove(v32 + 7, a1 + 7, (unsigned int)a1[6]);
      *a5 = v32;
      DeviceFromEfiPath = 0;
      goto LABEL_32;
    }
    goto LABEL_20;
  }
  if ( *a3 == 5 )
    return 3221225486LL;
  if ( *a3 != 2 )
    return 3221225485LL;
  v12 = (char *)(a3 + 5);
  if ( a4 )
    goto LABEL_12;
  v8 = (_DWORD *)((char *)a1 + (unsigned int)a1[5]);
  v35 = (size_t)v8;
  FilePathFromEfiPath = BiGetFilePathFromEfiPath(v8 + 3, &Src, &Size);
  v9 = Src;
  DeviceFromEfiPath = FilePathFromEfiPath;
  if ( FilePathFromEfiPath >= 0 )
  {
    v33 = 1;
    goto LABEL_13;
  }
LABEL_32:
  if ( v39 )
    ExFreePoolWithTag(v8, 0x4B444342u);
  if ( v33 )
    ExFreePoolWithTag(v9, 0x4B444342u);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x4B444342u);
  return (unsigned int)DeviceFromEfiPath;
}
