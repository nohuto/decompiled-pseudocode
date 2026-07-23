/*
 * XREFs of sub_1403B2614 @ 0x1403B2614
 * Callers:
 *     sub_1403B2580 @ 0x1403B2580 (sub_1403B2580.c)
 *     sub_140515710 @ 0x140515710 (sub_140515710.c)
 *     sub_140515790 @ 0x140515790 (sub_140515790.c)
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

__int64 __fastcall sub_1403B2614(
        ULONG_PTR a1,
        PHYSICAL_ADDRESS *a2,
        PHYSICAL_ADDRESS *a3,
        int a4,
        char a5,
        MEMORY_CACHING_TYPE *a6,
        int a7,
        PHYSICAL_ADDRESS *a8,
        _QWORD *a9)
{
  PVOID v9; // r14
  SIZE_T v10; // r12
  struct _MDL *v12; // r15
  int v13; // esi
  __int64 v14; // rax
  PHYSICAL_ADDRESS v15; // rdi
  PHYSICAL_ADDRESS v16; // r8
  MEMORY_CACHING_TYPE v17; // esi
  __int64 v18; // r9
  PHYSICAL_ADDRESS PhysicalAddress; // rdi
  PHYSICAL_ADDRESS v20; // r9
  PVOID v21; // rdi
  unsigned int v23; // ecx
  PHYSICAL_ADDRESS v24; // rdx
  struct _MDL *v25; // rax
  __int64 v26; // rcx
  MEMORY_CACHING_TYPE CacheType[2]; // [rsp+20h] [rbp-69h]
  ULONG Flags[2]; // [rsp+28h] [rbp-61h]
  PHYSICAL_ADDRESS *v29; // [rsp+30h] [rbp-59h]
  ULONG v30; // [rsp+50h] [rbp-39h]
  PVOID BaseAddress; // [rsp+58h] [rbp-31h] BYREF
  PHYSICAL_ADDRESS v32; // [rsp+60h] [rbp-29h] BYREF
  int v33[2]; // [rsp+68h] [rbp-21h] BYREF
  __int128 v34; // [rsp+70h] [rbp-19h]
  int v35; // [rsp+80h] [rbp-9h]
  char v38; // [rsp+E8h] [rbp+5Fh]

  v30 = 5;
  v32.QuadPart = 0LL;
  v35 = 0;
  v9 = 0LL;
  v38 = 0;
  v34 = 0LL;
  BaseAddress = 0LL;
  v10 = (a4 + 4095) & 0xFFFFF000;
  v12 = 0LL;
  v13 = sub_1403B2A28();
  if ( v13 < 0 )
    return (unsigned int)v13;
  v14 = *(_QWORD *)(a1 + 56);
  if ( v14 )
    *(_BYTE *)(v14 + 516) = 1;
  v15.QuadPart = 0LL;
  if ( a2 && a2->QuadPart )
    v15 = *a2;
  v16 = *(PHYSICAL_ADDRESS *)(a1 + 16);
  if ( a3 && v16.QuadPart > (unsigned __int64)a3->QuadPart )
    v16 = *a3;
  if ( v15.QuadPart > (unsigned __int64)v16.QuadPart
    || (v17 = MmCached, a6) && (v17 = *a6, *a6 > (unsigned int)MmCached) )
  {
    v13 = -1073741811;
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 24);
    if ( (a5 & 1) != 0 )
    {
      v23 = 1;
      v10 = ((_DWORD)v10 + 0x1FFFFF) & 0xFFE00000;
      do
      {
        if ( 1LL << v23 >= (unsigned __int64)(unsigned int)v10 )
          break;
        ++v23;
      }
      while ( v23 < 0x3F );
      v30 = 101;
      v18 = 1LL << v23;
    }
    *(_QWORD *)v33 = v10;
    if ( (int)MmAllocateContiguousMemoryEx(
                (int)v33,
                v15.LowPart,
                v16.LowPart,
                v18,
                a7,
                v17 != MmNonCached ? 4 : 516,
                0LL,
                1147953480,
                *(_DWORD *)(a1 + 48) == 2,
                (__int64)&BaseAddress) >= 0 )
    {
      if ( *(_QWORD *)v33 == v10 )
        v9 = BaseAddress;
      else
        MmFreeContiguousMemory(BaseAddress);
      if ( v9 )
        goto LABEL_14;
    }
    if ( *(_DWORD *)(a1 + 48) == 2 )
    {
      v24 = *(PHYSICAL_ADDRESS *)(a1 + 16);
      v25 = a7 == 0x80000000
          ? MmAllocatePagesForMdlEx(v15, v24, 0LL, v10, v17, v30)
          : (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(v15.LowPart, v24.LowPart, 0LL, v10, v17, a7, v30, 0LL);
      v12 = v25;
      if ( v25 )
      {
        v9 = MmMapLockedPagesSpecifyCache(v25, 0, v17, 0LL, 0, 0x40000010u);
        if ( v9 )
        {
LABEL_14:
          PhysicalAddress = MmGetPhysicalAddress(v9);
          if ( v12 )
          {
            v29 = &v32;
            v26 = *(_QWORD *)(a1 + 40);
            *(_QWORD *)Flags = a3;
            *(_QWORD *)CacheType = a2;
            *((_QWORD *)&v34 + 1) = v12;
            v13 = sub_14042A5E0(v26, 3LL);
            if ( v13 < 0 )
              goto LABEL_24;
            PhysicalAddress = v32;
            v38 = 1;
          }
          LOBYTE(v20.LowPart) = 1;
          v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_1403B27B8)(
                  v12,
                  v9,
                  a1,
                  (PHYSICAL_ADDRESS)v20.QuadPart,
                  *(_QWORD *)CacheType,
                  *(_QWORD *)Flags,
                  v29);
          *a8 = PhysicalAddress;
          v21 = a9;
          *a9 = v9;
          if ( v13 >= 0 )
            return (unsigned int)v13;
          if ( v38 )
            sub_14042A5E0(*(_QWORD *)(a1 + 40), (PHYSICAL_ADDRESS)v32.QuadPart);
          goto LABEL_25;
        }
      }
    }
    v13 = -1073741670;
  }
LABEL_24:
  v21 = a9;
LABEL_25:
  sub_140514E28(a1);
  if ( v9 )
  {
    if ( v12 )
    {
      MmUnmapLockedPages(v9, v12);
LABEL_46:
      sub_140221A30((ULONG_PTR)v12, 0);
      return (unsigned int)v13;
    }
    MmFreeContiguousMemory(v21);
  }
  else if ( v12 )
  {
    goto LABEL_46;
  }
  return (unsigned int)v13;
}
