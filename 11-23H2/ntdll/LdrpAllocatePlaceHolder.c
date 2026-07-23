/*
 * XREFs of LdrpAllocatePlaceHolder @ 0x18002E360
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18002E26C (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800D84C4 (LdrpCreatePendingEnclaveModule.c)
 * Callees:
 *     LdrpLogDllState @ 0x180019AB4 (LdrpLogDllState.c)
 *     LdrpAllocateModuleEntry @ 0x18002E490 (LdrpAllocateModuleEntry.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall LdrpAllocatePlaceHolder(
        const void **a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  ULONG v10; // edx
  _QWORD *Heap; // rax
  _QWORD *v13; // rbx
  __int64 ModuleEntry; // rax

  v10 = (NtdllBaseTag + 0x40000) | 8;
  *(_QWORD *)a6 = 0LL;
  Heap = RtlAllocateHeap(LdrpHeap, v10, *(unsigned __int16 *)a1 + 202LL);
  v13 = Heap;
  if ( Heap )
  {
    Heap[23] = -1LL;
    Heap[5] = a7;
    Heap[6] = a5;
    Heap[1] = Heap + 25;
    *((_DWORD *)Heap + 8) = a3 | 0x8000;
    Heap[2] = a2;
    *(_WORD *)Heap = *(_WORD *)a1;
    *((_WORD *)Heap + 1) = *(_WORD *)a1 + 2;
    memmove(Heap + 25, a1[1], *(unsigned __int16 *)a1);
    *(_WORD *)(v13[1] + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
    ModuleEntry = LdrpAllocateModuleEntry(v13);
    *(_QWORD *)a6 = ModuleEntry;
    if ( ModuleEntry )
    {
      *(_DWORD *)(ModuleEntry + 268) = a4;
      if ( a4 == 9 )
        *(_DWORD *)(*(_QWORD *)a6 + 304LL) = 1;
      LdrpLogDllState(0, (__int64)v13, 0x14ACu);
    }
    else
    {
      RtlFreeHeap(LdrpHeap, 0, v13);
    }
  }
  return *(_QWORD *)a6 == 0LL ? 0xC0000017 : 0;
}
