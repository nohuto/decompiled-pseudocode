/*
 * XREFs of LdrpAllocatePlaceHolder @ 0x18002E530
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x180025330 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18002E43C (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800D8B14 (LdrpCreatePendingEnclaveModule.c)
 * Callees:
 *     LdrpLogDllState @ 0x180019CC4 (LdrpLogDllState.c)
 *     LdrpAllocateModuleEntry @ 0x18002E660 (LdrpAllocateModuleEntry.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A5980 (memmove.c)
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
  __int64 v10; // rdx
  __int64 Heap; // rax
  __int64 v13; // rbx
  __int64 ModuleEntry; // rax

  v10 = (NtdllBaseTag + 0x40000) | 8u;
  *(_QWORD *)a6 = 0LL;
  Heap = RtlAllocateHeap(LdrpHeap, v10, *(unsigned __int16 *)a1 + 202LL);
  v13 = Heap;
  if ( Heap )
  {
    *(_QWORD *)(Heap + 184) = -1LL;
    *(_QWORD *)(Heap + 40) = a7;
    *(_QWORD *)(Heap + 48) = a5;
    *(_QWORD *)(Heap + 8) = Heap + 200;
    *(_DWORD *)(Heap + 32) = a3 | 0x8000;
    *(_QWORD *)(Heap + 16) = a2;
    *(_WORD *)Heap = *(_WORD *)a1;
    *(_WORD *)(Heap + 2) = *(_WORD *)a1 + 2;
    memmove((void *)(Heap + 200), a1[1], *(unsigned __int16 *)a1);
    *(_WORD *)(*(_QWORD *)(v13 + 8) + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
    ModuleEntry = LdrpAllocateModuleEntry(v13);
    *(_QWORD *)a6 = ModuleEntry;
    if ( ModuleEntry )
    {
      *(_DWORD *)(ModuleEntry + 268) = a4;
      if ( a4 == 9 )
        *(_DWORD *)(*(_QWORD *)a6 + 304LL) = 1;
      LdrpLogDllState(0LL, v13, 0x14ACu);
    }
    else
    {
      RtlFreeHeap(LdrpHeap, 0LL, v13);
    }
  }
  return *(_QWORD *)a6 == 0LL ? 0xC0000017 : 0;
}
