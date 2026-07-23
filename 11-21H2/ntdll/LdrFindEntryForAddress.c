/*
 * XREFs of LdrFindEntryForAddress @ 0x180067F70
 * Callers:
 *     LdrpIsReparsePoint @ 0x180067580 (LdrpIsReparsePoint.c)
 *     LdrpGetDataModulePath @ 0x1800676F0 (LdrpGetDataModulePath.c)
 *     LdrInitShimEngineDynamic @ 0x1800DC800 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByAddress @ 0x180067FC0 (LdrpFindLoadedDllByAddress.c)
 */

NTSTATUS __cdecl LdrFindEntryForAddress(PVOID DllHandle, PLDR_DATA_TABLE_ENTRY *Entry)
{
  NTSTATUS LoadedDllByAddress; // ebx
  char *v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  if ( !DllHandle )
    return -1073741515;
  LoadedDllByAddress = LdrpFindLoadedDllByAddress(DllHandle, &BaseAddress, &v6);
  if ( LoadedDllByAddress >= 0 )
  {
    v4 = (char *)BaseAddress;
    *Entry = (PLDR_DATA_TABLE_ENTRY)BaseAddress;
    LdrpDereferenceModule(v4);
  }
  return LoadedDllByAddress;
}
