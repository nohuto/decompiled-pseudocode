/*
 * XREFs of RtlAddressInSectionTable @ 0x18002B0F0
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800219BC (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpGetProcedureAddress @ 0x180022CD0 (LdrpGetProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x180023120 (LdrpHandleProtectedDelayload.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180023940 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSnapModule @ 0x180023EA0 (LdrpSnapModule.c)
 *     RtlpImageDirectoryEntryToData64 @ 0x18002A644 (RtlpImageDirectoryEntryToData64.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1800EBD00 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_S.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1800EBDC4 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPO.c)
 *     RtlComputeImportTableHash @ 0x1800EC100 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x180028C60 (RtlSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall RtlAddressInSectionTable(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // r8d
  __int64 v5; // r11

  result = RtlSectionTableFromVirtualAddress(a1, a2, a3);
  if ( result )
    return v5 + *(unsigned int *)(result + 20) - (unsigned __int64)*(unsigned int *)(result + 12) + v4;
  return result;
}
