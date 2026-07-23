/*
 * XREFs of PsspCaptureAuxiliaryPages @ 0x180129B98
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1801287F0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A11B0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A1270 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1800A1310 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A13B0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A13F0 (NtUnmapViewOfSection.c)
 *     ZwReadVirtualMemory @ 0x1800A1690 (ZwReadVirtualMemory.c)
 *     NtCreateSection @ 0x1800A17F0 (NtCreateSection.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall PsspCaptureAuxiliaryPages(__int64 a1, void *a2, int a3, PVOID *a4)
{
  int v5; // ebx
  int v7; // edi
  NTSTATUS result; // eax
  NTSTATUS v9; // r14d
  PVOID v10; // r12
  __int64 v11; // r14
  void *v12; // r15
  NTSTATUS VirtualMemory; // eax
  PVOID BaseAddress; // [rsp+50h] [rbp-30h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-28h] BYREF
  PVOID Buffer; // [rsp+60h] [rbp-20h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-18h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+70h] [rbp-10h] BYREF

  v5 = 0;
  if ( !is_mul_ok(0x1000uLL, 1uLL) )
    return -1073741675;
  v7 = a3 & 0x20000000;
  if ( (a3 & 0x20000000) != 0 )
  {
    BaseAddress = 0LL;
    RegionSize = 64LL;
    result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( result < 0 )
      return result;
  }
  else
  {
    BaseAddress = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (0x1000 * (unsigned __int128)1uLL) >> 64, 0x40uLL);
    if ( !BaseAddress )
      return -1073741670;
  }
  MaximumSize.QuadPart = 4096LL;
  v9 = NtCreateSection(&SectionHandle, 0xF0007u, (POBJECT_ATTRIBUTES)&stru_18015C638, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v9 >= 0 )
  {
    Buffer = 0LL;
    RegionSize = 0LL;
    v9 = ZwMapViewOfSection(
           SectionHandle,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &Buffer,
           0LL,
           0LL,
           0LL,
           &RegionSize,
           ViewShare,
           0,
           4u);
    if ( v9 < 0 )
    {
      NtClose(SectionHandle);
      goto LABEL_7;
    }
    v10 = Buffer;
    memset_thunk_772440563353939046(BaseAddress, 0, 0x40uLL);
    v11 = 2147352576LL;
    if ( *a4 == (PVOID)2147352576 )
    {
      memmove(v10, (const void *)0x7FFE0000, 0x738uLL);
      v12 = a2;
    }
    else
    {
      v12 = a2;
      VirtualMemory = ZwReadVirtualMemory(a2, *a4, v10, 0x1000uLL, 0LL);
      v11 = (__int64)*a4;
      if ( VirtualMemory < 0 )
      {
LABEL_18:
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, Buffer);
        *(_DWORD *)(a1 + 888) = v5;
        *(_DWORD *)(a1 + 4) |= v7 != 0 ? 4 : 2;
        *(_QWORD *)(a1 + 896) = SectionHandle;
        *(_QWORD *)(a1 + 904) = BaseAddress;
        *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
        return 0;
      }
    }
    if ( ZwQueryVirtualMemory(v12, (PVOID)v11, MemoryBasicInformation, (char *)BaseAddress + 8, 0x30uLL, 0LL) >= 0 )
    {
      v5 = 1;
      *(_QWORD *)BaseAddress = *a4;
      *((_QWORD *)BaseAddress + 7) = MEMORY[0x7FFE0014];
    }
    goto LABEL_18;
  }
LABEL_7:
  if ( v7 )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  else
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return v9;
}
