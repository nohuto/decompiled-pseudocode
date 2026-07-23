/*
 * XREFs of RtlAddGrowableFunctionTable @ 0x180072210
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002C570 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180032FA0 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlProtectHeap @ 0x180049280 (RtlProtectHeap.c)
 *     RtlAvlInsertNodeEx @ 0x180072490 (RtlAvlInsertNodeEx.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081A04 (LdrEnsureMrdataHeapExists.c)
 *     NtSetInformationProcess @ 0x18009F170 (NtSetInformationProcess.c)
 *     ZwQuerySystemTime @ 0x18009F930 (ZwQuerySystemTime.c)
 */

DWORD __cdecl RtlAddGrowableFunctionTable(
        PVOID *DynamicTable,
        PRUNTIME_FUNCTION FunctionTable,
        DWORD EntryCount,
        DWORD MaximumEntryCount,
        ULONG_PTR RangeBase,
        ULONG_PTR RangeEnd)
{
  DWORD result; // eax
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  __int64 *v15; // rbx
  NTSTATUS v16; // edi
  _QWORD *v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // r8
  _QWORD *v22; // rax
  __int64 **v23; // rax
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // r8d
  int v28; // eax
  PVOID v29; // rcx
  __int64 *ProcessInformation; // [rsp+20h] [rbp-38h] BYREF
  char v31; // [rsp+28h] [rbp-30h]

  if ( EntryCount > MaximumEntryCount || RangeBase >= RangeEnd )
    __fastfail(5u);
  result = LdrEnsureMrdataHeapExists();
  if ( (result & 0x80000000) != 0 )
    return result;
  LOBYTE(v10) = LdrControlFlowGuardEnforced();
  if ( v10 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v11 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v11 == -1 )
        goto LABEL_46;
    }
    else
    {
      RtlProtectHeap(LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v11 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  LOBYTE(v12) = LdrControlFlowGuardEnforced();
  if ( v12 )
    ProcessHeap = LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, 0x88uLL);
  v15 = (__int64 *)Heap;
  if ( Heap )
  {
    Heap[2].QuadPart = (__int64)FunctionTable;
    Heap[10].HighPart = EntryCount;
    ZwQuerySystemTime(Heap + 3);
    v15[5] = RangeEnd;
    v15[4] = RangeBase;
    v15[6] = RangeBase;
    *((_DWORD *)v15 + 20) = 3;
    ProcessInformation = v15;
    v31 = 0;
    v16 = NtSetInformationProcess(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            ProcessDynamicFunctionTableInformation,
            &ProcessInformation,
            0x10u);
    if ( v16 < 0 )
    {
      LOBYTE(v28) = LdrControlFlowGuardEnforced();
      if ( v28 )
        v29 = LdrpMrdataHeap;
      else
        v29 = NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap(v29, 0, v15);
      goto LABEL_27;
    }
    LdrProtectMrdata(0);
    RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
    v17 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
    LOBYTE(v18) = 0;
    if ( !RtlpDynamicFunctionTableTreeMin )
      goto LABEL_19;
    while ( 1 )
    {
      if ( (unsigned __int64)v15[4] >= *(v17 - 7) )
      {
        v19 = (_QWORD *)v17[1];
        if ( !v19 )
        {
          LOBYTE(v18) = 1;
LABEL_19:
          RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMin, v17, v18, v15 + 11);
          v20 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
          LOBYTE(v21) = 0;
          if ( !RtlpDynamicFunctionTableTreeMax )
            goto LABEL_25;
          while ( 1 )
          {
            if ( (unsigned __int64)v15[5] >= *(v20 - 10) )
            {
              v22 = (_QWORD *)v20[1];
              if ( !v22 )
              {
                LOBYTE(v21) = 1;
LABEL_25:
                RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMax, v20, v21, v15 + 14);
                v23 = (__int64 **)qword_1801992D8;
                if ( *(__int64 **)qword_1801992D8 != &RtlpDynamicFunctionTable )
                  __fastfail(3u);
                *v15 = (__int64)&RtlpDynamicFunctionTable;
                v15[1] = (__int64)v23;
                *v23 = v15;
                qword_1801992D8 = (__int64)v15;
                RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
                LdrProtectMrdata(1);
                *DynamicTable = v15;
LABEL_27:
                LOBYTE(v24) = LdrControlFlowGuardEnforced();
                if ( v24 )
                {
                  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
                  v25 = *(_DWORD *)LdrpMrdataHeapUnprotected;
                  if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
                  {
                    *(_DWORD *)LdrpMrdataHeapUnprotected = v25 - 1;
                    if ( v25 == 1 )
                      RtlProtectHeap(LdrpMrdataHeap, 1u);
                    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
                    return v16;
                  }
LABEL_46:
                  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
                  __fastfail(0xEu);
                }
                return v16;
              }
            }
            else
            {
              v22 = (_QWORD *)*v20;
              if ( !*v20 )
                goto LABEL_25;
            }
            v20 = v22;
          }
        }
      }
      else
      {
        v19 = (_QWORD *)*v17;
        if ( !*v17 )
          goto LABEL_19;
      }
      v17 = v19;
    }
  }
  LOBYTE(v26) = LdrControlFlowGuardEnforced();
  if ( v26 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v27 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      goto LABEL_46;
    *(_DWORD *)LdrpMrdataHeapUnprotected = v27 - 1;
    if ( v27 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1u);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return -1073741670;
}
