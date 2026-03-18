/*
 * XREFs of KiStartDynamicProcessor @ 0x14096029C
 * Callers:
 *     KeStartDynamicProcessor @ 0x140961810 (KeStartDynamicProcessor.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140241620 (MmUnlockPagableImageSection.c)
 *     MmCreateKernelStack @ 0x1402F4B70 (MmCreateKernelStack.c)
 *     MiLockPagableImageSection @ 0x1402FD820 (MiLockPagableImageSection.c)
 *     MmDeleteKernelStack @ 0x1403A0B28 (MmDeleteKernelStack.c)
 *     ExInitializeProcessor @ 0x1403C03EC (ExInitializeProcessor.c)
 *     KiQueryProcessorNode @ 0x1403C1A84 (KiQueryProcessorNode.c)
 *     KiAllocateProcessorNumber @ 0x1403C2638 (KiAllocateProcessorNumber.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalStartDynamicProcessor @ 0x140508D60 (HalStartDynamicProcessor.c)
 *     HalRegisterDynamicProcessor @ 0x14050A770 (HalRegisterDynamicProcessor.c)
 *     KiDynamicProcessorInitialization @ 0x14056918C (KiDynamicProcessorInitialization.c)
 *     KiFreeProcessorNumber @ 0x14056DA54 (KiFreeProcessorNumber.c)
 *     KiUnassignProcessorNumberFromPrcb @ 0x14056DB6C (KiUnassignProcessorNumberFromPrcb.c)
 *     KiDynamicProcessorAddNotification @ 0x14056EB1C (KiDynamicProcessorAddNotification.c)
 *     MmDeleteProcessor @ 0x14057F9FC (MmDeleteProcessor.c)
 *     ExDeletePoolTagTable @ 0x14063A6C0 (ExDeletePoolTagTable.c)
 *     CcInitializeProcessor @ 0x140825358 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x140825414 (ObInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x14082552C (IoInitializeProcessor.c)
 *     ExCreatePoolTagTable @ 0x140829A28 (ExCreatePoolTagTable.c)
 *     MmAllocateIsrStack @ 0x140829ACC (MmAllocateIsrStack.c)
 *     MmAllocateIndependentPagesEx @ 0x140829CBC (MmAllocateIndependentPagesEx.c)
 *     EtwpInitializeActivityIdSeed @ 0x140829EEC (EtwpInitializeActivityIdSeed.c)
 *     EtwInitializeProcessor @ 0x140829F84 (EtwInitializeProcessor.c)
 *     KeInitializeTimerTable @ 0x14082A0D8 (KeInitializeTimerTable.c)
 *     HvlInitializeProcessor @ 0x14082A2D4 (HvlInitializeProcessor.c)
 *     KiInitializeProcessorState @ 0x14082A324 (KiInitializeProcessorState.c)
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x140851878 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 *     CmInitializeProcessor @ 0x140919E48 (CmInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x140931100 (HvlDeleteProcessor.c)
 *     MmFreeIndependentPages @ 0x14096ED20 (MmFreeIndependentPages.c)
 *     MmFreeIsrStack @ 0x1409783E8 (MmFreeIsrStack.c)
 *     EtwDeleteProcessor @ 0x1409DEEDC (EtwDeleteProcessor.c)
 *     KiComputeProcessorDataSize @ 0x140A545F8 (KiComputeProcessorDataSize.c)
 *     KiInitializePrcbContext @ 0x140A59B28 (KiInitializePrcbContext.c)
 *     MmInitializeProcessor @ 0x140A59E20 (MmInitializeProcessor.c)
 *     KiInitializeDynamicProcessor @ 0x140A693D8 (KiInitializeDynamicProcessor.c)
 *     KiUnshadowProcessorAllocation @ 0x140A69E6C (KiUnshadowProcessorAllocation.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x140A69EB4 (KiAddProcessorToGroupSchedulingDatabase.c)
 *     WheaInitializeProcessor @ 0x140A6D30C (WheaInitializeProcessor.c)
 */

__int64 __fastcall KiStartDynamicProcessor(__int64 a1, int a2, unsigned __int16 a3, unsigned int a4)
{
  __int64 v5; // r13
  _OWORD *v6; // rsi
  __int64 v7; // rdi
  __int64 IndependentPages; // r14
  unsigned __int64 v9; // r15
  __int64 *v10; // r8
  SIZE_T v11; // rdx
  int ProcessorNumber; // ebx
  unsigned int v13; // r12d
  _OWORD *v14; // rcx
  __int128 v15; // xmm1
  PVOID v17; // rcx
  __int64 v18; // r13
  int v19; // r12d
  int started; // eax
  unsigned __int16 v21; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR v22; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE BugCheckParameter3[12]; // [rsp+40h] [rbp-C0h] BYREF
  void *PoolTagTable; // [rsp+50h] [rbp-B0h]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  _QWORD v26[16]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v27[23]; // [rsp+E0h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter1[184]; // [rsp+250h] [rbp+150h] BYREF

  LODWORD(v22) = a2;
  *(_QWORD *)BugCheckParameter3 = a4;
  *(_DWORD *)&BugCheckParameter3[8] = 0;
  memset(v27, 0, sizeof(v27));
  memset(BugCheckParameter1, 0, sizeof(BugCheckParameter1));
  PoolTagTable = 0LL;
  v21 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  IndependentPages = 0LL;
  LODWORD(v9) = 0;
  memset(v26, 0, 0x78uLL);
  v10 = KeNodeBlock;
  v11 = 2LL;
  if ( (unsigned int)KeNumberProcessors_0 >= 0x800
    || KeNumprocSpecified && (unsigned int)KeNumberProcessors_0 >= KeNumprocSpecified )
  {
    ProcessorNumber = -1073741223;
    goto LABEL_23;
  }
  ProcessorNumber = HalRegisterDynamicProcessor();
  if ( ProcessorNumber >= 0 )
  {
    v21 = a3;
    v13 = *(_DWORD *)BugCheckParameter3;
    ProcessorNumber = KiQueryProcessorNode(*(unsigned int *)BugCheckParameter3, &v22, &v21);
    if ( !ProcessorNumber )
    {
      v9 = (unsigned int)KiComputeProcessorDataSize(
                           (unsigned int)KeMaximumProcessors,
                           &BugCheckParameter3[4],
                           &BugCheckParameter3[8]);
      IndependentPages = MmAllocateIndependentPagesEx(v9, v21, 0LL, 0);
      if ( !IndependentPages )
      {
        ProcessorNumber = -1073741670;
        KiBarrierWait = 0;
        goto LABEL_36;
      }
      PoolTagTable = ExCreatePoolTagTable(v13, v21);
      if ( !PoolTagTable )
      {
        ProcessorNumber = -1073741670;
        KiBarrierWait = 0;
        goto LABEL_35;
      }
      v26[4] = MmCreateKernelStack(0, v21, 0LL);
      if ( !v26[4]
        || (v26[5] = MmCreateKernelStack(0, v21, 0LL)) == 0LL
        || !MmAllocateIsrStack(&v26[6], v21)
        || !MmAllocateIsrStack(&v26[7], v21)
        || !MmAllocateIsrStack(&v26[11], v21)
        || !MmAllocateIsrStack(&v26[9], v21)
        || !MmAllocateIsrStack(&v26[10], v21)
        || !MmAllocateIsrStack(&v26[8], v21) )
      {
        ProcessorNumber = -1073741670;
        KiBarrierWait = 0;
        goto LABEL_31;
      }
      ProcessorNumber = KiAllocateProcessorNumber(v21, (__int64)&v26[2] + 4);
      if ( ProcessorNumber < 0 )
        goto LABEL_22;
      LODWORD(v26[0]) = 1;
      HIDWORD(v26[0]) = v9;
      v5 = KeNodeBlock[v21];
      LODWORD(v26[1]) = v21;
      LODWORD(v26[2]) = KeMaximumProcessors;
      v26[3] = *(_QWORD *)&BugCheckParameter3[4];
      v25 = v5;
      v27[1] = *(_OWORD *)&PsLoadedModuleList;
      HIDWORD(v26[1]) = v13;
      v7 = KiInitializeProcessorState(BugCheckParameter1, v27, IndependentPages, (__int64)v26);
      if ( !v7 )
      {
        ProcessorNumber = -1073741670;
        goto LABEL_22;
      }
      v6 = (_OWORD *)KeNodeBlock[v21];
      if ( !(unsigned int)MmInitializeProcessor(v7) )
      {
        ProcessorNumber = -1073741823;
LABEL_84:
        KiUnassignProcessorNumberFromPrcb(v7);
        goto LABEL_22;
      }
      ProcessorNumber = KiInitializePrcbContext(v7, v21);
      if ( ProcessorNumber < 0 )
        goto LABEL_84;
      ProcessorNumber = KeInitializeTimerTable(v7);
      if ( ProcessorNumber < 0 )
        goto LABEL_84;
      ProcessorNumber = ExInitializeProcessor(v7, 1);
      if ( ProcessorNumber < 0 )
        goto LABEL_84;
      ProcessorNumber = ObInitializeProcessor((_QWORD *)v7);
      if ( ProcessorNumber < 0 )
        goto LABEL_84;
      ProcessorNumber = IoInitializeProcessor(v7, 0LL);
      if ( ProcessorNumber < 0 )
        goto LABEL_84;
      ProcessorNumber = CcInitializeProcessor(v7);
      if ( ProcessorNumber < 0 )
        goto LABEL_84;
      ProcessorNumber = EtwInitializeProcessor(v7);
      if ( ProcessorNumber < 0 )
        goto LABEL_84;
      EtwpInitializeActivityIdSeed(*(_QWORD *)(v7 + 34472), *(_DWORD *)(v7 + 36));
      ProcessorNumber = WheaInitializeProcessor(v7, 0LL);
      if ( ProcessorNumber < 0 )
        goto LABEL_84;
      ProcessorNumber = HvlInitializeProcessor((union _SLIST_HEADER *)v7);
      if ( ProcessorNumber < 0 )
        goto LABEL_84;
      if ( *(_QWORD *)(KiProcessorBlock[0] + 13072) )
      {
        ProcessorNumber = KiInitializeSingleDpcRuntimeHistoryHashTable(v7);
        if ( ProcessorNumber < 0 )
          goto LABEL_84;
      }
      v17 = ExPageLockHandle;
      *(_QWORD *)(v7 + 34968) = 0LL;
      *(_QWORD *)(v7 + 34976) = v7 + 34976;
      MiLockPagableImageSection((ULONG_PTR)v17, 1uLL);
      KiAddProcessorToGroupSchedulingDatabase(v7);
      v18 = KeLoaderBlock_0;
      KiBarrierWait = 1;
      if ( !KeLoaderBlock_0 )
      {
        KeLoaderBlock_0 = (__int64)v27;
        v27[1] = *(_OWORD *)&PsLoadedModuleList;
      }
      ProcessorNumber = KiDynamicProcessorAddNotification(
                          0,
                          *(_DWORD *)(v7 + 36),
                          *(unsigned __int8 *)(v7 + 208),
                          *(_BYTE *)(v7 + 209),
                          v22,
                          0);
      v19 = 2;
      if ( ProcessorNumber >= 0 )
      {
        started = HalStartDynamicProcessor((__int64)BugCheckParameter1, *(unsigned int *)BugCheckParameter3, v22, v21);
        if ( started == 3 )
          KeBugCheckEx(
            0x1DFu,
            (ULONG_PTR)BugCheckParameter1,
            3uLL,
            *(unsigned int *)BugCheckParameter3,
            (unsigned int)v22);
        if ( started == 2 )
        {
          ProcessorNumber = -1073741823;
        }
        else
        {
          while ( *((_QWORD *)&v27[8] + 1) )
            _mm_pause();
          KiInitializeDynamicProcessor(v7);
          v19 = 1;
        }
      }
      KiDynamicProcessorAddNotification(
        v19,
        *(_DWORD *)(v7 + 36),
        *(unsigned __int8 *)(v7 + 208),
        *(_BYTE *)(v7 + 209),
        v22,
        ProcessorNumber);
      if ( ProcessorNumber >= 0 )
      {
        WheaInitializeProcessor(v7, 1LL);
        CmInitializeProcessor(v7);
        KiDynamicProcessorInitialization(v7);
      }
      KeLoaderBlock_0 = v18;
      MmUnlockPagableImageSection(ExPageLockHandle);
      v5 = v25;
    }
    if ( ProcessorNumber >= 0 )
      return (unsigned int)ProcessorNumber;
    if ( !v7 )
      goto LABEL_22;
    goto LABEL_84;
  }
LABEL_22:
  v11 = 2LL;
  v10 = KeNodeBlock;
LABEL_23:
  KiBarrierWait = 0;
  if ( v5 )
  {
    v14 = (_OWORD *)v5;
    do
    {
      *v14 = *v6;
      v14[1] = v6[1];
      v14[2] = v6[2];
      v14[3] = v6[3];
      v14[4] = v6[4];
      v14[5] = v6[5];
      v14[6] = v6[6];
      v14 += 8;
      v15 = v6[7];
      v6 += 8;
      *(v14 - 1) = v15;
      --v11;
    }
    while ( v11 );
    *v14 = *v6;
    *((_QWORD *)v14 + 2) = *((_QWORD *)v6 + 2);
    KeNodeBlock[v21] = v5;
  }
  if ( v7 )
  {
    HvlDeleteProcessor((struct _KPRCB *)v7, v11, (MEMORY_CACHING_TYPE)KeNodeBlock);
    MmDeleteProcessor(v7);
    EtwDeleteProcessor(v7);
  }
  if ( !PoolTagTable )
    goto LABEL_32;
  v13 = *(_DWORD *)BugCheckParameter3;
LABEL_31:
  ExDeletePoolTagTable(v13);
LABEL_32:
  if ( !IndependentPages )
    goto LABEL_36;
  if ( v7 )
    KiUnshadowProcessorAllocation(v7, BugCheckParameter1, v10);
LABEL_35:
  MmFreeIndependentPages(IndependentPages, (unsigned int)v9);
LABEL_36:
  if ( WORD2(v26[2]) || BYTE6(v26[2]) )
    KiFreeProcessorNumber((unsigned __int16 *)&v26[2] + 2);
  if ( v26[4] )
    MmDeleteKernelStack(v26[4], 0);
  if ( v26[5] )
    MmDeleteKernelStack(v26[5], 0);
  if ( v26[6] )
    MmFreeIsrStack();
  if ( v26[7] )
    MmFreeIsrStack();
  if ( v26[8] )
    MmFreeIsrStack();
  if ( v26[10] )
    MmFreeIsrStack();
  if ( v26[9] )
    MmFreeIsrStack();
  if ( v26[11] )
    MmFreeIsrStack();
  return (unsigned int)ProcessorNumber;
}
