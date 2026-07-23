/*
 * XREFs of sub_140A1F420 @ 0x140A1F420
 * Callers:
 *     sub_140A210D4 @ 0x140A210D4 (sub_140A210D4.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A1FFC0 @ 0x140A1FFC0 (sub_140A1FFC0.c)
 *     sub_140A20144 @ 0x140A20144 (sub_140A20144.c)
 *     sub_140A20C90 @ 0x140A20C90 (sub_140A20C90.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A1F420(_DWORD *a1, _WORD *a2, _DWORD *a3, _WORD *a4, _QWORD *a5)
{
  __int64 v5; // rax
  _WORD *v6; // rbx
  _DWORD *v8; // rdi
  _WORD *v9; // r15
  _FILE_PATH *v10; // r14
  char *v12; // r12
  int v13; // eax
  int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // ebx
  _FILE_PATH *PoolWithTag; // rax
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
  size_t v35; // [rsp+30h] [rbp-20h]
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
    v14 = sub_140A1FFC0(v8 + 3);
    if ( v14 < 0 )
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
      v14 = -1073741675;
      goto LABEL_32;
    }
    PoolWithTag = (_FILE_PATH *)ExAllocatePoolWithTag(PagedPool, v19, 0x4B444342u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_20:
      v14 = -1073741670;
      goto LABEL_32;
    }
    PoolWithTag->Length = v19;
    v21 = HIDWORD(Size);
    v22 = HIDWORD(Size);
    PoolWithTag->Version = 1;
    PoolWithTag->Type = 3;
    memmove(PoolWithTag->FilePath, v12, v22);
    memmove(&v10->FilePath[v21], v9, (unsigned int)Size);
    v23 = sub_140A20C90(v10, 4u);
    v8 = (_DWORD *)v35;
    v14 = v23;
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
      v14 = -1073741675;
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
      v14 = 0;
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
  v13 = sub_140A20144(v8 + 3, &Src, &Size);
  v9 = Src;
  v14 = v13;
  if ( v13 >= 0 )
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
  return (unsigned int)v14;
}
