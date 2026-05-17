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

__int64 __fastcall PsspCaptureAuxiliaryPages(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v6; // ebx
  int v8; // edi
  int v9; // r14d
  void *v10; // r14
  __int64 result; // rax
  void *Heap; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+58h] [rbp-28h] BYREF
  void *v14; // [rsp+60h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-18h] BYREF
  __int64 v16; // [rsp+70h] [rbp-10h] BYREF

  v6 = 0;
  if ( !is_mul_ok(0x1000uLL, 1uLL) )
    return 3221225621LL;
  v8 = a3 & 0x20000000;
  if ( (a3 & 0x20000000) != 0 )
  {
    Heap = 0LL;
    v13 = 64LL;
    result = ZwAllocateVirtualMemory(-1LL, &Heap, 0LL, &v13, 4096, 4);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (0x1000 * (unsigned __int128)1uLL) >> 64, 64LL);
    if ( !Heap )
      return 3221225626LL;
  }
  v16 = 4096LL;
  v9 = NtCreateSection(&Handle, 983047LL, L"0", &v16, 4, 0x8000000, 0LL);
  if ( v9 >= 0 )
  {
    v14 = 0LL;
    v13 = 0LL;
    v9 = ZwMapViewOfSection(Handle, -1LL, &v14, 0LL, 0LL, 0LL, &v13, 1, 0, 4);
    if ( v9 >= 0 )
    {
      v10 = v14;
      memset(Heap, 0, 0x40uLL);
      if ( *a4 == 2147352576LL )
      {
        memmove(v10, (const void *)0x7FFE0000, 0x730uLL);
      }
      else if ( (int)ZwReadVirtualMemory(a2, *a4, v10, 4096LL, 0LL) < 0 )
      {
LABEL_10:
        NtUnmapViewOfSection(-1LL);
        *(_DWORD *)(a1 + 888) = v6;
        *(_DWORD *)(a1 + 4) |= v8 != 0 ? 4 : 2;
        *(_QWORD *)(a1 + 896) = Handle;
        *(_QWORD *)(a1 + 904) = Heap;
        *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
        return 0LL;
      }
      if ( (int)ZwQueryVirtualMemory(a2, *a4, 0LL, (char *)Heap + 8, 48LL, 0LL) >= 0 )
      {
        v6 = 1;
        *(_QWORD *)Heap = *a4;
        *((_QWORD *)Heap + 7) = MEMORY[0x7FFE0014];
      }
      goto LABEL_10;
    }
    NtClose(Handle);
  }
  if ( v8 )
  {
    v13 = 0LL;
    ZwFreeVirtualMemory(-1LL, &Heap, &v13, 0x8000LL);
  }
  else
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
  }
  return (unsigned int)v9;
}
