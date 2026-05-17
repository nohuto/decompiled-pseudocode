/*
 * XREFs of RtlComputeImportTableHash @ 0x1800EC100
 * Callers:
 *     <none>
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800219BC (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlAddressInSectionTable @ 0x18002B0F0 (RtlAddressInSectionTable.c)
 *     RtlImageNtHeader @ 0x18002ECE0 (RtlImageNtHeader.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A13B0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A13F0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A17F0 (NtCreateSection.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1800EBD00 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_S.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1800EBDC4 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPO.c)
 *     ImportTablepFreeModuleSorted @ 0x1800EBE88 (ImportTablepFreeModuleSorted.c)
 *     ImportTablepHashCanonicalLists @ 0x1800EBF0C (ImportTablepHashCanonicalLists.c)
 *     ImportTablepInsertModuleSorted @ 0x1800EC074 (ImportTablepInsertModuleSorted.c)
 *     RtlFlushSecureMemoryCache @ 0x180104510 (RtlFlushSecureMemoryCache.c)
 */

__int64 __fastcall RtlComputeImportTableHash(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  _QWORD **v5; // [rsp+58h] [rbp-28h]
  __int64 v6; // [rsp+68h] [rbp-18h]
  __int64 v7; // [rsp+C8h] [rbp+48h]

  v5 = 0LL;
  v7 = 0LL;
  v6 = 0LL;
  if ( a3 == 1 )
  {
    NtCreateSection();
    v3 = -1073741816;
  }
  else
  {
    v3 = -1073741736;
  }
  ImportTablepFreeModuleSorted(v5);
  if ( v7 && (unsigned int)NtUnmapViewOfSection() == -1073741755 && (unsigned __int8)RtlFlushSecureMemoryCache(v7, 0LL) )
    NtUnmapViewOfSection();
  return v3;
}
