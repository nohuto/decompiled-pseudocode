/*
 * XREFs of KiStartDynamicProcessor @ 0x1409738B8
 * Callers:
 *     KeStartDynamicProcessor @ 0x1409747B0 (KeStartDynamicProcessor.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14025A320 (MmUnlockPagableImageSection.c)
 *     MiLockPagableImageSection @ 0x14025A6C0 (MiLockPagableImageSection.c)
 *     KiAllocatePrcbThreads @ 0x140377068 (KiAllocatePrcbThreads.c)
 *     KiAllocateProcessorStateInitializationParameters @ 0x14037709C (KiAllocateProcessorStateInitializationParameters.c)
 *     KiAllocateLocalSharedReadyQueue @ 0x140377440 (KiAllocateLocalSharedReadyQueue.c)
 *     KiQueryProcessorNode @ 0x140377750 (KiQueryProcessorNode.c)
 *     ExInitializeProcessor @ 0x1403815B0 (ExInitializeProcessor.c)
 *     KiFreeLocalSharedReadyQueue @ 0x140383354 (KiFreeLocalSharedReadyQueue.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     memset @ 0x140435400 (memset.c)
 *     HalStartDynamicProcessor @ 0x140504D00 (HalStartDynamicProcessor.c)
 *     HalRegisterDynamicProcessor @ 0x140506A00 (HalRegisterDynamicProcessor.c)
 *     KiDynamicProcessorInitialization @ 0x14056BD08 (KiDynamicProcessorInitialization.c)
 *     KiFreePrcbThreads @ 0x14056BDA8 (KiFreePrcbThreads.c)
 *     KiFreeProcessorStateInitializationParameters @ 0x14056BED4 (KiFreeProcessorStateInitializationParameters.c)
 *     KiInitializeProcessorStateInitializationParameters @ 0x14056BF4C (KiInitializeProcessorStateInitializationParameters.c)
 *     KiUnassignProcessorNumberFromPrcb @ 0x140570AFC (KiUnassignProcessorNumberFromPrcb.c)
 *     KiDynamicProcessorAddNotification @ 0x1405719C4 (KiDynamicProcessorAddNotification.c)
 *     ExDeletePoolTagTable @ 0x140606DB0 (ExDeletePoolTagTable.c)
 *     MmDeleteProcessor @ 0x140617C3C (MmDeleteProcessor.c)
 *     ExCreatePoolTagTable @ 0x14081F708 (ExCreatePoolTagTable.c)
 *     KiInitializeProcessorState @ 0x14081F788 (KiInitializeProcessorState.c)
 *     HvlInitializeProcessor @ 0x14081FAAC (HvlInitializeProcessor.c)
 *     EtwInitializeProcessor @ 0x14081FD58 (EtwInitializeProcessor.c)
 *     EtwpInitializeActivityIdSeed @ 0x14081FEAC (EtwpInitializeActivityIdSeed.c)
 *     KeInitializeTimerTable @ 0x14081FF44 (KeInitializeTimerTable.c)
 *     CcInitializeProcessor @ 0x1408215BC (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x140821FA4 (ObInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x1408220BC (IoInitializeProcessor.c)
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x140822F28 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 *     HvlDeleteProcessor @ 0x1409412AC (HvlDeleteProcessor.c)
 *     EtwDeleteProcessor @ 0x1409E1E58 (EtwDeleteProcessor.c)
 *     CmInitializeProcessor @ 0x140A0F9BC (CmInitializeProcessor.c)
 *     KiComputeProcessorDataSize @ 0x140A893D4 (KiComputeProcessorDataSize.c)
 *     KiInitializePrcbContext @ 0x140A89784 (KiInitializePrcbContext.c)
 *     MmInitializeProcessor @ 0x140A898EC (MmInitializeProcessor.c)
 *     KiInitializeDynamicProcessor @ 0x140A9F338 (KiInitializeDynamicProcessor.c)
 *     KiUnshadowProcessorAllocation @ 0x140A9FDDC (KiUnshadowProcessorAllocation.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x140A9FE9C (KiAddProcessorToGroupSchedulingDatabase.c)
 *     WheaInitializeProcessor @ 0x140AAB8C4 (WheaInitializeProcessor.c)
 */

__int64 __fastcall KiStartDynamicProcessor(__int64 a1, int a2, unsigned __int16 a3, unsigned int a4)
{
  ULONG_PTR v5; // r14
  void *v6; // r12
  __int64 v7; // r13
  _OWORD *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rcx
  int ProcessorStateInitializationParameters; // ebx
  int v12; // r9d
  PVOID v13; // rcx
  __int64 v14; // r15
  int v15; // r12d
  int started; // eax
  _OWORD *v17; // rax
  __int128 v18; // xmm1
  unsigned __int16 v20; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh] BYREF
  void *PoolTagTable; // [rsp+48h] [rbp-B8h]
  _DWORD v25[60]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v26[23]; // [rsp+140h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter1[184]; // [rsp+2B0h] [rbp+1B0h] BYREF

  LODWORD(v21) = a2;
  v5 = a4;
  v22 = 0;
  v23 = 0;
  memset(v25, 0, 0xE4uLL);
  memset(v26, 0, sizeof(v26));
  memset(BugCheckParameter1, 0, sizeof(BugCheckParameter1));
  v20 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  KiInitializeProcessorStateInitializationParameters(v25);
  v10 = 2LL;
  if ( (unsigned int)KeNumberProcessors_0 >= 0x800
    || KeNumprocSpecified && (unsigned int)KeNumberProcessors_0 >= KeNumprocSpecified )
  {
    ProcessorStateInitializationParameters = -1073741223;
LABEL_43:
    KiBarrierWait = 0;
    if ( v7 )
    {
      v17 = (_OWORD *)v7;
      do
      {
        *v17 = *v8;
        v17[1] = v8[1];
        v17[2] = v8[2];
        v17[3] = v8[3];
        v17[4] = v8[4];
        v17[5] = v8[5];
        v17[6] = v8[6];
        v17 += 8;
        v18 = v8[7];
        v8 += 8;
        *(v17 - 1) = v18;
        --v10;
      }
      while ( v10 );
      *v17 = *v8;
      v17[1] = v8[1];
      v17[2] = v8[2];
      KeNodeBlock[v20] = v7;
    }
    if ( v9 )
    {
      KiFreeLocalSharedReadyQueue(v9);
      KiFreePrcbThreads(v9);
      HvlDeleteProcessor((struct _KPRCB *)v9);
      MmDeleteProcessor(v9);
      EtwDeleteProcessor(v9);
      KiUnassignProcessorNumberFromPrcb(v9);
    }
    if ( v6 )
      ExDeletePoolTagTable(v5);
    if ( v9 )
      KiUnshadowProcessorAllocation(v9, BugCheckParameter1, v25);
    goto LABEL_53;
  }
  ProcessorStateInitializationParameters = HalRegisterDynamicProcessor();
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  v20 = a3;
  ProcessorStateInitializationParameters = KiQueryProcessorNode(v5, &v21, &v20);
  if ( ProcessorStateInitializationParameters )
    goto LABEL_39;
  v25[4] = KiComputeProcessorDataSize((unsigned int)KeMaximumProcessors, &v22, &v23);
  v25[9] = v22;
  v25[10] = v23;
  v25[0] = 1;
  v25[5] = v20;
  v25[6] = v5;
  v25[7] = v12;
  ProcessorStateInitializationParameters = KiAllocateProcessorStateInitializationParameters((__int64)v25, v20);
  if ( ProcessorStateInitializationParameters < 0 )
  {
LABEL_42:
    v10 = 2LL;
    goto LABEL_43;
  }
  PoolTagTable = ExCreatePoolTagTable(v5, v20);
  v6 = PoolTagTable;
  if ( !PoolTagTable )
  {
    ProcessorStateInitializationParameters = -1073741670;
    KiBarrierWait = 0;
LABEL_53:
    KiFreeProcessorStateInitializationParameters((__int64)v25);
    return (unsigned int)ProcessorStateInitializationParameters;
  }
  v7 = KeNodeBlock[v20];
  v26[1] = *(_OWORD *)&PsLoadedModuleList;
  v9 = KiInitializeProcessorState(BugCheckParameter1, v26, (__int64)v25);
  if ( !v9 )
  {
    ProcessorStateInitializationParameters = -1073741670;
    goto LABEL_42;
  }
  v8 = (_OWORD *)KeNodeBlock[v20];
  if ( !(unsigned int)MmInitializeProcessor(v9) )
  {
    ProcessorStateInitializationParameters = -1073741823;
    goto LABEL_42;
  }
  ProcessorStateInitializationParameters = KiInitializePrcbContext(v9, v20);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  ProcessorStateInitializationParameters = KeInitializeTimerTable(v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  ProcessorStateInitializationParameters = ExInitializeProcessor(v9, 1);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  ProcessorStateInitializationParameters = ObInitializeProcessor((_QWORD *)v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  ProcessorStateInitializationParameters = IoInitializeProcessor(v9, 0LL);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  ProcessorStateInitializationParameters = CcInitializeProcessor(v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  ProcessorStateInitializationParameters = EtwInitializeProcessor(v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  EtwpInitializeActivityIdSeed(*(_QWORD *)(v9 + 34472), *(_DWORD *)(v9 + 36));
  ProcessorStateInitializationParameters = WheaInitializeProcessor(v9, 0LL);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  ProcessorStateInitializationParameters = HvlInitializeProcessor((_SLIST_HEADER *)v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  ProcessorStateInitializationParameters = KiAllocatePrcbThreads(v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  ProcessorStateInitializationParameters = KiAllocateLocalSharedReadyQueue(v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  if ( *(_QWORD *)(KiProcessorBlock[0] + 13072) )
  {
    ProcessorStateInitializationParameters = KiInitializeSingleDpcRuntimeHistoryHashTable(v9);
    if ( ProcessorStateInitializationParameters < 0 )
      goto LABEL_42;
  }
  v13 = ExPageLockHandle;
  *(_QWORD *)(v9 + 34968) = 0LL;
  *(_QWORD *)(v9 + 34976) = v9 + 34976;
  MiLockPagableImageSection((ULONG_PTR)v13, 1uLL);
  KiAddProcessorToGroupSchedulingDatabase(v9);
  v14 = KeLoaderBlock_0;
  KiBarrierWait = 1;
  if ( !KeLoaderBlock_0 )
  {
    KeLoaderBlock_0 = (__int64)v26;
    v26[1] = *(_OWORD *)&PsLoadedModuleList;
  }
  ProcessorStateInitializationParameters = KiDynamicProcessorAddNotification(
                                             0,
                                             *(_DWORD *)(v9 + 36),
                                             *(unsigned __int8 *)(v9 + 208),
                                             *(_BYTE *)(v9 + 209),
                                             v21,
                                             0);
  v15 = 2;
  if ( ProcessorStateInitializationParameters >= 0 )
  {
    started = HalStartDynamicProcessor((__int64)BugCheckParameter1, v5, v21, v20);
    if ( started == 3 )
      KeBugCheckEx(0x1DFu, (ULONG_PTR)BugCheckParameter1, 3uLL, v5, (unsigned int)v21);
    if ( started == 2 )
    {
      ProcessorStateInitializationParameters = -1073741823;
    }
    else
    {
      while ( *((_QWORD *)&v26[8] + 1) )
        _mm_pause();
      KiInitializeDynamicProcessor(v9);
      v15 = 1;
    }
  }
  KiDynamicProcessorAddNotification(
    v15,
    *(_DWORD *)(v9 + 36),
    *(unsigned __int8 *)(v9 + 208),
    *(_BYTE *)(v9 + 209),
    v21,
    ProcessorStateInitializationParameters);
  if ( ProcessorStateInitializationParameters >= 0 )
  {
    WheaInitializeProcessor(v9, 1LL);
    CmInitializeProcessor(v9);
    KiDynamicProcessorInitialization(v9);
  }
  KeLoaderBlock_0 = v14;
  MmUnlockPagableImageSection(ExPageLockHandle);
  v6 = PoolTagTable;
LABEL_39:
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  return (unsigned int)ProcessorStateInitializationParameters;
}
