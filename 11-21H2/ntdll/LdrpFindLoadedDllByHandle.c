/*
 * XREFs of LdrpFindLoadedDllByHandle @ 0x180038350
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x18001BC10 (RtlQueryInformationActivationContext.c)
 *     LdrGetDllFullName @ 0x1800346C0 (LdrGetDllFullName.c)
 *     LdrAddRefDll @ 0x180035130 (LdrAddRefDll.c)
 *     LdrpGetDelayloadExportDll @ 0x18003523C (LdrpGetDelayloadExportDll.c)
 *     LdrResolveDelayLoadedAPI @ 0x180035FF0 (LdrResolveDelayLoadedAPI.c)
 *     LdrUnloadDll @ 0x180038270 (LdrUnloadDll.c)
 *     LdrpLoadDllInternal @ 0x18003B940 (LdrpLoadDllInternal.c)
 *     LdrDisableThreadCalloutsForDll @ 0x18007F7B0 (LdrDisableThreadCalloutsForDll.c)
 *     LdrHotPatchNotify @ 0x1800D9A20 (LdrHotPatchNotify.c)
 *     LdrIsModuleSxsRedirected @ 0x1800D9B90 (LdrIsModuleSxsRedirected.c)
 *     LdrQueryModuleServiceTags @ 0x1800D9CD0 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800DA1A0 (LdrSetImplicitPathOptions.c)
 *     LdrpLoadPatchImage @ 0x1800DA320 (LdrpLoadPatchImage.c)
 *     LdrpApplyPatchImage @ 0x1800E1480 (LdrpApplyPatchImage.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall LdrpFindLoadedDllByHandle(unsigned __int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  unsigned __int64 Root; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax

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
          {
            v3 = Root - 200;
            v10 = *(_QWORD *)(Root - 200 + 152);
            if ( *(_DWORD *)(v10 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v10 - 56LL) & 0x20) == 0 )
              _InterlockedIncrement((volatile signed __int32 *)(v3 + 276));
            if ( a3 )
              *a3 = *(_DWORD *)(*(_QWORD *)(v3 + 152) + 56LL);
            break;
          }
          v9 = *(_QWORD *)(Root + 8);
        }
        else
        {
          v9 = *(_QWORD *)Root;
        }
        if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v9 )
          Root ^= v9;
        else
          Root = v9;
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    }
  }
  *a2 = v3;
  return v3 == 0 ? 0xC0000135 : 0;
}
