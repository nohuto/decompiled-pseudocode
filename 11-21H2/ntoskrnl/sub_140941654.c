/*
 * XREFs of sub_140941654 @ 0x140941654
 * Callers:
 *     IoAcquireKsrPersistentMemoryEx @ 0x1409407A0 (IoAcquireKsrPersistentMemoryEx.c)
 *     IoQueryKsrPersistentMemorySizeEx @ 0x140940A60 (IoQueryKsrPersistentMemorySizeEx.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x140940CB0 (IoReserveKsrPersistentMemoryEx.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14055F7CC @ 0x14055F7CC (sub_14055F7CC.c)
 *     sub_140941490 @ 0x140941490 (sub_140941490.c)
 *     sub_140941CFC @ 0x140941CFC (sub_140941CFC.c)
 *     sub_140941DDC @ 0x140941DDC (sub_140941DDC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140941654(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        size_t *a6,
        void *a7,
        int a8)
{
  _WORD *Pool2; // r13
  size_t *v9; // r14
  ULONG_PTR v10; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  _WORD *v14; // rcx
  __int64 v15; // rcx
  unsigned __int16 *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  _WORD *v20; // rcx
  __int64 v21; // rcx
  struct _MDL *v22; // rsi
  size_t *v23; // r15
  char v24; // r12
  int v25; // ebx
  unsigned int v26; // r12d
  __int64 v27; // rbx
  char v28; // al
  __int64 v29; // r12
  int v30; // eax
  void *v31; // rax
  unsigned __int64 v32; // r12
  unsigned __int64 *v33; // rcx
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // r9
  __int64 v38; // r8
  unsigned int v39; // edx
  _QWORD *v40; // rdi
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  size_t *v45; // rax
  void *v46; // r9
  size_t *v47; // rax
  size_t v48; // rcx
  size_t v49; // r8
  __int64 v50; // r8
  unsigned int v51; // r12d
  char v53; // [rsp+30h] [rbp-79h] BYREF
  char v54; // [rsp+31h] [rbp-78h]
  unsigned int v55; // [rsp+34h] [rbp-75h] BYREF
  ULONG BugCheckOnFailure; // [rsp+38h] [rbp-71h] BYREF
  unsigned int v57; // [rsp+3Ch] [rbp-6Dh]
  PVOID P; // [rsp+40h] [rbp-69h]
  size_t *v59; // [rsp+48h] [rbp-61h]
  int v60; // [rsp+50h] [rbp-59h]
  __int128 v61; // [rsp+58h] [rbp-51h] BYREF
  ULONG_PTR v62; // [rsp+68h] [rbp-41h]
  __int64 v63; // [rsp+70h] [rbp-39h]
  __int64 v64; // [rsp+78h] [rbp-31h]
  __int64 v65; // [rsp+80h] [rbp-29h]
  _DWORD *v66; // [rsp+88h] [rbp-21h]
  void *v67; // [rsp+90h] [rbp-19h]
  __int128 v68; // [rsp+98h] [rbp-11h] BYREF

  Pool2 = 0LL;
  v9 = a6;
  v66 = a5;
  v10 = a2;
  v65 = a3;
  v67 = a7;
  v64 = a4;
  v62 = a2;
  v59 = a6;
  v55 = 0;
  v68 = 0LL;
  if ( a2 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
    if ( !v12 || (*(_DWORD *)(v12 + 396) & 0x20000) != 0 )
    {
      sub_1403D99B4(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
      v13 = *(_QWORD *)(v10 + 8);
      if ( v13 )
      {
        sub_1403D99B4(v13, (PVOID)(unsigned int)*(__int16 *)(v13 + 2));
        v14 = (_WORD *)(*(_QWORD *)(v10 + 8) + 56LL);
        if ( *v14 )
        {
          sub_1403D99B4((ULONG)v14, (PVOID)2);
          sub_1403D99B4(
            *(_QWORD *)(*(_QWORD *)(v10 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v10 + 8) + 56LL));
        }
      }
      v15 = *(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL);
      if ( v15 )
      {
        v16 = (unsigned __int16 *)(v15 + 40);
        sub_1403D99B4(v15, (PVOID)0x310);
        if ( *v16 )
        {
          sub_1403D99B4((ULONG)v16, (PVOID)2);
          sub_1403D99B4(*((_QWORD *)v16 + 1), (PVOID)*v16);
        }
        v17 = *(_QWORD *)(v10 + 312);
        v18 = *(_QWORD *)(v17 + 40);
        if ( *(_WORD *)(v18 + 56) )
        {
          sub_1403D99B4(v18 + 56, (PVOID)2);
          sub_1403D99B4(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL) + 56LL));
          v17 = *(_QWORD *)(v10 + 312);
        }
        v19 = *(_QWORD *)(*(_QWORD *)(v17 + 40) + 16LL);
        if ( v19 )
        {
          v20 = (_WORD *)(v19 + 56);
          if ( *v20 )
          {
            sub_1403D99B4((ULONG)v20, (PVOID)2);
            v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL) + 16LL);
            sub_1403D99B4(*(_QWORD *)(v21 + 64), (PVOID)*(unsigned __int16 *)(v21 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, v10, 0LL, 0LL);
    }
  }
  P = 0LL;
  v22 = 0LL;
  v53 = 0;
  BugCheckOnFailure = 0;
  v23 = 0LL;
  v24 = 0;
  v25 = sub_140941490(a1, (__int64)&v68);
  if ( v25 >= 0 )
  {
    v61 = 0LL;
    v25 = KsrEnumeratePersistedMemory(&v68, sub_140941220, &v61);
    if ( v25 >= 0 )
    {
      if ( !DWORD2(v61) )
        return (unsigned int)-1073741772;
      *(_QWORD *)&v61 = ExAllocatePool2(64LL, 8LL * DWORD2(v61), 1634758224LL);
      if ( !(_QWORD)v61 )
        return (unsigned int)-1073741670;
      v25 = KsrEnumeratePersistedMemory(&v68, sub_140941220, &v61);
      if ( v25 < 0 )
        return (unsigned int)v25;
      v57 = 0;
      if ( DWORD2(v61) )
      {
        v60 = a8;
        while ( 1 )
        {
          Pool2 = 0LL;
          if ( v24 )
            goto LABEL_74;
          v26 = v57;
          v63 = *(_QWORD *)(v61 + 8LL * v57);
          v27 = v63;
          KsrQueryMetadata(&v68, v63, 0LL, 0LL, &BugCheckOnFailure);
          Pool2 = (_WORD *)ExAllocatePool2(64LL, BugCheckOnFailure, 1634758224LL);
          if ( !Pool2 )
            goto LABEL_84;
          v25 = KsrQueryMetadata(&v68, v27, Pool2, BugCheckOnFailure, &BugCheckOnFailure);
          if ( v25 < 0 )
            goto LABEL_74;
          if ( BugCheckOnFailure < 2 )
          {
LABEL_83:
            v25 = -1073741637;
            goto LABEL_74;
          }
          if ( *Pool2 == 2 )
          {
            v25 = sub_140941CFC(v10, v65, v64, (_DWORD)Pool2, 0, (__int64)&v53);
            if ( v25 < 0 )
              goto LABEL_74;
            v54 = v53;
            if ( !v53 )
              goto LABEL_60;
            sub_14055F7CC((__int64)Pool2, 0LL, v66);
            v28 = v54;
          }
          else
          {
            if ( *Pool2 != 1 )
              goto LABEL_83;
            v25 = sub_140941DDC(v10, Pool2, 0LL, &v53);
            if ( v25 < 0 )
              goto LABEL_74;
            v28 = v53;
            v54 = v53;
          }
          if ( !v28 )
            goto LABEL_60;
          v29 = v63;
          v30 = KsrClaimPersistedMemory(&v68, v63, 0LL, 0LL, 0, &v55);
          v25 = v30;
          if ( v30 != -1073741789 && v30 < 0 )
            goto LABEL_74;
          v31 = (void *)ExAllocatePool2(64LL, 8LL * v55, 1634758224LL);
          P = v31;
          if ( !v31 )
          {
LABEL_84:
            v25 = -1073741670;
            goto LABEL_74;
          }
          v25 = KsrClaimPersistedMemory(&v68, v29, v31, v55, 0, &v55);
          if ( v25 < 0 )
            goto LABEL_74;
          v32 = 0LL;
          if ( v55 )
          {
            v33 = (unsigned __int64 *)P;
            v34 = v55;
            do
            {
              v35 = *v33++;
              v32 = (v35 >> 40) + (unsigned int)v32;
              --v34;
            }
            while ( v34 );
            v10 = v62;
          }
          v36 = ExAllocatePool2(64LL, 8 * v32 + 48, 1634758224LL);
          v22 = (struct _MDL *)v36;
          if ( !v36 )
            goto LABEL_74;
          *(_QWORD *)v36 = 0LL;
          v37 = (_QWORD *)(v36 + 48);
          *(_QWORD *)(v36 + 32) = 0LL;
          v38 = 0LL;
          *(_DWORD *)(v36 + 44) = 0;
          *(_DWORD *)(v36 + 40) = (_DWORD)v32 << 12;
          *(_WORD *)(v36 + 10) = 2;
          *(_WORD *)(v36 + 8) = 8 * (v32 + 6);
          v39 = v55;
          if ( v55 )
          {
            v40 = P;
            do
            {
              v41 = v40[v38];
              v42 = v41 >> 40;
              v43 = v41 & 0xFFFFFFFFFFLL;
              if ( (_DWORD)v42 )
              {
                v44 = (unsigned int)v42;
                do
                {
                  *v37++ = v43++;
                  --v44;
                }
                while ( v44 );
                v39 = v55;
              }
              v38 = (unsigned int)(v38 + 1);
            }
            while ( (unsigned int)v38 < v39 );
            v10 = v62;
          }
          v45 = (size_t *)MmMapLockedPagesSpecifyCache(v22, 0, MmCached, 0LL, 0, 0x40000010u);
          v23 = v45;
          if ( !v45 )
          {
            v25 = -1073741670;
            goto LABEL_77;
          }
          v46 = v67;
          if ( !v67 )
          {
            v9 = v59;
            v25 = -1073741789;
            *v59 = *v45;
            goto LABEL_72;
          }
          v47 = v59;
          v48 = *v23;
          v49 = *v59;
          *v59 = *v23;
          if ( v49 < v48 )
          {
            v25 = -1073741789;
            v9 = v47;
            goto LABEL_72;
          }
          memmove(v46, v23 + 1, *v23);
          if ( (v60 & 1) == 0 )
          {
            v26 = v57;
LABEL_60:
            v51 = v26 + 1;
            v57 = v51;
            if ( !v23 )
              goto LABEL_62;
            goto LABEL_61;
          }
          LOBYTE(v50) = 1;
          KsrFreePersistedMemoryBlock(&v68, v63, v50);
          v51 = ++v57;
LABEL_61:
          MmUnmapLockedPages(v23, v22);
          v23 = 0LL;
LABEL_62:
          if ( v22 )
          {
            ExFreePoolWithTag(v22, 0x61706E50u);
            v22 = 0LL;
          }
          ExFreePoolWithTag(Pool2, 0x61706E50u);
          Pool2 = 0LL;
          if ( P )
          {
            ExFreePoolWithTag(P, 0x61706E50u);
            P = 0LL;
          }
          if ( v51 >= DWORD2(v61) )
          {
            v9 = v59;
LABEL_72:
            if ( v54 )
              goto LABEL_74;
            break;
          }
          v24 = v54;
        }
      }
      *v9 = 0LL;
      v25 = -1073741772;
LABEL_74:
      if ( v23 )
        MmUnmapLockedPages(v23, v22);
      if ( v22 )
LABEL_77:
        ExFreePoolWithTag(v22, 0x61706E50u);
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x61706E50u);
      if ( P )
        ExFreePoolWithTag(P, 0x61706E50u);
    }
  }
  return (unsigned int)v25;
}
