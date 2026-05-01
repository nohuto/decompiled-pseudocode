/*
 * XREFs of ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x180032170
 * Callers:
 *     ?RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PARTITION@@@Z @ 0x180031614 (-RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x180013B3C (CempLockSleepConditionVariableExclusive.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800329D4 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z @ 0x180041A98 (-RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z.c)
 *     ?RmpMemoryMonitorAllocateState@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x180042824 (-RmpMemoryMonitorAllocateState@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 *     ?RmpPartitionInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@@Z @ 0x180042EF4 (-RmpPartitionInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@@Z.c)
 *     ??$RmpArrayGrow@PEAU_RM_PARTITION@@@@YAJPEAPEAPEAU_RM_PARTITION@@PEAKK@Z @ 0x18004301C (--$RmpArrayGrow@PEAU_RM_PARTITION@@@@YAJPEAPEAPEAU_RM_PARTITION@@PEAKK@Z.c)
 *     ?RmpPartitionTableFindPartitionInternal@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAXK@Z @ 0x18004331C (-RmpPartitionTableFindPartitionInternal@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAXK@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPartitionTableFindOrCreatePartition(
        struct _RM_PARTITION_TABLE *a1,
        void *a2,
        struct _RM_PARTITION **a3)
{
  void *v4; // rsi
  unsigned __int64 v6; // r13
  char *v7; // rbp
  char *v8; // r15
  __int64 *v9; // rbx
  int State; // ebx
  struct _RM_PARTITION *Heap; // rax
  struct _RM_PARTITION *v13; // rbp
  int v14; // r8d
  int v15; // ecx
  struct _RM_PARTITION *PartitionInternal; // rax
  char *v17; // rax
  char **v18; // rcx
  void *v19; // rcx
  int v20; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-B0h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-A8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-88h] BYREF
  void *v25; // [rsp+70h] [rbp-78h]
  int v26; // [rsp+78h] [rbp-70h]
  int v27; // [rsp+7Ch] [rbp-6Ch]
  int *v28; // [rsp+80h] [rbp-68h]
  __int64 v29; // [rsp+88h] [rbp-60h]
  unsigned __int64 *v30; // [rsp+90h] [rbp-58h]
  __int64 v31; // [rsp+98h] [rbp-50h]

  v4 = a2;
  v6 = 0LL;
  if ( a2 == (void *)-2LL )
    v4 = (void *)*((_QWORD *)a1 + 6);
  RtlAcquireSRWLockShared(a1);
  if ( (*((_BYTE *)a1 + 40) & 1) != 0 )
  {
    State = -1073741058;
LABEL_11:
    RtlReleaseSRWLockShared(a1);
    goto LABEL_12;
  }
  v7 = (char *)*((_QWORD *)a1 + 2);
  v8 = (char *)a1 + 16;
  if ( v7 != (char *)a1 + 16 )
  {
    while ( 1 )
    {
      v9 = (__int64 *)(v7 - 8);
      if ( (int)NtCompareObjects(*((_QWORD *)v7 + 3), v4) >= 0 )
        break;
      v7 = *(char **)v7;
      if ( v7 == v8 )
        goto LABEL_19;
    }
    if ( (v9[30] & 3) != 1 )
      v9 = 0LL;
    if ( v9 )
    {
      if ( _InterlockedIncrement64(v9) <= 1 )
        __fastfail(0xEu);
      *a3 = (struct _RM_PARTITION *)v9;
      State = 0;
      goto LABEL_11;
    }
  }
LABEL_19:
  RtlReleaseSRWLockShared(a1);
  Heap = (struct _RM_PARTITION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xF8uLL);
  v13 = Heap;
  if ( !Heap )
  {
    State = -1073741801;
    goto LABEL_14;
  }
  RmpPartitionInitialize((struct _RM_PARTITION_TABLE *)((char *)a1 - 312), Heap);
  State = RmpMemoryMonitorAllocateState((struct _RM_PARTITION *)((char *)v13 + 40));
  if ( State < 0 )
    goto LABEL_43;
  RmpAcquireGlobalLock();
  RtlAcquireSRWLockExclusive(a1);
  *((_DWORD *)a1 + 2) = GetCurrentThreadId();
  v14 = *((_DWORD *)a1 + 19);
  v15 = *((_DWORD *)a1 + 20) + 1;
  *((_DWORD *)a1 + 20) = v15;
  State = RmpArrayGrow<_RM_PARTITION *>((char *)a1 + 64, (char *)a1 + 72, (unsigned int)(v15 + v14));
  RmpReleaseGlobalLock();
  if ( State >= 0 )
  {
    if ( (*((_BYTE *)a1 + 40) & 1) != 0 )
    {
LABEL_36:
      State = -1073741058;
    }
    else
    {
      while ( 1 )
      {
        PartitionInternal = RmpPartitionTableFindPartitionInternal(a1, v4, 0xFu);
        if ( !PartitionInternal )
        {
          v6 = *((_QWORD *)a1 + 7);
          *((_QWORD *)a1 + 7) = v6 + 1;
          State = RmpPartitionStart(v13, v4, v6);
          if ( State < 0 )
          {
            v19 = (void *)*((_QWORD *)v13 + 4);
            if ( v19 )
            {
              NtClose(v19);
              *((_QWORD *)v13 + 4) = 0LL;
            }
          }
          else
          {
            ++*((_DWORD *)a1 + 19);
            v17 = (char *)v13 + 8;
            v18 = (char **)*((_QWORD *)a1 + 3);
            if ( *v18 != v8 )
              __fastfail(3u);
            *((_QWORD *)v13 + 2) = v18;
            *(_QWORD *)v17 = v8;
            *v18 = v17;
            *((_QWORD *)a1 + 3) = v17;
            RtlWakeAllConditionVariable((char *)a1 + 32);
            *a3 = v13;
            State = 0;
            v13 = 0LL;
          }
          goto LABEL_27;
        }
        if ( (*((_DWORD *)PartitionInternal + 60) & 3) == 1 )
          break;
        CempLockSleepConditionVariableExclusive((__int64)a1, (__int64)a1 + 32, 0LL);
        if ( (*((_BYTE *)a1 + 40) & 1) != 0 )
          goto LABEL_36;
      }
      if ( _InterlockedIncrement64((volatile signed __int64 *)PartitionInternal) <= 1 )
        __fastfail(0xEu);
      *a3 = PartitionInternal;
      State = 0;
    }
  }
LABEL_27:
  --*((_DWORD *)a1 + 20);
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  if ( v13 )
LABEL_43:
    RmpPartitionRelease(v13);
LABEL_12:
  if ( State >= 0 )
    v6 = *((_QWORD *)*a3 + 29);
LABEL_14:
  if ( (unsigned int)dword_1800DB1E0 > 4 && (byte_1800DB1F0 & 9) != 0 && (qword_1800DB1F8 & 9) == qword_1800DB1F8 )
  {
    v21 = v6;
    v30 = &v21;
    v20 = State;
    v28 = &v20;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800DB1E8;
    v31 = 8LL;
    v29 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB1E8;
    v25 = &unk_1800C4837;
    UserData.Reserved = 2;
    v26 = 40;
    v27 = 1;
    v22 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return (unsigned int)State;
}
