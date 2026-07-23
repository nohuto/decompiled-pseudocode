/*
 * XREFs of RtlLockModuleSection @ 0x180052100
 * Callers:
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x180052240 (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlpRegisterLockedMemoryZone @ 0x18005245C (RtlpRegisterLockedMemoryZone.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     LdrEnumerateLoadedModules @ 0x180051CE0 (LdrEnumerateLoadedModules.c)
 *     RtlpLocateModuleSectionInLockedSectionList @ 0x180052200 (RtlpLocateModuleSectionInLockedSectionList.c)
 */

NTSTATUS __cdecl RtlLockModuleSection(PVOID Address)
{
  __int64 ModuleSectionInLockedSectionList; // rax
  _OWORD *v3; // rbx
  _OWORD *Heap; // rax
  int v5; // edi
  _QWORD *v6; // rax
  PVOID Context; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+38h] [rbp-10h]

  RtlAcquireSRWLockExclusive(&RtlpLockedSectionListLock);
  ModuleSectionInLockedSectionList = RtlpLocateModuleSectionInLockedSectionList(Address);
  v3 = (_OWORD *)ModuleSectionInLockedSectionList;
  if ( ModuleSectionInLockedSectionList )
  {
    ++*(_DWORD *)(ModuleSectionInLockedSectionList + 32);
    v5 = 0;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
    v3 = Heap;
    if ( Heap )
    {
      *Heap = 0LL;
      Heap[1] = 0LL;
      *((_QWORD *)Heap + 4) = 0LL;
      Context = Address;
      v9 = -1073741275;
      v5 = LdrEnumerateLoadedModules(0, RtlpModuleEnumeratorCallback, &Context);
      if ( v5 >= 0 )
      {
        v5 = v9;
        if ( v9 >= 0 )
        {
          *((_QWORD *)v3 + 2) = v10;
          *((_QWORD *)v3 + 3) = v11;
          *((_DWORD *)v3 + 8) = 1;
          v6 = off_18017E318;
          if ( *off_18017E318 != (_UNKNOWN *)&RtlpLockedSectionList )
            __fastfail(3u);
          *(_QWORD *)v3 = &RtlpLockedSectionList;
          *((_QWORD *)v3 + 1) = v6;
          *v6 = v3;
          off_18017E318 = (_UNKNOWN **)v3;
        }
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpLockedSectionListLock);
  if ( v5 < 0 && v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  return v5;
}
