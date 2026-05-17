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

__int64 __fastcall LdrpFindLoadedDllByHandle(unsigned __int64 a1, __int64 *a2, _DWORD *a3, unsigned __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax

  v4 = 0LL;
  if ( a1 )
  {
    if ( a1 == LdrpSystemDllBase )
    {
      v4 = LdrpNtDllDataTableEntry;
      if ( a3 )
        *a3 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
    }
    else
    {
      RtlAcquireSRWLockExclusive(
        (unsigned __int64)&LdrpModuleDatatableLock,
        (unsigned __int64)a2,
        (unsigned __int64)a3,
        a4);
      v8 = LdrpModuleBaseAddressIndex;
      if ( (qword_18017ADD0 & 1) != 0 && LdrpModuleBaseAddressIndex )
        v8 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
      while ( v8 )
      {
        if ( a1 >= *(_QWORD *)(v8 - 152) )
        {
          if ( a1 <= *(_QWORD *)(v8 - 152) )
          {
            v4 = v8 - 200;
            v11 = *(_QWORD *)(v8 - 200 + 152);
            if ( *(_DWORD *)(v11 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v11 - 56LL) & 0x20) == 0 )
              _InterlockedIncrement((volatile signed __int32 *)(v4 + 276));
            if ( a3 )
              *a3 = *(_DWORD *)(*(_QWORD *)(v4 + 152) + 56LL);
            break;
          }
          v10 = *(_QWORD *)(v8 + 8);
        }
        else
        {
          v10 = *(_QWORD *)v8;
        }
        if ( (qword_18017ADD0 & 1) != 0 && v10 )
          v8 ^= v10;
        else
          v8 = v10;
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    }
  }
  *a2 = v4;
  return v4 == 0 ? 0xC0000135 : 0;
}
