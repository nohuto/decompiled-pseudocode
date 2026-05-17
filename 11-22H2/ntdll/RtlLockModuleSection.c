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

__int64 __fastcall RtlLockModuleSection(__int64 a1)
{
  __int64 ModuleSectionInLockedSectionList; // rax
  __int64 v3; // rbx
  __int64 Heap; // rax
  int v5; // edi
  __int64 *v6; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+38h] [rbp-10h]

  RtlAcquireSRWLockExclusive(&RtlpLockedSectionListLock);
  ModuleSectionInLockedSectionList = RtlpLocateModuleSectionInLockedSectionList(a1);
  v3 = ModuleSectionInLockedSectionList;
  if ( ModuleSectionInLockedSectionList )
  {
    ++*(_DWORD *)(ModuleSectionInLockedSectionList + 32);
    v5 = 0;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 40LL);
    v3 = Heap;
    if ( Heap )
    {
      *(_OWORD *)Heap = 0LL;
      *(_OWORD *)(Heap + 16) = 0LL;
      *(_QWORD *)(Heap + 32) = 0LL;
      v8 = a1;
      v9 = -1073741275;
      v5 = LdrEnumerateLoadedModules(
             0,
             (void (__fastcall *)(__int64 *, __int64, char *))RtlpModuleEnumeratorCallback,
             (__int64)&v8);
      if ( v5 >= 0 )
      {
        v5 = v9;
        if ( v9 >= 0 )
        {
          *(_QWORD *)(v3 + 16) = v10;
          *(_QWORD *)(v3 + 24) = v11;
          *(_DWORD *)(v3 + 32) = 1;
          v6 = (__int64 *)off_18017E318;
          if ( *off_18017E318 != (_UNKNOWN *)&RtlpLockedSectionList )
            __fastfail(3u);
          *(_QWORD *)v3 = &RtlpLockedSectionList;
          *(_QWORD *)(v3 + 8) = v6;
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
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
  return (unsigned int)v5;
}
