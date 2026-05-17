/*
 * XREFs of LdrpFreeUnicodeString @ 0x180011138
 * Callers:
 *     LdrpMapDllSearchPath @ 0x180010E68 (LdrpMapDllSearchPath.c)
 *     LdrpAppCompatRedirect @ 0x1800115C8 (LdrpAppCompatRedirect.c)
 *     LdrpApplyFileNameRedirection @ 0x1800198D4 (LdrpApplyFileNameRedirection.c)
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     LdrpMapAndSnapDependency @ 0x180024A58 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpLoadDllInternal @ 0x180028CA4 (LdrpLoadDllInternal.c)
 *     LdrpResolveDllName @ 0x18002A874 (LdrpResolveDllName.c)
 *     LdrpFindLoadedDllInternal @ 0x18002AECC (LdrpFindLoadedDllInternal.c)
 *     LdrpSearchPath @ 0x18002DEA4 (LdrpSearchPath.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x18007EE30 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpLoadPatchImage @ 0x1800D9DC0 (LdrpLoadPatchImage.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180039640 (NtdllpFreeStringRoutine.c)
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
