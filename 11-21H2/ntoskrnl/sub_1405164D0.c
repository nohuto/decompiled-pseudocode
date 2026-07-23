/*
 * XREFs of sub_1405164D0 @ 0x1405164D0
 * Callers:
 *     sub_140515D20 @ 0x140515D20 (sub_140515D20.c)
 *     sub_140515DC0 @ 0x140515DC0 (sub_140515DC0.c)
 *     sub_140515E40 @ 0x140515E40 (sub_140515E40.c)
 * Callees:
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     MmAllocatePagesForMdlEx @ 0x1402630A0 (MmAllocatePagesForMdlEx.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140264F60 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_1403B27B8 @ 0x1403B27B8 (sub_1403B27B8.c)
 *     sub_1403B2A28 @ 0x1403B2A28 (sub_1403B2A28.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140514E28 @ 0x140514E28 (sub_140514E28.c)
 */

__int64 __fastcall sub_1405164D0(
        __int64 *BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        MEMORY_CACHING_TYPE *a6,
        unsigned int a7,
        _QWORD *a8,
        _RTL_BALANCED_NODE **a9)
{
  SIZE_T v9; // r14
  _RTL_BALANCED_NODE *v11; // rbp
  struct _MDL *v12; // rsi
  int v13; // edi
  __int64 v14; // rax
  MEMORY_CACHING_TYPE CacheType; // edi
  PHYSICAL_ADDRESS v16; // rdx
  int Flags; // ecx
  struct _MDL *PagesForMdl; // rax

  v9 = (a4 + 4095) & 0xFFFFF000;
  v11 = 0LL;
  v12 = 0LL;
  v13 = sub_1403B2A28((__int64)BugCheckParameter3);
  if ( v13 >= 0 )
  {
    v14 = BugCheckParameter3[7];
    if ( v14 )
      *(_BYTE *)(v14 + 516) = 1;
    CacheType = MmCached;
    if ( a6 && (CacheType = *a6, *a6 > (unsigned int)MmCached) )
    {
      v13 = -1073741811;
    }
    else
    {
      if ( (a5 & 1) != 0 )
        v9 = ((_DWORD)v9 + 0x1FFFFF) & 0xFFE00000;
      v16.QuadPart = BugCheckParameter3[2];
      Flags = (a5 & 1) != 0 ? 101 : 21;
      if ( a7 == 0x80000000 )
        PagesForMdl = MmAllocatePagesForMdlEx(0LL, v16, 0LL, v9, CacheType, Flags);
      else
        PagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(
                                       0,
                                       v16.LowPart,
                                       0LL,
                                       v9,
                                       CacheType,
                                       a7,
                                       Flags,
                                       0LL);
      v12 = PagesForMdl;
      if ( PagesForMdl
        && (v11 = (_RTL_BALANCED_NODE *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, CacheType, 0LL, 0, 0x40000010u)) != 0LL )
      {
        v13 = sub_14042A5E0(BugCheckParameter3[5], 3LL);
        if ( v13 >= 0 )
        {
          v13 = sub_1403B27B8((__int64)v12, v11, (__int64)BugCheckParameter3, 1);
          if ( v13 >= 0 )
          {
            *a8 = 0LL;
            *a9 = v11;
            return (unsigned int)v13;
          }
          sub_14042A5E0(BugCheckParameter3[5], 0LL);
        }
      }
      else
      {
        v13 = -1073741670;
      }
    }
    sub_140514E28(BugCheckParameter3);
    if ( v11 )
      MmUnmapLockedPages(v11, v12);
    if ( v12 )
      sub_140221A30((ULONG_PTR)v12, 0);
  }
  return (unsigned int)v13;
}
