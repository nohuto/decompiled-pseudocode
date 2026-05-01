/*
 * XREFs of ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x18001F450
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KKW4_HOST_GROUP@@5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x18001E940 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PARTITION@@@Z @ 0x18003B01C (-RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 * Callees:
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180024940 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     CempLockSleepConditionVariableExclusive @ 0x18003E5B0 (CempLockSleepConditionVariableExclusive.c)
 *     ?RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z @ 0x18004C7AC (-RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z.c)
 *     ?RmpMemoryMonitorAllocateState@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x18004C924 (-RmpMemoryMonitorAllocateState@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 *     ??$RmpArrayGrow@PEAU_RM_PARTITION@@@@YAJPEAPEAPEAU_RM_PARTITION@@PEAKK@Z @ 0x18004CD44 (--$RmpArrayGrow@PEAU_RM_PARTITION@@@@YAJPEAPEAPEAU_RM_PARTITION@@PEAKK@Z.c)
 *     ?RmpPartitionInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@@Z @ 0x18004CFF4 (-RmpPartitionInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionTableFindPartitionInternal@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAXK@Z @ 0x18004DB10 (-RmpPartitionTableFindPartitionInternal@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAXK@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPartitionTableFindOrCreatePartition(
        struct _RM_PARTITION_TABLE *a1,
        void *a2,
        struct _RM_PARTITION **a3)
{
  unsigned __int64 v3; // r13
  void *v5; // rsi
  char *v7; // rbp
  char *v8; // r14
  __int64 *v9; // rdi
  int State; // edi
  struct _RM_PARTITION *Heap; // rax
  struct _RM_PARTITION *v13; // rbp
  struct _RM_PARTITION *PartitionInternal; // rax
  char *v15; // rax
  char **v16; // rcx
  void *v17; // rcx
  _DWORD v18[2]; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-88h] BYREF
  void *v22; // [rsp+60h] [rbp-78h]
  int v23; // [rsp+68h] [rbp-70h]
  int v24; // [rsp+6Ch] [rbp-6Ch]
  _DWORD *v25; // [rsp+70h] [rbp-68h]
  __int64 v26; // [rsp+78h] [rbp-60h]
  unsigned __int64 *v27; // [rsp+80h] [rbp-58h]
  __int64 v28; // [rsp+88h] [rbp-50h]

  v3 = 0LL;
  v5 = a2;
  if ( a2 == (void *)-2LL )
    v5 = (void *)*((_QWORD *)a1 + 6);
  RtlAcquireSRWLockShared(a1);
  if ( (*((_BYTE *)a1 + 40) & 1) != 0 )
  {
    State = -1073741058;
LABEL_9:
    RtlReleaseSRWLockShared(a1);
    goto LABEL_10;
  }
  v7 = (char *)*((_QWORD *)a1 + 2);
  v8 = (char *)a1 + 16;
  if ( v7 != (char *)a1 + 16 )
  {
    while ( 1 )
    {
      v9 = (__int64 *)(v7 - 8);
      if ( (int)NtCompareObjects(*((_QWORD *)v7 + 3), v5) >= 0 )
        break;
      v7 = *(char **)v7;
      if ( v7 == v8 )
        goto LABEL_17;
    }
    if ( (v9[30] & 3) == 1 )
    {
      if ( _InterlockedIncrement64(v9) <= 1 )
        __fastfail(0xEu);
      *a3 = (struct _RM_PARTITION *)v9;
      State = 0;
      goto LABEL_9;
    }
  }
LABEL_17:
  RtlReleaseSRWLockShared(a1);
  Heap = (struct _RM_PARTITION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xF8uLL);
  v13 = Heap;
  if ( !Heap )
  {
    State = -1073741801;
    goto LABEL_12;
  }
  RmpPartitionInitialize((struct _RM_PARTITION_TABLE *)((char *)a1 - 312), Heap);
  State = RmpMemoryMonitorAllocateState((struct _RM_PARTITION *)((char *)v13 + 40));
  if ( State < 0 )
    goto LABEL_41;
  RmpAcquireGlobalLock();
  RtlAcquireSRWLockExclusive(a1);
  *((_DWORD *)a1 + 2) = GetCurrentThreadId();
  ++*((_DWORD *)a1 + 20);
  State = RmpArrayGrow<_RM_PARTITION *>(
            (char *)a1 + 64,
            (char *)a1 + 72,
            (unsigned int)(*((_DWORD *)a1 + 19) + *((_DWORD *)a1 + 20)));
  RmpReleaseGlobalLock();
  if ( State >= 0 )
  {
    if ( (*((_BYTE *)a1 + 40) & 1) != 0 )
    {
LABEL_34:
      State = -1073741058;
    }
    else
    {
      while ( 1 )
      {
        PartitionInternal = RmpPartitionTableFindPartitionInternal(a1, v5, 0xFu);
        if ( !PartitionInternal )
        {
          v3 = *((_QWORD *)a1 + 7);
          *((_QWORD *)a1 + 7) = v3 + 1;
          State = RmpPartitionStart(v13, v5, v3);
          if ( State < 0 )
          {
            v17 = (void *)*((_QWORD *)v13 + 4);
            if ( v17 )
            {
              NtClose(v17);
              *((_QWORD *)v13 + 4) = 0LL;
            }
          }
          else
          {
            ++*((_DWORD *)a1 + 19);
            v15 = (char *)v13 + 8;
            v16 = (char **)*((_QWORD *)a1 + 3);
            if ( *v16 != v8 )
              __fastfail(3u);
            *((_QWORD *)v13 + 2) = v16;
            *(_QWORD *)v15 = v8;
            *v16 = v15;
            *((_QWORD *)a1 + 3) = v15;
            RtlWakeAllConditionVariable((char *)a1 + 32);
            *a3 = v13;
            v13 = 0LL;
            State = 0;
          }
          goto LABEL_25;
        }
        if ( (*((_DWORD *)PartitionInternal + 60) & 3) == 1 )
          break;
        CempLockSleepConditionVariableExclusive(a1, (char *)a1 + 32, 0LL);
        if ( (*((_BYTE *)a1 + 40) & 1) != 0 )
          goto LABEL_34;
      }
      if ( _InterlockedIncrement64((volatile signed __int64 *)PartitionInternal) <= 1 )
        __fastfail(0xEu);
      *a3 = PartitionInternal;
      State = 0;
    }
  }
LABEL_25:
  --*((_DWORD *)a1 + 20);
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  if ( v13 )
LABEL_41:
    RmpPartitionRelease(v13);
LABEL_10:
  if ( State >= 0 )
    v3 = *((_QWORD *)*a3 + 29);
LABEL_12:
  if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 9) != 0 && (qword_1800DC1F8 & 9) == qword_1800DC1F8 )
  {
    v19 = v3;
    v27 = &v19;
    v18[0] = State;
    v25 = v18;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800DC1E8;
    v28 = 8LL;
    v26 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC1E8;
    v22 = &unk_1800C474D;
    UserData.Reserved = 2;
    v23 = 40;
    v24 = 1;
    v18[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return (unsigned int)State;
}
