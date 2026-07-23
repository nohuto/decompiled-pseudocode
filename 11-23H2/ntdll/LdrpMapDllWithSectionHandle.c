/*
 * XREFs of LdrpMapDllWithSectionHandle @ 0x18002C7AC
 * Callers:
 *     LdrpMapDllNtFileName @ 0x1800109E4 (LdrpMapDllNtFileName.c)
 *     LdrpLoadKnownDll @ 0x18002D2B0 (LdrpLoadKnownDll.c)
 * Callees:
 *     LdrpLogDllState @ 0x180019AB4 (LdrpLogDllState.c)
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 *     LdrpMapAndSnapDependency @ 0x180024A58 (LdrpMapAndSnapDependency.c)
 *     LdrpProcessMappedModule @ 0x18002B3C4 (LdrpProcessMappedModule.c)
 *     LdrpMinimalMapModule @ 0x18002C524 (LdrpMinimalMapModule.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x18002CA84 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x18002CB84 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpCompleteMapModule @ 0x18002CD30 (LdrpCompleteMapModule.c)
 *     LdrpLogNewDllLoad @ 0x18002CE8C (LdrpLogNewDllLoad.c)
 *     LdrpInsertDataTableEntry @ 0x18002CF08 (LdrpInsertDataTableEntry.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x18002D030 (LdrpInsertModuleToIndexLockHeld.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     LdrpLoadContextReplaceModule @ 0x180073404 (LdrpLoadContextReplaceModule.c)
 *     LdrpCorProcessImports @ 0x18008E944 (LdrpCorProcessImports.c)
 *     LdrpLogEtwHotPatchStatus @ 0x1800DB554 (LdrpLogEtwHotPatchStatus.c)
 */

__int64 __fastcall LdrpMapDllWithSectionHandle(__int64 a1, void *a2)
{
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rdi
  unsigned int v6; // r15d
  _UNICODE_STRING *v7; // rdx
  int LoadedDllByNameLockHeld; // eax
  PIMAGE_NT_HEADERS v9; // r14
  _BOOL8 v10; // rdx
  __int64 v11; // rax
  PIMAGE_NT_HEADERS v13; // rcx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+88h] [rbp+20h] BYREF

  v3 = LdrpMinimalMapModule(a1, a2);
  v4 = v3;
  if ( v3 != 1073741838 && v3 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    v6 = v3;
    v4 = RtlImageNtHeaderEx(0, *(PVOID *)(v5 + 48), *(_QWORD *)(a1 + 168), &OutHeaders);
    if ( v4 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
      {
        v13 = OutHeaders;
        v6 = 0;
        *(_DWORD *)(v5 + 128) = OutHeaders->FileHeader.TimeDateStamp;
        *(_DWORD *)(v5 + 288) = v13->OptionalHeader.CheckSum;
        *(_DWORD *)(v5 + 64) = v13->OptionalHeader.SizeOfImage;
      }
      else
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v7 = 0LL;
        if ( (*(_DWORD *)(a1 + 32) & 0x20) == 0 )
          v7 = (_UNICODE_STRING *)(v5 + 72);
        LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld((PUNICODE_STRING)(v5 + 88), v7, *(_DWORD *)(v5 + 264));
        v9 = OutHeaders;
        if ( LoadedDllByNameLockHeld == -1073741515 )
          LdrpFindLoadedDllByMappingLockHeld(*(PVOID *)(v5 + 48), OutHeaders);
        LdrpInsertDataTableEntry(v5);
        LdrpInsertModuleToIndexLockHeld(v5, v9);
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      }
      if ( LdrpDllNotificationLock.OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
      {
        return (unsigned int)-1073741275;
      }
      else
      {
        v4 = LdrpCompleteMapModule(a1, OutHeaders, v6);
        if ( v4 >= 0 )
        {
          v4 = LdrpProcessMappedModule(v5, *(_DWORD *)(a1 + 32), 1);
          if ( v4 >= 0 )
          {
            LdrpLogNewDllLoad(*(_QWORD *)(a1 + 48), v5);
            v11 = *(_QWORD *)(a1 + 48);
            if ( v11 )
              *(_QWORD *)(v5 + 184) = *(_QWORD *)(v11 + 48);
            LOBYTE(v10) = 0;
            if ( *(_DWORD *)(v5 + 268) == 9 && LdrpImageEntry )
              v10 = *(_QWORD *)(v5 + 184) == *(_QWORD *)(LdrpImageEntry + 48);
            if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 || (*(_BYTE *)(v5 + 104) & 4) != 0 || v10 )
            {
              if ( (*(_DWORD *)(v5 + 104) & 0x1000000) != 0 )
              {
                return (unsigned int)LdrpCorProcessImports(v5, v10);
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
    }
  }
  return (unsigned int)v4;
}
