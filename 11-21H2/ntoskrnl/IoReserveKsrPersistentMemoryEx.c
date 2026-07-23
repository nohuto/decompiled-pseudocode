/*
 * XREFs of IoReserveKsrPersistentMemoryEx @ 0x140940CB0
 * Callers:
 *     IoReserveKsrPersistentMemory @ 0x140940C70 (IoReserveKsrPersistentMemory.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x1402630A0 (MmAllocatePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140941244 @ 0x140941244 (sub_140941244.c)
 *     sub_140941490 @ 0x140941490 (sub_140941490.c)
 *     sub_140941654 @ 0x140941654 (sub_140941654.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IoReserveKsrPersistentMemoryEx(
        struct _MDL *a1,
        ULONG_PTR a2,
        size_t a3,
        _WORD *a4,
        int a5,
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  _WORD *v11; // rcx
  __int64 v12; // rcx
  unsigned __int16 *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  _WORD *v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // r14
  unsigned int v20; // r15d
  void *v21; // r13
  int v22; // edi
  unsigned int v23; // eax
  int v24; // r13d
  int v25; // eax
  struct _MDL *PagesForMdl; // rax
  PVOID v28; // rax
  __int64 Pool2; // rax
  __int64 v30; // r15
  __int64 v31; // rax
  void *v32; // rdx
  size_t v33; // r8
  struct _MDL *v34; // rdi
  struct _MDL *v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // [rsp+40h] [rbp-71h] BYREF
  unsigned int v38; // [rsp+44h] [rbp-6Dh]
  unsigned int v39; // [rsp+48h] [rbp-69h]
  PVOID P; // [rsp+50h] [rbp-61h]
  struct _MDL *v41; // [rsp+58h] [rbp-59h]
  size_t Size; // [rsp+60h] [rbp-51h]
  void *Src; // [rsp+68h] [rbp-49h]
  _WORD *v44; // [rsp+70h] [rbp-41h]
  __int64 v45; // [rsp+78h] [rbp-39h] BYREF
  __int64 v46; // [rsp+80h] [rbp-31h] BYREF
  _QWORD *v47; // [rsp+88h] [rbp-29h]
  __int128 v48; // [rsp+90h] [rbp-21h] BYREF

  v47 = a8;
  v45 = 0LL;
  v46 = 0LL;
  v48 = 0LL;
  v37 = 0;
  v44 = a4;
  Size = a3;
  v41 = a1;
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  if ( a2 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
    if ( !v9 || (*(_DWORD *)(v9 + 396) & 0x20000) != 0 )
    {
      sub_1403D99B4(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
      v10 = *(_QWORD *)(a2 + 8);
      if ( v10 )
      {
        sub_1403D99B4(v10, (PVOID)(unsigned int)*(__int16 *)(v10 + 2));
        v11 = (_WORD *)(*(_QWORD *)(a2 + 8) + 56LL);
        if ( *v11 )
        {
          sub_1403D99B4((ULONG)v11, (PVOID)2);
          sub_1403D99B4(
            *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
        }
      }
      v12 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
      if ( v12 )
      {
        v13 = (unsigned __int16 *)(v12 + 40);
        sub_1403D99B4(v12, (PVOID)0x310);
        if ( *v13 )
        {
          sub_1403D99B4((ULONG)v13, (PVOID)2);
          sub_1403D99B4(*((_QWORD *)v13 + 1), (PVOID)*v13);
        }
        v14 = *(_QWORD *)(a2 + 312);
        v15 = *(_QWORD *)(v14 + 40);
        if ( *(_WORD *)(v15 + 56) )
        {
          sub_1403D99B4(v15 + 56, (PVOID)2);
          sub_1403D99B4(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL));
          v14 = *(_QWORD *)(a2 + 312);
        }
        v16 = *(_QWORD *)(*(_QWORD *)(v14 + 40) + 16LL);
        if ( v16 )
        {
          v17 = (_WORD *)(v16 + 56);
          if ( *v17 )
          {
            sub_1403D99B4((ULONG)v17, (PVOID)2);
            v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
            sub_1403D99B4(*(_QWORD *)(v18 + 64), (PVOID)*(unsigned __int16 *)(v18 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, a2, 0LL, 0LL);
    }
    a1 = v41;
  }
  v19 = 0LL;
  Src = 0LL;
  v20 = 0;
  v39 = 0;
  P = 0LL;
  v21 = 0LL;
  v38 = 0;
  if ( !byte_140C44618 )
    return (unsigned int)-1073741637;
  if ( a7 )
    return (unsigned int)-1073741582;
  v22 = sub_140941490(a1, &v48);
  if ( v22 < 0 )
    return (unsigned int)v22;
  if ( !a2 )
  {
LABEL_33:
    v24 = 1;
    v25 = sub_140941654(v41, a2, Size, v44, 0LL, &v46, 0LL, 1);
    v22 = v25;
    if ( v25 == -1073741772 )
    {
      v22 = 0;
    }
    else if ( v25 < 0 )
    {
      goto LABEL_38;
    }
    Size = (a6 + 4103) & 0xFFFFFFFFFFFFF000uLL;
    PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, Size, MmCached, 0x14u);
    v41 = PagesForMdl;
    if ( PagesForMdl )
    {
      v28 = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
      P = v28;
      if ( v28 )
      {
        memset(v28, 0, Size);
        v38 = 2 * v20 + 24;
        Pool2 = ExAllocatePool2(64LL, v38, 1634758224LL);
        v30 = Pool2;
        if ( !Pool2 )
          goto LABEL_38;
        *(_WORD *)Pool2 = 2;
        *(_QWORD *)(Pool2 + 8) = a6;
        *(_DWORD *)(Pool2 + 20) = a5;
        if ( v44 )
          *(_WORD *)(Pool2 + 16) = *v44;
        v31 = ExAllocatePool2(64LL, 56LL, 1634758224LL);
        v19 = (_QWORD *)v31;
        if ( v31 )
        {
          *(_QWORD *)(v31 + 40) = P;
          *(_QWORD *)(v31 + 8) = v41;
          *(_QWORD *)(v31 + 48) = v30;
          *(_OWORD *)(v31 + 16) = v48;
          if ( a2 )
          {
            v32 = Src;
            v33 = 2 * v39;
            *(_DWORD *)(v30 + 4) = 2 * v39;
            memmove((void *)(v30 + 24), v32, v33);
            v24 = 2;
          }
          v34 = v41;
          v35 = v41;
          *(_DWORD *)v19 = v24;
          KsrMdlToMemoryRuns(v35, 0LL, 0LL, &v37);
          v36 = ExAllocatePool2(64LL, 8LL * v37, 1634758224LL);
          v21 = (void *)v36;
          if ( v36 )
          {
            v22 = KsrMdlToMemoryRuns(v34, v36, v37, &v37);
            if ( v22 >= 0 )
            {
              v22 = KsrPersistMemoryWithMetadata(&v48, v21, v37, v30, v38, &v45);
              if ( v22 >= 0 )
              {
                v19[4] = v45;
                *v47 = v19;
                v19 = 0LL;
              }
            }
          }
          else
          {
            v22 = -1073741670;
          }
          goto LABEL_39;
        }
      }
    }
    v22 = -1073741670;
LABEL_38:
    v21 = 0LL;
    goto LABEL_39;
  }
  if ( Size )
  {
    Src = *(void **)(Size + 8);
    if ( !Src )
      return (unsigned int)-1073741811;
    v23 = *(unsigned __int16 *)Size;
    if ( !(_WORD)v23 )
      return (unsigned int)-1073741811;
    v20 = v23 >> 1;
    goto LABEL_32;
  }
  v22 = sub_140941244(a2);
  if ( v22 >= 0 )
  {
    v20 = v38;
    Src = P;
LABEL_32:
    v39 = v20;
    goto LABEL_33;
  }
LABEL_39:
  if ( v19 )
    ExFreePoolWithTag(v19, 0x61706E50u);
  if ( v21 )
    ExFreePoolWithTag(v21, 0x61706E50u);
  return (unsigned int)v22;
}
