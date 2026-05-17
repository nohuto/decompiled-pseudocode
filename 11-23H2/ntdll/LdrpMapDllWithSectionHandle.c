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

__int64 __fastcall LdrpMapDllWithSectionHandle(__int64 a1, __int64 a2)
{
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rdi
  unsigned __int64 v6; // r8
  unsigned int v7; // r15d
  int v8; // r8d
  int v9; // edx
  int LoadedDllByNameLockHeld; // eax
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rbp
  _BOOL8 v14; // rdx
  __int64 v15; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  _DWORD v19[14]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  v3 = LdrpMinimalMapModule(a1, a2);
  v4 = v3;
  if ( v3 == 1073741838 )
    return (unsigned int)v4;
  if ( v3 < 0 )
    return (unsigned int)v4;
  v5 = *(_QWORD *)(a1 + 56);
  v6 = *(_QWORD *)(a1 + 168);
  v20 = 0LL;
  v7 = v3;
  v4 = RtlImageNtHeaderEx(0, *(_QWORD *)(v5 + 48), v6, &v21);
  if ( v4 < 0 )
    return (unsigned int)v4;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
  {
    v18 = v21;
    v7 = 0;
    *(_DWORD *)(v5 + 128) = *(_DWORD *)(v21 + 8);
    *(_DWORD *)(v5 + 288) = *(_DWORD *)(v18 + 88);
    *(_DWORD *)(v5 + 64) = *(_DWORD *)(v18 + 80);
  }
  else
  {
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v8 = *(_DWORD *)(a1 + 32);
    v9 = 0;
    if ( (v8 & 0x20) == 0 )
      v9 = v5 + 72;
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(
                                (int)v5 + 88,
                                v9,
                                v8,
                                (unsigned int)&v20,
                                *(_DWORD *)(v5 + 264));
    v11 = v21;
    if ( LoadedDllByNameLockHeld == -1073741515 )
    {
      v12 = *(_QWORD *)(v5 + 48);
      v19[0] = *(_DWORD *)(v21 + 8);
      v19[1] = *(_DWORD *)(v21 + 80);
      LdrpFindLoadedDllByMappingLockHeld(v12, v21, v19, &v20);
    }
    v13 = v20;
    if ( !v20 )
    {
      LdrpInsertDataTableEntry(v5);
      LdrpInsertModuleToIndexLockHeld(v5, v11);
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( v13 )
    {
      v17 = *(_QWORD *)(a1 + 56);
      if ( *(_DWORD *)(v17 + 268) != 9 || *(_DWORD *)(v13 + 268) == 9 )
      {
        LdrpLoadContextReplaceModule(a1);
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
  if ( (void *)qword_180181310 == NtCurrentTeb()->ClientId.UniqueThread )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    v4 = LdrpCompleteMapModule(a1, v21, v7);
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
