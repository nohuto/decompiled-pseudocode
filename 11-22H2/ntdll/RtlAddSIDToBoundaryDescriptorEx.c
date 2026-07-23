/*
 * XREFs of RtlAddSIDToBoundaryDescriptorEx @ 0x180083960
 * Callers:
 *     RtlAddSIDToBoundaryDescriptor @ 0x180083950 (RtlAddSIDToBoundaryDescriptor.c)
 *     RtlAddIntegrityLabelToBoundaryDescriptor @ 0x1800F5AC0 (RtlAddIntegrityLabelToBoundaryDescriptor.c)
 * Callees:
 *     RtlValidSid @ 0x18001B310 (RtlValidSid.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x180082B1C (RtlEnumerateBoundaryDescriptorEntries.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall RtlAddSIDToBoundaryDescriptorEx(__int64 a1, unsigned __int8 *a2, char a3)
{
  _DWORD *v6; // rsi
  unsigned int v7; // edi
  unsigned int v8; // ecx
  _DWORD *Heap; // rax
  _DWORD *v10; // rbx
  _DWORD *v11; // rcx
  int v12; // edi
  void *ProcessHeap; // rcx
  __int64 result; // rax

  if ( !RtlValidSid(a2) )
    return 3221225485LL;
  v6 = *(_DWORD **)a1;
  v7 = (4 * a2[1] + 23) & 0xFFFFFFF8;
  v8 = v7 + *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  if ( v8 < v7 )
    return 3221225843LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v8);
  v10 = Heap;
  if ( !Heap )
    return 3221225626LL;
  memmove(Heap, v6, (unsigned int)v6[2]);
  v10[2] = v7 + v6[2];
  v10[1] = v6[1] + 1;
  v11 = (_DWORD *)((char *)v10 + (unsigned int)v6[2]);
  v11[1] = v7;
  *v11 = (a3 != 0) + 2;
  memmove(v11 + 2, a2, 4LL * a2[1] + 8);
  v12 = RtlEnumerateBoundaryDescriptorEntries(v10);
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( v12 < 0 )
  {
    RtlFreeHeap(ProcessHeap, 0, v10);
    return (unsigned int)v12;
  }
  else
  {
    RtlFreeHeap(ProcessHeap, 0, v6);
    result = 0LL;
    *(_QWORD *)a1 = v10;
  }
  return result;
}
