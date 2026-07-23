/*
 * XREFs of sub_140511BD0 @ 0x140511BD0
 * Callers:
 *     sub_1405110E0 @ 0x1405110E0 (sub_1405110E0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     MmAllocatePagesForMdlEx @ 0x1402630A0 (MmAllocatePagesForMdlEx.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140264F60 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_1403B2A28 @ 0x1403B2A28 (sub_1403B2A28.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140514E28 @ 0x140514E28 (sub_140514E28.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140511BD0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        MEMORY_CACHING_TYPE a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        char a9,
        __int64 *a10)
{
  void *v10; // r14
  struct _MDL *v11; // r15
  __int64 v12; // r13
  unsigned __int8 CurrentIrql; // al
  __int64 v14; // rdi
  __int64 v15; // rcx
  int v16; // ebx
  void *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r12
  ULONG_PTR v20; // rbx
  __int64 v21; // rcx
  void *v22; // rax
  unsigned __int64 v23; // r14
  __int64 v24; // r8
  ULONG Flags; // r10d
  PHYSICAL_ADDRESS v26; // rax
  unsigned __int64 v27; // rdx
  struct _MDL *PagesForMdl; // rax
  __int64 v29; // rcx
  unsigned int v30; // edx
  char *v31; // rax
  char *v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v37; // rdx
  _QWORD *v38; // r8
  __int64 v39; // rcx
  _QWORD *v40; // rdx
  __int64 v41; // r14
  struct _MDL *v42; // r15
  struct _MDL *Next; // rax
  KSPIN_LOCK *v44; // r14
  KIRQL v45; // al
  __int64 *v46; // rdx
  unsigned __int64 v47; // rbx
  __int64 v48; // rax
  unsigned __int8 v49; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v51; // r8
  int v52; // eax
  bool v53; // zf
  int v54; // [rsp+48h] [rbp-41h]
  PVOID v55; // [rsp+58h] [rbp-31h]
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-29h]

  v10 = 0LL;
  v55 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1DCu, 1uLL, CurrentIrql, 0LL, 0LL);
  if ( a6 )
    return 3221225485LL;
  v14 = *(_QWORD *)(a1 + 504);
  BugCheckParameter3 = v14;
  v54 = *(_DWORD *)(v14 + 48);
  if ( a9 )
    goto LABEL_7;
  if ( *(_DWORD *)(v14 + 48) != 2 )
    return 3221225485LL;
  v54 = 3;
LABEL_7:
  v16 = sub_1403B2A28(v14);
  if ( v16 < 0 )
    return (unsigned int)v16;
  v17 = (void *)sub_1403B1F04(v15, 80LL);
  v18 = (__int64)v17;
  if ( !v17 )
  {
    v16 = -1073741670;
LABEL_42:
    sub_140514E28(BugCheckParameter3);
    if ( v18 )
      sub_1403B1B5C(v35, v18);
    if ( v12 )
      sub_1403B1B5C(v35, v12);
    if ( v11 )
    {
      if ( v10 )
        MmUnmapLockedPages(v10, v11);
      sub_140221A30((ULONG_PTR)v11, 0);
      ExFreePoolWithTag(v11, 0);
    }
    return (unsigned int)v16;
  }
  memset(v17, 0, 0x50uLL);
  v19 = a7;
  v20 = BugCheckParameter3;
  *(_QWORD *)(v18 + 32) = BugCheckParameter3;
  v22 = (void *)sub_1403B1F04(v21, 16LL * a7);
  v12 = (__int64)v22;
  if ( !v22 )
  {
    v16 = -1073741670;
    goto LABEL_42;
  }
  memset(v22, 0, 16LL * a7);
  *(_QWORD *)(v18 + 64) = v12;
  v23 = (a8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v54 != 3 )
  {
    v29 = 0LL;
    Flags = 36;
    while ( 1LL << v29 < v23 )
    {
      if ( (unsigned __int64)++v29 >= 0x40 )
        goto LABEL_21;
    }
    v23 = 1LL << v29;
LABEL_21:
    if ( 1LL << v29 == v23 )
    {
      v24 = v23;
      v26.QuadPart = a2;
      v30 = *(_DWORD *)(a1 + 440);
      if ( v30 < 0x40 )
        v27 = (1LL << v30) - 1;
      else
        v27 = -1LL;
      if ( a3 < v27 )
        v27 = a3;
      if ( a2 < v27 )
        goto LABEL_14;
      v16 = -1073741584;
    }
    else
    {
      v16 = -1073741577;
    }
    v10 = 0LL;
    goto LABEL_42;
  }
  v24 = 0LL;
  Flags = 20;
  v26.QuadPart = 0LL;
  v27 = -1LL;
LABEL_14:
  *(_DWORD *)(v18 + 24) = a7;
  *(_QWORD *)(v18 + 16) = v23;
  if ( a5 == 0x80000000 )
    PagesForMdl = MmAllocatePagesForMdlEx(v26, (PHYSICAL_ADDRESS)v27, (PHYSICAL_ADDRESS)v24, v23 * a7, a4, Flags);
  else
    PagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(
                                   v26.LowPart,
                                   v27,
                                   v24,
                                   v23 * a7,
                                   a4,
                                   a5,
                                   Flags,
                                   0LL);
  v11 = PagesForMdl;
  if ( !PagesForMdl )
  {
    v16 = -1073741670;
LABEL_41:
    v10 = v55;
    goto LABEL_42;
  }
  v31 = (char *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, a4, 0LL, 0, 0x40000010u);
  v55 = v31;
  v32 = v31;
  if ( !v31 )
  {
    v16 = -1073741670;
    v10 = 0LL;
    goto LABEL_42;
  }
  *(_QWORD *)(v18 + 40) = v11;
  *(_QWORD *)(v18 + 48) = v31;
  if ( a7 )
  {
    v33 = (_QWORD *)v12;
    v34 = a7;
    do
    {
      *v33 = v32;
      v32 += v23;
      v33 += 2;
      --v34;
    }
    while ( v34 );
  }
  if ( v54 == 3 )
  {
    v16 = sub_14042A5E0(*(_QWORD *)(BugCheckParameter3 + 40), 3LL);
    if ( v16 < 0 )
      goto LABEL_41;
    if ( a7 )
    {
      v37 = 0LL;
      v38 = (_QWORD *)(v12 + 8);
      do
      {
        v39 = v37;
        v37 += v23;
        *v38 = v39;
        v38 += 2;
        --v19;
      }
      while ( v19 );
    }
    v20 = BugCheckParameter3;
    *(_QWORD *)(v18 + 56) = 0LL;
    *(_BYTE *)(v18 + 72) = 1;
  }
  else if ( a7 )
  {
    v40 = (_QWORD *)(v12 + 8);
    v41 = 8 * (v23 >> 12);
    v42 = v11 + 1;
    do
    {
      Next = v42->Next;
      v42 = (struct _MDL *)((char *)v42 + v41);
      *v40 = (_QWORD)Next << 12;
      v40 += 2;
      --v19;
    }
    while ( v19 );
  }
  v44 = (KSPIN_LOCK *)(v20 + 104);
  v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 104));
  v46 = (__int64 *)(BugCheckParameter3 + 88);
  v47 = v45;
  v48 = *(_QWORD *)(BugCheckParameter3 + 88);
  if ( *(_QWORD *)(v48 + 8) != BugCheckParameter3 + 88 )
    __fastfail(3u);
  *(_QWORD *)v18 = v48;
  *(_QWORD *)(v18 + 8) = v46;
  *(_QWORD *)(v48 + 8) = v18;
  *v46 = v18;
  KeReleaseSpinLockFromDpcLevel(v44);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v49 = KeGetCurrentIrql();
      if ( v49 <= 0xFu && (unsigned __int8)v47 <= 0xFu && v49 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v51 = *((_QWORD *)CurrentPrcb + 4375);
        v52 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v47 + 1));
        v53 = (v52 & *(_DWORD *)(v51 + 20)) == 0;
        *(_DWORD *)(v51 + 20) &= v52;
        if ( v53 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v47);
  *a10 = v18;
  return 0LL;
}
