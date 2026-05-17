/*
 * XREFs of RtlUnlockModuleSection @ 0x180051EF0
 * Callers:
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x180051E88 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x1800520E0 (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlpRegisterLockedMemoryZone @ 0x1800522FC (RtlpRegisterLockedMemoryZone.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x180052484 (RtlpUnregisterLockedMemoryZone.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlpLocateModuleSectionInLockedSectionList @ 0x1800520A0 (RtlpLocateModuleSectionInLockedSectionList.c)
 *     ZwUnlockVirtualMemory @ 0x1800A4A00 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall RtlUnlockModuleSection(__int64 a1)
{
  __int64 ModuleSectionInLockedSectionList; // rax
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax

  RtlAcquireSRWLockExclusive(&RtlpLockedSectionListLock);
  ModuleSectionInLockedSectionList = RtlpLocateModuleSectionInLockedSectionList(a1);
  v3 = 0;
  v4 = ModuleSectionInLockedSectionList;
  if ( ModuleSectionInLockedSectionList )
  {
    if ( (*(_DWORD *)(ModuleSectionInLockedSectionList + 32))-- == 1 )
    {
      v6 = *(_QWORD *)ModuleSectionInLockedSectionList;
      if ( *(_QWORD *)(*(_QWORD *)ModuleSectionInLockedSectionList + 8LL) != ModuleSectionInLockedSectionList
        || (v7 = *(_QWORD **)(ModuleSectionInLockedSectionList + 8), *v7 != v4) )
      {
        __fastfail(3u);
      }
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      v3 = ZwUnlockVirtualMemory(-1LL, v4 + 16, v4 + 24, 1LL);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
    }
  }
  else
  {
    v3 = -1073741782;
  }
  RtlReleaseSRWLockExclusive(&RtlpLockedSectionListLock);
  return v3;
}
