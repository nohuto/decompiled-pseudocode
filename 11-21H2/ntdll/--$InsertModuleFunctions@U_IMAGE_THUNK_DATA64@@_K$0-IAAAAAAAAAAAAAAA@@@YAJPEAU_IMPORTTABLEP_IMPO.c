/*
 * XREFs of ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1800EB5E0
 * Callers:
 *     RtlComputeImportTableHash @ 0x1800EB920 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlAddressInSectionTable @ 0x180033A60 (RtlAddressInSectionTable.c)
 *     ImportTablepInsertFunctionSorted @ 0x1800EB810 (ImportTablepInsertFunctionSorted.c)
 */

__int64 __fastcall InsertModuleFunctions<_IMAGE_THUNK_DATA64,unsigned __int64,-9223372036854775808>(__int64 a1)
{
  __int64 *v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdi
  _QWORD *Heap; // rax

  v2 = (__int64 *)RtlAddressInSectionTable();
  if ( v2 )
  {
    while ( *v2 )
    {
      if ( *v2 >= 0 )
      {
        v3 = RtlAddressInSectionTable();
        if ( !v3 )
          return 3221225611LL;
        v4 = v3 + 2;
        if ( v3 == -2LL )
          return 3221225611LL;
        Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 16LL);
        if ( !Heap )
          return 3221225495LL;
        *Heap = 0LL;
        Heap[1] = v4;
        ImportTablepInsertFunctionSorted(Heap, a1 + 16);
      }
      if ( !++v2 )
        return 0LL;
    }
  }
  return 0LL;
}
