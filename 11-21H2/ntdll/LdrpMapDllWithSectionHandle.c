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

__int64 __fastcall LdrpMapDllWithSectionHandle(__int64 a1, __int64 a2)
{
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rdi
  unsigned __int64 v6; // r8
  unsigned int v7; // r15d
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  int LoadedDllByNameLockHeld; // eax
  _DWORD *v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // r14
  _BOOL8 v17; // rdx
  __int64 v18; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r9
  __int64 v24; // [rsp+70h] [rbp+18h] BYREF
  _DWORD *v25; // [rsp+78h] [rbp+20h] BYREF

  v3 = LdrpMinimalMapModule(a1, a2);
  v4 = v3;
  if ( v3 == 1073741838 )
    return (unsigned int)v4;
  if ( v3 < 0 )
    return (unsigned int)v4;
  v5 = *(_QWORD *)(a1 + 56);
  v6 = *(_QWORD *)(a1 + 168);
  v24 = 0LL;
  v7 = v3;
  v4 = RtlImageNtHeaderEx(0, *(_QWORD *)(v5 + 48), v6, &v25);
  if ( v4 < 0 )
    return (unsigned int)v4;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
  {
    v14 = v25;
    v7 = 0;
    *(_DWORD *)(v5 + 128) = v25[2];
    *(_DWORD *)(v5 + 288) = v14[22];
    *(_DWORD *)(v5 + 64) = v14[20];
  }
  else
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v8, v9, v10);
    v11 = *(unsigned int *)(a1 + 32);
    v12 = 0LL;
    if ( (v11 & 0x20) == 0 )
      v12 = v5 + 72;
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(
                                (unsigned __int16 *)(v5 + 88),
                                v12,
                                v11,
                                &v24,
                                *(_DWORD *)(v5 + 264));
    v14 = v25;
    if ( LoadedDllByNameLockHeld == -1073741515 )
    {
      v15 = *(_QWORD *)(v5 + 48);
      LODWORD(v25) = v25[2];
      HIDWORD(v25) = v14[20];
      LdrpFindLoadedDllByMappingLockHeld(v15, v14, &v25, &v24);
    }
    v16 = v24;
    if ( !v24 )
    {
      LdrpInsertDataTableEntry(v5);
      LdrpInsertModuleToIndexLockHeld(v5, v14);
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( v16 )
    {
      v20 = *(_QWORD *)(a1 + 56);
      if ( *(_DWORD *)(v20 + 268) != 9 || *(_DWORD *)(v16 + 268) == 9 )
      {
        LdrpLoadContextReplaceModule(a1, v16);
      }
      else
      {
        v4 = -1073740608;
        LdrpLogEtwHotPatchStatus(LdrpImageEntry + 88, *(_QWORD *)(a1 + 48), v20 + 72, -1073740608, 3);
        LdrpDereferenceModule(v16, v21, v22, v23);
      }
      return (unsigned int)v4;
    }
  }
  if ( (unsigned int)RtlIsCriticalSectionLockedByThread(&LdrpDllNotificationLock) )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    v4 = LdrpCompleteMapModule(a1, v14, v7);
    if ( v4 >= 0 )
    {
      v4 = LdrpProcessMappedModule(v5, *(_DWORD *)(a1 + 32), 1);
      if ( v4 >= 0 )
      {
        LdrpLogNewDllLoad(*(_QWORD *)(a1 + 48), v5);
        v18 = *(_QWORD *)(a1 + 48);
        if ( v18 )
          *(_QWORD *)(v5 + 184) = *(_QWORD *)(v18 + 48);
        LOBYTE(v17) = 0;
        if ( *(_DWORD *)(v5 + 268) == 9 && LdrpImageEntry )
          v17 = *(_QWORD *)(v5 + 184) == *(_QWORD *)(LdrpImageEntry + 48);
        if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 || (*(_BYTE *)(v5 + 104) & 4) != 0 || v17 )
        {
          if ( (*(_DWORD *)(v5 + 104) & 0x1000000) != 0 )
          {
            return (unsigned int)LdrpCorProcessImports(v5, v17);
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
