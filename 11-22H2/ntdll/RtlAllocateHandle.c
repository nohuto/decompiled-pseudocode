/*
 * XREFs of RtlAllocateHandle @ 0x180003CA0
 * Callers:
 *     RtlpInsertStringAtom @ 0x180003C08 (RtlpInsertStringAtom.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlReAllocateHeap @ 0x180042320 (RtlReAllocateHeap.c)
 *     ZwAllocateVirtualMemory @ 0x18009F0F0 (ZwAllocateVirtualMemory.c)
 */

PRTL_HANDLE_TABLE_ENTRY __cdecl RtlAllocateHandle(PRTL_HANDLE_TABLE HandleTable, PULONG HandleIndex)
{
  PRTL_HANDLE_TABLE_ENTRY *p_FreeHandles; // rdi
  _QWORD *v5; // rcx
  ULONG v7; // ecx
  ULONG SizeOfHandleTableEntry; // eax
  PRTL_HANDLE_TABLE_ENTRY CommittedHandles; // r8
  unsigned int v10; // esi
  void *ProcessHeap; // rcx
  __int64 v12; // r14
  _RTL_HANDLE_TABLE_ENTRY *v13; // rax
  _RTL_HANDLE_TABLE_ENTRY *v14; // rdx
  _RTL_HANDLE_TABLE_ENTRY *v15; // rcx
  _QWORD *i; // rax
  _RTL_HANDLE_TABLE_ENTRY *UnCommittedHandles; // rdx
  ULONG_PTR v18; // rax
  _RTL_HANDLE_TABLE_ENTRY *v19; // rcx
  ULONG_PTR v20[2]; // [rsp+30h] [rbp-10h] BYREF
  PVOID v21; // [rsp+70h] [rbp+30h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+48h] BYREF

  p_FreeHandles = &HandleTable->FreeHandles;
  if ( !HandleTable->FreeHandles )
  {
    if ( HandleTable->Reserved[0] )
    {
      v7 = HandleTable->Reserved[1];
      if ( v7 <= HandleTable->MaximumNumberOfHandles )
      {
        SizeOfHandleTableEntry = HandleTable->SizeOfHandleTableEntry;
        CommittedHandles = HandleTable->CommittedHandles;
        v10 = v7 * SizeOfHandleTableEntry;
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        v12 = v10 + 8 * SizeOfHandleTableEntry;
        v13 = (_RTL_HANDLE_TABLE_ENTRY *)(CommittedHandles
                                        ? RtlReAllocateHeap(ProcessHeap, 8u, CommittedHandles, (unsigned int)v12)
                                        : RtlAllocateHeap(ProcessHeap, 8u, v10 + 8 * SizeOfHandleTableEntry));
        BaseAddress = v13;
        if ( v13 )
        {
          HandleTable->Reserved[1] += 8;
          v14 = (_RTL_HANDLE_TABLE_ENTRY *)((char *)v13 + v12);
          v15 = (_RTL_HANDLE_TABLE_ENTRY *)((char *)v13 + v10);
          HandleTable->CommittedHandles = v13;
          v21 = v15;
          goto LABEL_11;
        }
      }
    }
    else
    {
      UnCommittedHandles = HandleTable->UnCommittedHandles;
      if ( !UnCommittedHandles )
      {
        v18 = HandleTable->MaximumNumberOfHandles * HandleTable->SizeOfHandleTableEntry;
        BaseAddress = 0LL;
        RegionSize = v18;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) < 0 )
          return 0LL;
        UnCommittedHandles = (_RTL_HANDLE_TABLE_ENTRY *)BaseAddress;
        v19 = (_RTL_HANDLE_TABLE_ENTRY *)((char *)BaseAddress + RegionSize);
        HandleTable->CommittedHandles = (PRTL_HANDLE_TABLE_ENTRY)BaseAddress;
        HandleTable->MaxReservedHandles = v19;
        HandleTable->UnCommittedHandles = UnCommittedHandles;
      }
      v21 = UnCommittedHandles;
      if ( UnCommittedHandles < HandleTable->MaxReservedHandles )
      {
        v20[0] = 4096LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v21, 0LL, v20, 0x1000u, 4u) >= 0 )
        {
          v15 = (_RTL_HANDLE_TABLE_ENTRY *)v21;
          v14 = (_RTL_HANDLE_TABLE_ENTRY *)((char *)v21 + v20[0]);
LABEL_11:
          HandleTable->UnCommittedHandles = v14;
          for ( i = p_FreeHandles; v15 < HandleTable->UnCommittedHandles; v21 = v15 )
          {
            *i = v15;
            i = v21;
            v15 = (_RTL_HANDLE_TABLE_ENTRY *)((char *)v21 + HandleTable->SizeOfHandleTableEntry);
          }
          goto LABEL_2;
        }
      }
    }
    return 0LL;
  }
LABEL_2:
  v5 = *p_FreeHandles;
  v21 = v5;
  *p_FreeHandles = (PRTL_HANDLE_TABLE_ENTRY)*v5;
  *v5 = 0LL;
  if ( HandleIndex )
    *HandleIndex = (signed __int64)((__int64)v21 - (unsigned __int64)HandleTable->CommittedHandles)
                 / HandleTable->SizeOfHandleTableEntry;
  return (PRTL_HANDLE_TABLE_ENTRY)v21;
}
