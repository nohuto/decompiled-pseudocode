/*
 * XREFs of sub_140514A70 @ 0x140514A70
 * Callers:
 *     sub_140511050 @ 0x140511050 (sub_140511050.c)
 *     sub_1405111C0 @ 0x1405111C0 (sub_1405111C0.c)
 *     sub_140514500 @ 0x140514500 (sub_140514500.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     MmAllocatePagesForMdlEx @ 0x1402630A0 (MmAllocatePagesForMdlEx.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140264F60 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_1403B27B8 @ 0x1403B27B8 (sub_1403B27B8.c)
 *     MmAllocateContiguousMemoryEx @ 0x1403B28D0 (MmAllocateContiguousMemoryEx.c)
 *     sub_1403B2A28 @ 0x1403B2A28 (sub_1403B2A28.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140514E28 @ 0x140514E28 (sub_140514E28.c)
 */

__int64 __fastcall sub_140514A70(
        ULONG_PTR BugCheckParameter3,
        PHYSICAL_ADDRESS *a2,
        unsigned __int64 *a3,
        int a4,
        char a5,
        MEMORY_CACHING_TYPE *a6,
        unsigned int a7,
        PHYSICAL_ADDRESS *a8,
        _RTL_BALANCED_NODE **a9)
{
  SIZE_T v9; // r13
  _RTL_BALANCED_NODE *v10; // r12
  struct _MDL *v12; // r14
  int v13; // edi
  __int64 v14; // rax
  int v15; // r10d
  PHYSICAL_ADDRESS v16; // rsi
  unsigned __int64 v17; // rdi
  MEMORY_CACHING_TYPE CacheType; // r8d
  __int64 v19; // r9
  unsigned int v20; // ecx
  unsigned int Flags; // r11d
  int v22; // ecx
  int v23; // ecx
  PHYSICAL_ADDRESS v24; // rdx
  struct _MDL *PagesForMdl; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  char v28; // [rsp+50h] [rbp-49h]
  char v29; // [rsp+51h] [rbp-48h]
  char v30; // [rsp+52h] [rbp-47h]
  MEMORY_CACHING_TYPE v31; // [rsp+54h] [rbp-45h]
  int v32; // [rsp+58h] [rbp-41h]
  unsigned int v33; // [rsp+5Ch] [rbp-3Dh]
  int v34[2]; // [rsp+60h] [rbp-39h] BYREF
  PHYSICAL_ADDRESS v35; // [rsp+68h] [rbp-31h]
  PVOID BaseAddress; // [rsp+70h] [rbp-29h] BYREF
  unsigned __int64 v37; // [rsp+78h] [rbp-21h]
  PHYSICAL_ADDRESS v38; // [rsp+80h] [rbp-19h]
  __int128 v39; // [rsp+88h] [rbp-11h] BYREF
  SIZE_T v40; // [rsp+98h] [rbp-1h]
  char v43; // [rsp+F8h] [rbp+5Fh]

  v37 = 0LL;
  v38.QuadPart = 0LL;
  v35.QuadPart = 0LL;
  v9 = (a4 + 4095) & 0xFFFFF000;
  LODWORD(v40) = 0;
  v10 = 0LL;
  v33 = (a4 + 4095) & 0xFFFFF000;
  BaseAddress = 0LL;
  v39 = 0LL;
  v12 = 0LL;
  v30 = 0;
  v29 = 0;
  v43 = 0;
  v28 = 0;
  v32 = 21;
  v13 = sub_1403B2A28(BugCheckParameter3);
  if ( v13 < 0 )
    return (unsigned int)v13;
  v14 = *(_QWORD *)(BugCheckParameter3 + 56);
  v15 = 1;
  if ( v14 )
    *(_BYTE *)(v14 + 516) = 1;
  v16.QuadPart = 0LL;
  if ( a2 )
    v16 = *a2;
  v17 = *(_QWORD *)(BugCheckParameter3 + 16);
  if ( a3 && v17 > *a3 )
    v17 = *a3;
  CacheType = *(_BYTE *)(BugCheckParameter3 + 32) != 0;
  v31 = CacheType;
  if ( a6 )
  {
    CacheType = *a6;
    v31 = *a6;
    if ( *a6 > (unsigned int)MmCached )
    {
      v13 = -1073741811;
      goto LABEL_52;
    }
  }
  v19 = *(_QWORD *)(BugCheckParameter3 + 24);
  if ( (a5 & 1) != 0 )
  {
    v20 = 1;
    v9 = ((_DWORD)v9 + 0x1FFFFF) & 0xFFE00000;
    v33 = v9;
    do
    {
      if ( 1LL << v20 >= (unsigned __int64)(unsigned int)v9 )
        break;
      ++v20;
    }
    while ( v20 < 0x3F );
    Flags = 101;
    v19 = 1LL << v20;
    v32 = 101;
  }
  else
  {
    Flags = 21;
  }
  v22 = *(_DWORD *)(BugCheckParameter3 + 48);
  if ( v22 != 2 )
  {
    v15 = 0;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        if ( v23 != 1 )
          goto LABEL_29;
      }
      else
      {
        v28 = 1;
      }
    }
  }
  *(_QWORD *)v34 = v9;
  if ( (int)MmAllocateContiguousMemoryEx(
              (__int64 *)v34,
              v16.QuadPart,
              v17,
              v19,
              a7,
              CacheType != MmNonCached ? 4 : 516,
              0LL,
              0x446C6148u,
              v15,
              (unsigned __int64 *)&BaseAddress) >= 0 )
  {
    if ( *(_QWORD *)v34 == v9 )
    {
      v10 = (_RTL_BALANCED_NODE *)BaseAddress;
      goto LABEL_35;
    }
    MmFreeContiguousMemory(BaseAddress);
  }
  if ( *(_DWORD *)(BugCheckParameter3 + 48) != 2 )
  {
LABEL_51:
    v13 = -1073741670;
    goto LABEL_52;
  }
  CacheType = v31;
  Flags = v32 & 0xFFFFFFEF;
  v9 = v33;
LABEL_29:
  v24 = *(PHYSICAL_ADDRESS *)(BugCheckParameter3 + 16);
  v43 = 1;
  if ( a7 == 0x80000000 )
    PagesForMdl = MmAllocatePagesForMdlEx(v16, v24, 0LL, v9, CacheType, Flags);
  else
    PagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(
                                   v16.LowPart,
                                   v24.LowPart,
                                   0LL,
                                   v9,
                                   CacheType,
                                   a7,
                                   Flags,
                                   0LL);
  v12 = PagesForMdl;
  if ( !PagesForMdl )
    goto LABEL_51;
  v10 = (_RTL_BALANCED_NODE *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, v31, 0LL, 0, 0x40000010u);
LABEL_35:
  if ( !v10 )
    goto LABEL_51;
  PhysicalAddress = MmGetPhysicalAddress(v10);
  v35 = PhysicalAddress;
  if ( v12 )
  {
    *((_QWORD *)&v39 + 1) = v12;
  }
  else
  {
    LODWORD(v39) = 1;
    *((PHYSICAL_ADDRESS *)&v39 + 1) = PhysicalAddress;
    v40 = v9;
  }
  if ( v43 )
  {
    v38 = v16;
    v37 = v17;
    v13 = sub_14042A5E0(*(_QWORD *)(BugCheckParameter3 + 40), 3LL);
    if ( v13 >= 0 )
    {
      v30 = 1;
LABEL_45:
      v13 = sub_1403B27B8((__int64)v12, v10, BugCheckParameter3, 1);
      if ( v13 >= 0 )
      {
        *a8 = v35;
        *a9 = v10;
        return (unsigned int)v13;
      }
      if ( v29 )
      {
        sub_14042A5E0(*(_QWORD *)(BugCheckParameter3 + 40), &v39);
      }
      else if ( v30 )
      {
        sub_14042A5E0(*(_QWORD *)(BugCheckParameter3 + 40), (PHYSICAL_ADDRESS)v35.QuadPart);
      }
    }
  }
  else
  {
    if ( !v28 )
      goto LABEL_45;
    v13 = sub_14042A5E0(*(_QWORD *)(BugCheckParameter3 + 40), 3LL);
    if ( v13 >= 0 )
    {
      v29 = 1;
      goto LABEL_45;
    }
  }
LABEL_52:
  sub_140514E28(BugCheckParameter3);
  if ( v10 )
  {
    if ( v12 )
    {
      MmUnmapLockedPages(v10, v12);
LABEL_57:
      sub_140221A30((ULONG_PTR)v12, 0);
      return (unsigned int)v13;
    }
    MmFreeContiguousMemory(v10);
  }
  else if ( v12 )
  {
    goto LABEL_57;
  }
  return (unsigned int)v13;
}
