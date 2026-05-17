/*
 * XREFs of RtlAddressInSectionTable @ 0x180033A60
 * Callers:
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18003A234 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpGetProcedureAddress @ 0x18003BD10 (LdrpGetProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x18003BF80 (LdrpHandleProtectedDelayload.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18003C720 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpSnapModule @ 0x18003C8C0 (LdrpSnapModule.c)
 *     LdrpResolveForwarder @ 0x18003F350 (LdrpResolveForwarder.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1800EB51C (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_S.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1800EB5E0 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPO.c)
 *     RtlComputeImportTableHash @ 0x1800EB920 (RtlComputeImportTableHash.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1800F5D80 (RtlpImageDirectoryEntryToData32.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x180034310 (RtlSectionTableFromVirtualAddress.c)
 */

unsigned __int64 RtlAddressInSectionTable()
{
  unsigned __int64 result; // rax
  unsigned int v1; // r8d
  __int64 v2; // r11

  result = RtlSectionTableFromVirtualAddress();
  if ( result )
    return v2 + *(unsigned int *)(result + 20) - (unsigned __int64)*(unsigned int *)(result + 12) + v1;
  return result;
}
