/*
 * XREFs of LdrpFreeUnicodeString @ 0x180011348
 * Callers:
 *     LdrpMapDllSearchPath @ 0x180011078 (LdrpMapDllSearchPath.c)
 *     LdrpAppCompatRedirect @ 0x1800117D8 (LdrpAppCompatRedirect.c)
 *     LdrpApplyFileNameRedirection @ 0x180019AE4 (LdrpApplyFileNameRedirection.c)
 *     LdrpDereferenceModule @ 0x1800226FC (LdrpDereferenceModule.c)
 *     LdrpMapAndSnapDependency @ 0x180024BA8 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025330 (LdrpLoadDependentModuleInternal.c)
 *     LdrpLoadDllInternal @ 0x180028E74 (LdrpLoadDllInternal.c)
 *     LdrpResolveDllName @ 0x18002AA44 (LdrpResolveDllName.c)
 *     LdrpFindLoadedDllInternal @ 0x18002B09C (LdrpFindLoadedDllInternal.c)
 *     LdrpSearchPath @ 0x18002E074 (LdrpSearchPath.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x18007E7C0 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpLoadPatchImage @ 0x1800DA410 (LdrpLoadPatchImage.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall LdrpFreeUnicodeString(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    result = NtdllpFreeStringRoutine(v2);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)a1 = 0;
  return result;
}
