/*
 * XREFs of LdrpMapDllWithSectionHandle @ 0x18004CD54
 * Callers:
 *     LdrpLoadKnownDll @ 0x18004D3FC (LdrpLoadKnownDll.c)
 *     LdrpMapDllNtFileName @ 0x18004FDE4 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x18001CAA8 (LdrpInsertModuleToIndexLockHeld.c)
 *     LdrpProcessMappedModule @ 0x180034AEC (LdrpProcessMappedModule.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 *     LdrpMapAndSnapDependency @ 0x18003D014 (LdrpMapAndSnapDependency.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x1800413B4 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpLogDllState @ 0x180044F74 (LdrpLogDllState.c)
 *     LdrpMinimalMapModule @ 0x18004CAA8 (LdrpMinimalMapModule.c)
 *     LdrpLogNewDllLoad @ 0x18004CF3C (LdrpLogNewDllLoad.c)
 *     LdrpCompleteMapModule @ 0x18004CFB8 (LdrpCompleteMapModule.c)
 *     RtlIsCriticalSectionLockedByThread @ 0x18004D120 (RtlIsCriticalSectionLockedByThread.c)
 *     LdrpInsertDataTableEntry @ 0x18004D144 (LdrpInsertDataTableEntry.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x18004D268 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpLoadContextReplaceModule @ 0x180053F88 (LdrpLoadContextReplaceModule.c)
 *     LdrpCorProcessImports @ 0x18008B534 (LdrpCorProcessImports.c)
 *     LdrpLogEtwHotPatchStatus @ 0x1800DB68C (LdrpLogEtwHotPatchStatus.c)
 */

__int64 __fastcall LdrpMapDllWithSectionHandle(__int64 a1, void *a2)
{
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rdi
  ULONG64 v6; // r8
  unsigned int v7; // r15d
  int v8; // r8d
  _UNICODE_STRING *v9; // rdx
  int LoadedDllByNameLockHeld; // eax
  PIMAGE_NT_HEADERS v11; // rbp
  void *v12; // rcx
  char *v13; // r14
  _BOOL8 v14; // rdx
  __int64 v15; // rax
  __int64 v17; // r8
  PVOID BaseAddress; // [rsp+70h] [rbp+18h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+78h] [rbp+20h] BYREF

  v3 = LdrpMinimalMapModule(a1, a2);
  v4 = v3;
  if ( v3 == 1073741838 )
    return (unsigned int)v4;
  if ( v3 < 0 )
    return (unsigned int)v4;
  v5 = *(_QWORD *)(a1 + 56);
  v6 = *(_QWORD *)(a1 + 168);
  BaseAddress = 0LL;
  v7 = v3;
  v4 = RtlImageNtHeaderEx(0, *(PVOID *)(v5 + 48), v6, &OutHeaders);
  if ( v4 < 0 )
    return (unsigned int)v4;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
  {
    v11 = OutHeaders;
    v7 = 0;
    *(_DWORD *)(v5 + 128) = OutHeaders->FileHeader.TimeDateStamp;
    *(_DWORD *)(v5 + 288) = v11->OptionalHeader.CheckSum;
    *(_DWORD *)(v5 + 64) = v11->OptionalHeader.SizeOfImage;
  }
  else
  {
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v8 = *(_DWORD *)(a1 + 32);
    v9 = 0LL;
    if ( (v8 & 0x20) == 0 )
      v9 = (_UNICODE_STRING *)(v5 + 72);
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(
                                (unsigned __int16 *)(v5 + 88),
                                v9,
                                v8,
                                &BaseAddress,
                                *(_DWORD *)(v5 + 264));
    v11 = OutHeaders;
    if ( LoadedDllByNameLockHeld == -1073741515 )
    {
      v12 = *(void **)(v5 + 48);
      LODWORD(OutHeaders) = OutHeaders->FileHeader.TimeDateStamp;
      HIDWORD(OutHeaders) = v11->OptionalHeader.SizeOfImage;
      LdrpFindLoadedDllByMappingLockHeld(v12, v11);
    }
    v13 = (char *)BaseAddress;
    if ( !BaseAddress )
    {
      LdrpInsertDataTableEntry(v5);
      LdrpInsertModuleToIndexLockHeld(v5, v11);
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( v13 )
    {
      v17 = *(_QWORD *)(a1 + 56);
      if ( *(_DWORD *)(v17 + 268) != 9 || *((_DWORD *)v13 + 67) == 9 )
      {
        LdrpLoadContextReplaceModule(a1, v13);
      }
      else
      {
        v4 = -1073740608;
        LdrpLogEtwHotPatchStatus(LdrpImageEntry + 88, *(_QWORD *)(a1 + 48), v17 + 72, -1073740608, 3);
        LdrpDereferenceModule(v13);
      }
      return (unsigned int)v4;
    }
  }
  if ( RtlIsCriticalSectionLockedByThread(&LdrpDllNotificationLock) )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    v4 = LdrpCompleteMapModule(a1, v11, v7);
    if ( v4 >= 0 )
    {
      v4 = LdrpProcessMappedModule(v5, *(_DWORD *)(a1 + 32), 1);
      if ( v4 >= 0 )
      {
        LdrpLogNewDllLoad(*(_QWORD *)(a1 + 48), v5);
        v15 = *(_QWORD *)(a1 + 48);
        if ( v15 )
          *(_QWORD *)(v5 + 184) = *(_QWORD *)(v15 + 48);
        LOBYTE(v14) = 0;
        if ( *(_DWORD *)(v5 + 268) == 9 && LdrpImageEntry )
          v14 = *(_QWORD *)(v5 + 184) == *(_QWORD *)(LdrpImageEntry + 48);
        if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 || (*(_BYTE *)(v5 + 104) & 4) != 0 || v14 )
        {
          if ( (*(_DWORD *)(v5 + 104) & 0x1000000) != 0 )
          {
            return (unsigned int)LdrpCorProcessImports(v5, v14);
          }
          else
          {
            LdrpMapAndSnapDependency(a1);
            return (unsigned int)**(_DWORD **)(a1 + 40);
          }
        }
        else
        {
          LdrpLogDllState(*(_QWORD *)(v5 + 48), v5 + 72, 0x14AEu);
          v4 = 0;
          *(_DWORD *)(*(_QWORD *)(v5 + 152) + 56LL) = 9;
        }
      }
    }
  }
  return (unsigned int)v4;
}
