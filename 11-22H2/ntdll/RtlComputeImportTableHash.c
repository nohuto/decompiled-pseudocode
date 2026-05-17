/*
 * XREFs of RtlComputeImportTableHash @ 0x1800EADD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180021B9C (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlAddressInSectionTable @ 0x18002B2C0 (RtlAddressInSectionTable.c)
 *     RtlImageNtHeader @ 0x18002EEB0 (RtlImageNtHeader.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009F2F0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009F730 (NtCreateSection.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1800EA9D0 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_S.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1800EAA94 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPO.c)
 *     ImportTablepFreeModuleSorted @ 0x1800EAB58 (ImportTablepFreeModuleSorted.c)
 *     ImportTablepHashCanonicalLists @ 0x1800EABDC (ImportTablepHashCanonicalLists.c)
 *     ImportTablepInsertModuleSorted @ 0x1800EAD44 (ImportTablepInsertModuleSorted.c)
 *     RtlFlushSecureMemoryCache @ 0x180103100 (RtlFlushSecureMemoryCache.c)
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
