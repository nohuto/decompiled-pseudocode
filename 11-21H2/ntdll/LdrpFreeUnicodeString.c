/*
 * XREFs of LdrpFreeUnicodeString @ 0x180051B14
 * Callers:
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpLoadDllInternal @ 0x18003B940 (LdrpLoadDllInternal.c)
 *     LdrpMapAndSnapDependency @ 0x18003D014 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003D8F0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpApplyFileNameRedirection @ 0x180044B54 (LdrpApplyFileNameRedirection.c)
 *     LdrpResolveDllName @ 0x18004F58C (LdrpResolveDllName.c)
 *     LdrpFindLoadedDllInternal @ 0x18004F834 (LdrpFindLoadedDllInternal.c)
 *     LdrpSearchPath @ 0x1800501B4 (LdrpSearchPath.c)
 *     LdrpAppCompatRedirect @ 0x180051484 (LdrpAppCompatRedirect.c)
 *     LdrpMapDllSearchPath @ 0x180051844 (LdrpMapDllSearchPath.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180083010 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpLoadPatchImage @ 0x1800DA320 (LdrpLoadPatchImage.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 */

LOGICAL __fastcall LdrpFreeUnicodeString(__int64 a1)
{
  void *v2; // rcx
  LOGICAL result; // eax

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    result = NtdllpFreeStringRoutine(v2);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)a1 = 0;
  return result;
}
