/*
 * XREFs of RtlCreateQueryDebugBuffer @ 0x180002480
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800E3270 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009F0F0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009F1B0 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009F2F0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009F730 (NtCreateSection.c)
 */

PRTL_DEBUG_INFORMATION __cdecl RtlCreateQueryDebugBuffer(ULONG MaximumCommit, BOOLEAN UseEventPair)
{
  unsigned __int64 v2; // rbx
  _OWORD *v3; // rax
  _OWORD *v4; // rcx
  __int128 v5; // xmm0
  PSIZE_T ViewSize; // [rsp+30h] [rbp-50h]
  HANDLE SectionHandle; // [rsp+50h] [rbp-30h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-28h] BYREF
  ULONG_PTR v10; // [rsp+60h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-18h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+70h] [rbp-10h] BYREF
  ULONG_PTR v13; // [rsp+78h] [rbp-8h] BYREF
  PVOID v14; // [rsp+B0h] [rbp+30h] BYREF
  PVOID v15; // [rsp+B8h] [rbp+38h] BYREF

  SectionHandle = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  BaseAddress = 0LL;
  if ( MaximumCommit )
  {
    v2 = (MaximumCommit + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    if ( v2 > 0xFFFFFFFF )
      return 0LL;
  }
  else
  {
    v2 = 0x400000LL;
  }
  if ( is_mul_ok(v2, 2uLL) )
  {
    v13 = 2 * v2;
    MaximumSize.QuadPart = 2 * v2;
    if ( NtCreateSection(
           &SectionHandle,
           0xF001Fu,
           0LL,
           &MaximumSize,
           4u,
           0x4000000u,
           (HANDLE)(((v2 * (unsigned __int128)2uLL) >> 64) & (unsigned __int64)ViewSize)) >= 0
      && ZwMapViewOfSection(
           SectionHandle,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &BaseAddress,
           0LL,
           0LL,
           0LL,
           &v13,
           ViewUnmap,
           0,
           4u) >= 0 )
    {
      v14 = BaseAddress;
      RegionSize = 208LL;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v14, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
      {
        v15 = (char *)v14 + v2;
        v10 = 208LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v15, 0LL, &v10, 0x1000u, 4u) >= 0 )
        {
          *(_QWORD *)v14 = SectionHandle;
          *((_QWORD *)v14 + 1) = v14;
          *((_QWORD *)v14 + 9) = 208LL;
          *((_QWORD *)v14 + 10) = RegionSize;
          *((_QWORD *)v14 + 11) = v2;
          v3 = v14;
          v4 = v15;
          *(_OWORD *)v15 = *(_OWORD *)v14;
          v4[1] = v3[1];
          v4[2] = v3[2];
          v4[3] = v3[3];
          v4[4] = v3[4];
          v4[5] = v3[5];
          v4[6] = v3[6];
          v4 += 8;
          v5 = v3[7];
          v3 += 8;
          *(v4 - 1) = v5;
          *v4 = *v3;
          v4[1] = v3[1];
          v4[2] = v3[2];
          v4[3] = v3[3];
          v4[4] = v3[4];
          *((_QWORD *)v15 + 1) = v15;
          *((_QWORD *)v15 + 10) = v10;
          *(_QWORD *)v15 = 0LL;
          return (PRTL_DEBUG_INFORMATION)v14;
        }
      }
    }
    if ( v14 )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v14, &RegionSize, 0x8000u);
    if ( v15 )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v15, &v10, 0x8000u);
    if ( BaseAddress )
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    if ( SectionHandle )
      NtClose(SectionHandle);
  }
  return 0LL;
}
