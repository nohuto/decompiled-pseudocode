/*
 * XREFs of PsspCaptureAuxiliaryPages @ 0x180129BC8
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180128820 (PssNtCaptureSnapshot.c)
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

__int64 __fastcall PsspCaptureAuxiliaryPages(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v5; // ebx
  int v7; // edi
  __int64 result; // rax
  int Section; // r14d
  _QWORD *Heap; // [rsp+50h] [rbp-30h]
  HANDLE Handle; // [rsp+68h] [rbp-18h]

  v5 = 0;
  if ( !is_mul_ok(0x1000uLL, 1uLL) )
    return 3221225621LL;
  v7 = a3 & 0x20000000;
  if ( (a3 & 0x20000000) != 0 )
  {
    Heap = 0LL;
    result = ZwAllocateVirtualMemory();
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    Heap = (_QWORD *)RtlAllocateHeap(
                       (__int64)NtCurrentPeb()->ProcessHeap,
                       (0x1000 * (unsigned __int128)1uLL) >> 64,
                       64LL);
    if ( !Heap )
      return 3221225626LL;
  }
  Section = NtCreateSection();
  if ( Section >= 0 )
  {
    Section = ZwMapViewOfSection();
    if ( Section < 0 )
    {
      NtClose(Handle);
      goto LABEL_7;
    }
    memset_thunk_772440563353939046(Heap, 0, 0x40uLL);
    if ( *a4 == 2147352576LL )
    {
      memmove(0LL, (const void *)0x7FFE0000, 0x738uLL);
    }
    else if ( (int)ZwReadVirtualMemory() < 0 )
    {
LABEL_18:
      NtUnmapViewOfSection();
      *(_DWORD *)(a1 + 888) = v5;
      *(_DWORD *)(a1 + 4) |= v7 != 0 ? 4 : 2;
      *(_QWORD *)(a1 + 896) = Handle;
      *(_QWORD *)(a1 + 904) = Heap;
      *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
      return 0LL;
    }
    if ( (int)ZwQueryVirtualMemory() >= 0 )
    {
      v5 = 1;
      *Heap = *a4;
      Heap[7] = MEMORY[0x7FFE0014];
    }
    goto LABEL_18;
  }
LABEL_7:
  if ( v7 )
    ZwFreeVirtualMemory();
  else
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
  return (unsigned int)Section;
}
