/*
 * XREFs of PsspCaptureAuxiliaryPages @ 0x180061BDC
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180060B70 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A4370 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A4430 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1800A44D0 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A4570 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A45B0 (NtUnmapViewOfSection.c)
 *     ZwReadVirtualMemory @ 0x1800A4850 (ZwReadVirtualMemory.c)
 *     NtCreateSection @ 0x1800A49B0 (NtCreateSection.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

NTSTATUS __fastcall PsspCaptureAuxiliaryPages(__int64 a1, void *a2, int a3, PVOID *a4)
{
  int v6; // ebx
  int v8; // edi
  NTSTATUS v9; // r14d
  PVOID v10; // r14
  NTSTATUS result; // eax
  PVOID Heap; // [rsp+50h] [rbp-30h] BYREF
  ULONG_PTR ViewSize; // [rsp+58h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-20h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-18h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+70h] [rbp-10h] BYREF

  v6 = 0;
  if ( !is_mul_ok(0x1000uLL, 1uLL) )
    return -1073741675;
  v8 = a3 & 0x20000000;
  if ( (a3 & 0x20000000) != 0 )
  {
    Heap = 0LL;
    ViewSize = 64LL;
    result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Heap, 0LL, &ViewSize, 0x1000u, 4u);
    if ( result < 0 )
      return result;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (0x1000 * (unsigned __int128)1uLL) >> 64, 0x40uLL);
    if ( !Heap )
      return -1073741670;
  }
  MaximumSize.QuadPart = 4096LL;
  v9 = NtCreateSection(&SectionHandle, 0xF0007u, (POBJECT_ATTRIBUTES)&stru_180131FF8, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v9 >= 0 )
  {
    BaseAddress = 0LL;
    ViewSize = 0LL;
    v9 = ZwMapViewOfSection(
           SectionHandle,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &BaseAddress,
           0LL,
           0LL,
           0LL,
           &ViewSize,
           ViewShare,
           0,
           4u);
    if ( v9 >= 0 )
    {
      v10 = BaseAddress;
      memset(Heap, 0, 0x40uLL);
      if ( *a4 == (PVOID)2147352576 )
      {
        memmove(v10, (const void *)0x7FFE0000, 0x730uLL);
      }
      else if ( ZwReadVirtualMemory(a2, *a4, v10, 0x1000uLL, 0LL) < 0 )
      {
LABEL_10:
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
        *(_DWORD *)(a1 + 888) = v6;
        *(_DWORD *)(a1 + 4) |= v8 != 0 ? 4 : 2;
        *(_QWORD *)(a1 + 896) = SectionHandle;
        *(_QWORD *)(a1 + 904) = Heap;
        *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
        return 0;
      }
      if ( ZwQueryVirtualMemory(a2, *a4, MemoryBasicInformation, (char *)Heap + 8, 0x30uLL, 0LL) >= 0 )
      {
        v6 = 1;
        *(_QWORD *)Heap = *a4;
        *((_QWORD *)Heap + 7) = MEMORY[0x7FFE0014];
      }
      goto LABEL_10;
    }
    NtClose(SectionHandle);
  }
  if ( v8 )
  {
    ViewSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Heap, &ViewSize, 0x8000u);
  }
  else
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  return v9;
}
