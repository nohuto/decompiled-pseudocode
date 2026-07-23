/*
 * XREFs of LdrpFindLoadedDllByHandle @ 0x18002C1CC
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x18001626C (LdrpGetDelayloadExportDll.c)
 *     LdrpLoadDllInternal @ 0x180028E74 (LdrpLoadDllInternal.c)
 *     LdrResolveDelayLoadedAPI @ 0x18002C060 (LdrResolveDelayLoadedAPI.c)
 *     LdrAddRefDll @ 0x18002D410 (LdrAddRefDll.c)
 *     LdrUnloadDll @ 0x18002D5B0 (LdrUnloadDll.c)
 *     LdrGetDllFullName @ 0x18002D7B0 (LdrGetDllFullName.c)
 *     LdrDisableThreadCalloutsForDll @ 0x18002DE60 (LdrDisableThreadCalloutsForDll.c)
 *     RtlQueryInformationActivationContext @ 0x180033680 (RtlQueryInformationActivationContext.c)
 *     LdrHotPatchNotify @ 0x1800D9A90 (LdrHotPatchNotify.c)
 *     LdrIsModuleSxsRedirected @ 0x1800D9C00 (LdrIsModuleSxsRedirected.c)
 *     LdrQueryModuleServiceTags @ 0x1800D9D40 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800DA290 (LdrSetImplicitPathOptions.c)
 *     LdrpLoadPatchImage @ 0x1800DA410 (LdrpLoadPatchImage.c)
 *     LdrpApplyPatchImage @ 0x1800DFC84 (LdrpApplyPatchImage.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpFindLoadedDllByHandle(unsigned __int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  unsigned __int64 Root; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax

  v3 = 0LL;
  if ( a1 )
  {
    if ( a1 == LdrpSystemDllBase )
    {
      v3 = LdrpNtDllDataTableEntry;
      if ( a3 )
        *a3 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
    }
    else
    {
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      Root = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
      if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && LdrpModuleBaseAddressIndex.Root )
        Root = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
      while ( Root )
      {
        if ( a1 >= *(_QWORD *)(Root - 152) )
        {
          if ( a1 <= *(_QWORD *)(Root - 152) )
            break;
          v8 = *(_QWORD *)(Root + 8);
        }
        else
        {
          v8 = *(_QWORD *)Root;
        }
        if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v8 )
          Root ^= v8;
        else
          Root = v8;
      }
      if ( Root )
      {
        v3 = Root - 200;
        v9 = *(_QWORD *)(Root - 200 + 152);
        if ( *(_DWORD *)(v9 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v9 - 56LL) & 0x20) == 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v3 + 276));
        if ( a3 )
          *a3 = *(_DWORD *)(*(_QWORD *)(v3 + 152) + 56LL);
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    }
  }
  *a2 = v3;
  return v3 == 0 ? 0xC0000135 : 0;
}
