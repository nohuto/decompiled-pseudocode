/*
 * XREFs of LdrFindEntryForAddress @ 0x180008A90
 * Callers:
 *     LdrpIsReparsePoint @ 0x1800086DC (LdrpIsReparsePoint.c)
 *     LdrpGetDataModulePath @ 0x180008850 (LdrpGetDataModulePath.c)
 *     LdrInitShimEngineDynamic @ 0x1800DC930 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     LdrpFindLoadedDllByAddress @ 0x180008AE0 (LdrpFindLoadedDllByAddress.c)
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 */

NTSTATUS __cdecl LdrFindEntryForAddress(PVOID DllHandle, PLDR_DATA_TABLE_ENTRY *Entry)
{
  NTSTATUS LoadedDllByAddress; // ebx
  PVOID v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  if ( !DllHandle )
    return -1073741515;
  LoadedDllByAddress = LdrpFindLoadedDllByAddress(DllHandle, &BaseAddress, &v6);
  if ( LoadedDllByAddress >= 0 )
  {
    v4 = BaseAddress;
    *Entry = (PLDR_DATA_TABLE_ENTRY)BaseAddress;
    LdrpDereferenceModule(v4);
  }
  return LoadedDllByAddress;
}
