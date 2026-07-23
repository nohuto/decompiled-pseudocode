/*
 * XREFs of RtlpInitializeAssemblyStorageMap @ 0x180075B64
 * Callers:
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180074C34 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlCreateActivationContext @ 0x180075A10 (RtlCreateActivationContext.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     DbgPrintEx @ 0x180053A30 (DbgPrintEx.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpInitializeAssemblyStorageMap(int *a1, unsigned int a2, void *a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdi
  PVOID Heap; // rbp
  int v7; // r15d
  unsigned __int128 v9; // rax

  v3 = 0;
  v4 = a2;
  Heap = a3;
  v7 = 0;
  if ( !a1 || !a2 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() bad parameters:\nSXS:    Map        : 0x%p\nSXS:    EntryCount : 0x%lx\n",
      "RtlpInitializeAssemblyStorageMap",
      a1,
      a2);
    return (unsigned int)-1073741811;
  }
  if ( !a3 )
  {
    v9 = a2 * (unsigned __int128)8uLL;
    if ( !is_mul_ok(v4, 8uLL) )
      return (unsigned int)-1073741675;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, DWORD2(v9), 8 * v4);
    if ( !Heap )
      return (unsigned int)-1073741801;
    v7 = 1;
  }
  if ( (_DWORD)v4 )
    memset_thunk_772440563353939046(Heap, 0, 8LL * (unsigned int)v4);
  *a1 = v7;
  a1[1] = v4;
  *((_QWORD *)a1 + 1) = Heap;
  return v3;
}
