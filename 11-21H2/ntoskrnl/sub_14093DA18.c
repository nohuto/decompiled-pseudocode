/*
 * XREFs of sub_14093DA18 @ 0x14093DA18
 * Callers:
 *     sub_14093A0B8 @ 0x14093A0B8 (sub_14093A0B8.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140221A10 (MmFreePagesFromMdl.c)
 *     RtlClearAllBitsEx @ 0x1402340F0 (RtlClearAllBitsEx.c)
 *     sub_1403D5CAC @ 0x1403D5CAC (sub_1403D5CAC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14055E720 @ 0x14055E720 (sub_14055E720.c)
 *     RtlNumberOfSetBitsEx @ 0x1405E6540 (RtlNumberOfSetBitsEx.c)
 *     sub_14093C238 @ 0x14093C238 (sub_14093C238.c)
 *     sub_14093C2FC @ 0x14093C2FC (sub_14093C2FC.c)
 *     sub_14093C6D4 @ 0x14093C6D4 (sub_14093C6D4.c)
 *     sub_14093C98C @ 0x14093C98C (sub_14093C98C.c)
 *     sub_14093D4CC @ 0x14093D4CC (sub_14093D4CC.c)
 *     sub_14096ED20 @ 0x14096ED20 (sub_14096ED20.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14093DA18(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rsi
  _OWORD *Pool2; // r13
  int v5; // edi
  __int64 v6; // rdi
  LARGE_INTEGER v7; // rax
  void *v8; // r12
  __int64 v9; // rax
  char v10; // al
  int v11; // r15d
  __int64 *v12; // r8
  int v13; // r14d
  __int64 *v14; // rax
  _QWORD *v15; // r8
  _QWORD *v16; // r9
  char v17; // r10
  __int64 v18; // r11
  ULONG v19; // edi
  __int64 v20; // r14
  char v21; // al
  int v22; // edi
  __int64 v23; // r15
  bool v24; // zf
  char *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  struct _MDL *v29; // rcx
  unsigned int v30; // ecx
  int v31; // r14d
  __int32 v32; // eax
  __int128 v33; // xmm0
  int v34; // r15d
  unsigned int v35; // edi
  __int32 v36; // eax
  __int128 v37; // xmm0
  __int32 v38; // eax
  __int128 v39; // xmm0
  __int64 v40; // rax
  LARGE_INTEGER v41; // rdx
  _DWORD *v42; // rax
  void *v43; // r14
  ULONG v44; // r8d
  char v46; // [rsp+38h] [rbp-89h]
  char v47; // [rsp+39h] [rbp-88h]
  char v48; // [rsp+3Ah] [rbp-87h]
  LARGE_INTEGER ByteOffset; // [rsp+40h] [rbp-81h] BYREF
  int v50; // [rsp+48h] [rbp-79h] BYREF
  int v51; // [rsp+4Ch] [rbp-75h] BYREF
  char *v52; // [rsp+50h] [rbp-71h] BYREF
  char *v53; // [rsp+58h] [rbp-69h] BYREF
  _QWORD *v54; // [rsp+60h] [rbp-61h]
  __int64 v55; // [rsp+68h] [rbp-59h] BYREF
  __int64 *v56; // [rsp+70h] [rbp-51h]
  __int64 v57; // [rsp+78h] [rbp-49h] BYREF
  __int64 v58; // [rsp+80h] [rbp-41h]
  PVOID Buffer; // [rsp+88h] [rbp-39h]
  __int64 v60; // [rsp+98h] [rbp-29h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-21h]
  __int64 v62; // [rsp+A8h] [rbp-19h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-11h]
  void *v64; // [rsp+B8h] [rbp-9h]
  __m256i v65; // [rsp+C0h] [rbp-1h] BYREF
  __int128 v66; // [rsp+E0h] [rbp+1Fh] BYREF

  v1 = *(_QWORD *)(a1 + 1120);
  v2 = *(_QWORD *)(a1 + 560);
  ByteOffset.QuadPart = 0LL;
  v53 = 0LL;
  v57 = 0LL;
  Pool2 = 0LL;
  v51 = 0;
  v52 = 0LL;
  v55 = 0LL;
  v50 = 0;
  v64 = 0LL;
  v62 = v1;
  v66 = 0LL;
  memset(&v65, 0, sizeof(v65));
  if ( !v1 )
    goto LABEL_2;
  v6 = *(_QWORD *)(a1 + 1128);
  v61 = v6;
  if ( !v6 )
    goto LABEL_2;
  if ( *(_BYTE *)(a1 + 976) )
    v7.QuadPart = *(_QWORD *)(v2 + 8224) + *(unsigned int *)(a1 + 984);
  else
    v7 = *(LARGE_INTEGER *)(v2 + 8224);
  v8 = *(void **)(a1 + 64);
  ByteOffset = v7;
  v60 = -1LL;
  CurrentThread = KeGetCurrentThread();
  v9 = *(_QWORD *)(a1 + 624);
  v58 = 0LL;
  v46 = 0;
  if ( *(_QWORD *)(a1 + 552) != v9 )
  {
    RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 616));
    v9 = *(_QWORD *)(a1 + 624);
  }
  if ( v9 != *(_QWORD *)(a1 + 640) )
    RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 632));
  *(_QWORD *)(a1 + 728) = 0LL;
  *(_QWORD *)(a1 + 736) = 0LL;
  sub_14093C98C((_RTL_BITMAP_EX *)a1, v6, &v52, &v50, &v55);
  v56 = (__int64 *)v6;
  v10 = sub_14093C6D4((_QWORD *)a1, v1, &v53, &v51, &v57);
  v11 = v50;
  v12 = (__int64 *)v1;
  v54 = (_QWORD *)v1;
  v13 = v51;
  v47 = v10;
  while ( v13 || v11 )
  {
    if ( v11 )
    {
      v14 = &v60;
      if ( v13 )
        v14 = v12;
      v54 = v14;
    }
    else
    {
      v56 = &v60;
    }
    v5 = sub_14093C238(a1, (__int64)CurrentThread);
    if ( v5 < 0 )
      goto LABEL_88;
    if ( v13 && v15[v13 - 1] < *v16 )
    {
      Buffer = v53;
      v19 = v13 << 12;
      v20 = v62;
      v46 = v17;
      v58 = v57;
      v21 = sub_14093C6D4((_QWORD *)a1, v62, &v53, &v51, &v57);
      v54 = (_QWORD *)v20;
      goto LABEL_37;
    }
    if ( v11 && v16[v11 - 1] < *v15 )
    {
      v22 = v11;
      Buffer = v52;
      v23 = v61;
      v19 = v22 << 12;
      v58 = v55;
      v46 = 1;
      sub_14093C98C((_RTL_BITMAP_EX *)a1, v61, &v52, &v50, &v55);
      v56 = (__int64 *)v23;
      v11 = v50;
      goto LABEL_38;
    }
    v48 = 0;
    v24 = *v16 == *v15;
    if ( *v16 < *v15 )
    {
      v25 = v52;
      Buffer = v52;
      goto LABEL_30;
    }
    Buffer = v53;
    v48 = 1;
    if ( v24 )
    {
      v25 = v52;
LABEL_30:
      v24 = v11-- == 1;
      v50 = v11;
      if ( v24 )
      {
        v26 = v61;
        v46 = 1;
        v58 = v55;
        sub_14093C98C((_RTL_BITMAP_EX *)a1, v61, &v52, &v50, &v55);
        v15 = v54;
        v18 = 4096LL;
        v17 = v47;
        v11 = v50;
        v56 = (__int64 *)v26;
      }
      else
      {
        v52 = &v25[v18];
        v56 = v16 + 1;
      }
    }
    v19 = v18;
    if ( !v48 )
      goto LABEL_38;
    v24 = v13-- == 1;
    v51 = v13;
    if ( !v24 )
    {
      v53 += v18;
      v54 = v15 + 1;
      goto LABEL_38;
    }
    v27 = v62;
    v46 = v17;
    v58 = v57;
    v21 = sub_14093C6D4((_QWORD *)a1, v62, &v53, &v51, &v57);
    v54 = (_QWORD *)v27;
    v19 = 4096;
LABEL_37:
    v13 = v51;
    v47 = v21;
LABEL_38:
    v5 = sub_14093D4CC(v8, Buffer, v19, &ByteOffset, a1, 0);
    if ( v5 < 0 )
      goto LABEL_88;
    v12 = v54;
    if ( v46 )
    {
      v28 = v58;
      v29 = *(struct _MDL **)(*(_QWORD *)(a1 + 760) + 8 * v58);
      if ( v29 )
      {
        MmFreePagesFromMdl(v29);
        ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 760) + 8 * v28), 0);
        *(_QWORD *)(*(_QWORD *)(a1 + 760) + 8 * v28) = 0LL;
      }
      else
      {
        sub_14096ED20(*(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v58), (unsigned int)dword_140C0CBE8);
      }
      v12 = v54;
      *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v28) = 0LL;
      v46 = 0;
    }
  }
  if ( *(_BYTE *)(a1 + 976) )
  {
    Pool2 = (_OWORD *)ExAllocatePool2(64LL, 4096LL, 1886217292LL);
    if ( !Pool2 )
    {
LABEL_2:
      v5 = -1073741670;
      goto LABEL_88;
    }
  }
  v30 = 1;
  LODWORD(v66) = 1886221636;
  *(_QWORD *)((char *)&v66 + 4) = 0x10626F6C42LL;
  HIDWORD(v66) = NtBuildNumber;
  if ( *(_BYTE *)(a1 + 976) )
  {
    *Pool2 = v66;
    goto LABEL_50;
  }
  v5 = sub_14093D4CC(v8, &v66, 0x10u, &ByteOffset, a1, 1);
  if ( v5 >= 0 )
  {
    v30 = 0;
LABEL_50:
    v31 = 32;
    v32 = *(_DWORD *)(a1 + 184);
    v33 = *(_OWORD *)(a1 + 160);
    v65.m256i_i32[0] = 32;
    v65.m256i_i32[5] = v32;
    *(_OWORD *)((char *)v65.m256i_i64 + 4) = v33;
    v65.m256i_i32[7] = 0;
    if ( *(_BYTE *)(a1 + 976) )
    {
      v34 = 4096;
      v65.m256i_i32[6] = 4064 - v30 * 16;
      *(__m256i *)&Pool2[v30] = v65;
      while ( 1 )
      {
        v5 = sub_14093D4CC(v8, Pool2, 0x1000u, &ByteOffset, a1, 0);
        if ( v5 < 0 )
          goto LABEL_86;
        v34 -= 4096;
        memset(Pool2, 0, 0x1000uLL);
        if ( v31 != v65.m256i_i32[0] )
        {
          v35 = v65.m256i_i32[0] - v31;
          if ( (unsigned int)(v65.m256i_i32[0] - v31) > 0x1000 )
            v35 = 4096;
          memmove(Pool2, &v65.m256i_i8[v31], v35);
          v31 += v35;
        }
        if ( !v34 )
          goto LABEL_61;
      }
    }
    v65.m256i_i32[6] = ((ByteOffset.LowPart + 4127) & 0xFFFFF000) - ByteOffset.LowPart;
    v5 = sub_14093D4CC(v8, &v65, 0x20u, &ByteOffset, a1, 1);
    if ( v5 >= 0 )
    {
      ByteOffset.QuadPart += v65.m256i_u32[6];
LABEL_61:
      v5 = sub_14093D4CC(v8, *(PVOID *)(a1 + 176), *(_DWORD *)(a1 + 184), &ByteOffset, a1, 0);
      if ( v5 >= 0 )
      {
        v36 = *(_DWORD *)(a1 + 1080);
        if ( !v36
          || (v37 = *(_OWORD *)(a1 + 1056),
              v65.m256i_i64[3] = 0LL,
              v65.m256i_i32[0] = 32,
              v65.m256i_i32[5] = v36,
              *(_OWORD *)((char *)v65.m256i_i64 + 4) = v37,
              v5 = sub_14093D4CC(v8, &v65, 0x20u, &ByteOffset, a1, 0),
              v5 >= 0)
          && (v5 = sub_14093D4CC(v8, *(PVOID *)(a1 + 1072), *(_DWORD *)(a1 + 1080), &ByteOffset, a1, 0), v5 >= 0) )
        {
          v38 = *(_DWORD *)(a1 + 1032);
          if ( !v38
            || (v39 = *(_OWORD *)(a1 + 1008),
                v65.m256i_i64[3] = 0LL,
                v65.m256i_i32[0] = 32,
                v65.m256i_i32[5] = v38,
                *(_OWORD *)((char *)v65.m256i_i64 + 4) = v39,
                v5 = sub_14093D4CC(v8, &v65, 0x20u, &ByteOffset, a1, 0),
                v5 >= 0)
            && (v5 = sub_14093D4CC(v8, *(PVOID *)(a1 + 1024), *(_DWORD *)(a1 + 1032), &ByteOffset, a1, 0), v5 >= 0) )
          {
            v40 = *(_QWORD *)(a1 + 624);
            if ( *(_QWORD *)(a1 + 552) != v40 )
            {
              sub_1403D5CAC((unsigned __int64 *)(a1 + 544), (__int64 *)(a1 + 616));
              v40 = *(_QWORD *)(a1 + 624);
            }
            if ( v40 != *(_QWORD *)(a1 + 640) )
              sub_1403D5CAC((unsigned __int64 *)(a1 + 544), (__int64 *)(a1 + 632));
            *(_DWORD *)(v2 + 0x2000) = 1347241043;
            *(_DWORD *)(v2 + 8196) = 1347245380;
            *(_QWORD *)(v2 + 8232) = RtlNumberOfSetBitsEx((_QWORD *)(a1 + 544));
            if ( *(_BYTE *)(a1 + 976) )
              *(_QWORD *)(v2 + 4000) = ByteOffset.QuadPart - *(unsigned int *)(a1 + 984);
            else
              *(LARGE_INTEGER *)(v2 + 4000) = ByteOffset;
            *(_DWORD *)(v2 + 4176) |= 0x10u;
            if ( *(_BYTE *)(a1 + 976) )
            {
              v41.QuadPart = *(unsigned int *)(a1 + 984);
              ByteOffset = v41;
              v42 = (_DWORD *)ExAllocatePool2(64LL, (LARGE_INTEGER)v41.QuadPart, 1886217292LL);
              v43 = v42;
              if ( !v42 )
              {
                v5 = -1073741670;
                goto LABEL_86;
              }
              v5 = sub_14055E720(v2, v42, *(_DWORD *)(a1 + 984));
              if ( v5 >= 0 )
                goto LABEL_81;
            }
            else
            {
              v43 = v64;
              ByteOffset.QuadPart = 0LL;
LABEL_81:
              v5 = sub_14093D4CC(v8, (PVOID)v2, *(_DWORD *)(v2 + 8224), &ByteOffset, a1, 0);
              if ( v5 >= 0 && *(_BYTE *)(a1 + 976) )
              {
                v44 = *(_DWORD *)(a1 + 984);
                ByteOffset.QuadPart = 0LL;
                v5 = sub_14093D4CC(v8, v43, v44, &ByteOffset, a1, 1);
              }
              if ( !v43 )
                goto LABEL_86;
            }
            ExFreePoolWithTag(v43, 0);
          }
        }
      }
    }
  }
LABEL_86:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
LABEL_88:
  sub_14093C2FC(a1);
  return (unsigned int)v5;
}
