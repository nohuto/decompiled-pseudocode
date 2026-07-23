/*
 * XREFs of MmDeleteProcessAddressSpace @ 0x140705BF8
 * Callers:
 *     PspProcessDelete @ 0x1407612A0 (PspProcessDelete.c)
 * Callees:
 *     MiGetProcessPartition @ 0x140275924 (MiGetProcessPartition.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiDeleteFinalPageTables @ 0x140291844 (MiDeleteFinalPageTables.c)
 *     MiDeletePxeSharedLocks @ 0x140292F10 (MiDeletePxeSharedLocks.c)
 *     MiDeleteWorkingSetList @ 0x140292F40 (MiDeleteWorkingSetList.c)
 *     MiContractPagingFiles @ 0x140292FD4 (MiContractPagingFiles.c)
 *     MiReturnResident @ 0x1402930A0 (MiReturnResident.c)
 *     MiUnlinkWorkingSet @ 0x140293204 (MiUnlinkWorkingSet.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiEmptyPageAccessLog @ 0x1402E21D0 (MiEmptyPageAccessLog.c)
 *     PsReturnProcessQuota @ 0x1402EA35C (PsReturnProcessQuota.c)
 *     ExCleanupAutoExpandPushLock @ 0x1402FD630 (ExCleanupAutoExpandPushLock.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406FADD0 (PspChangeJobMemoryUsageByProcess.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140706EEC (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiDeleteAweInfo @ 0x140A41CF8 (MiDeleteAweInfo.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MmDeleteProcessAddressSpace(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // r14
  ULONG_PTR v3; // r9
  char *v4; // rbx
  void *SharedVm; // rbx
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 ProcessPartition; // r15
  __int64 v9; // rbp
  __int64 v10; // rdx
  unsigned __int64 *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  _QWORD *v15; // rax
  ULONG_PTR v16; // rdx
  _QWORD *i; // rax
  char *j; // rsi
  _QWORD *v19; // rax
  void *v20; // rcx

  v1 = BugCheckParameter2 + 1664;
  MiUnlinkWorkingSet(BugCheckParameter2 + 1664, 0LL);
  v3 = *(_QWORD *)(BugCheckParameter2 + 1280);
  v4 = *(char **)(BugCheckParameter2 + 1544);
  if ( v3 )
  {
    if ( v4 && *((_QWORD *)v4 + 2) && *((_DWORD *)v4 + 8) )
    {
      v15 = *(_QWORD **)v4;
      v16 = 0LL;
      while ( v15 )
      {
        v16 = (ULONG_PTR)v15;
        v15 = (_QWORD *)*v15;
      }
      if ( !v16 )
      {
        for ( i = (_QWORD *)*((_QWORD *)v4 + 1); i; i = (_QWORD *)*i )
          v16 = (ULONG_PTR)i;
      }
      KeBugCheckEx(0xCBu, v16, 0LL, *(_QWORD *)(v16 + 24), *(_QWORD *)(BugCheckParameter2 + 1280));
    }
    KeBugCheckEx(0x76u, 0LL, BugCheckParameter2, v3, *(_QWORD *)(BugCheckParameter2 + 1544));
  }
  if ( v4 )
  {
    for ( j = *(char **)(BugCheckParameter2 + 1544); ; j = v4 + 8 )
    {
      while ( 1 )
      {
        v19 = *(_QWORD **)j;
        if ( !*(_QWORD *)j )
          break;
        do
        {
          v20 = v19;
          v19 = (_QWORD *)*v19;
        }
        while ( v19 );
        if ( !v20 )
          break;
        ExFreePoolWithTag(v20, 0);
      }
      if ( j != v4 )
        break;
    }
    ExFreePoolWithTag(v4, 0);
  }
  SharedVm = MiGetSharedVm(v1);
  v6 = MiDeleteFinalPageTables((_KPROCESS *)BugCheckParameter2);
  PsReturnProcessQuota(BugCheckParameter2, v7, 4uLL);
  ProcessPartition = MiGetProcessPartition(BugCheckParameter2);
  MiReturnResident(ProcessPartition, 4uLL);
  v9 = *(_QWORD *)(BugCheckParameter2 + 1680);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 376);
    if ( v10 )
      MiDeleteAweInfo(BugCheckParameter2, v10);
    ExCleanupAutoExpandPushLock(v9 + 392);
  }
  v11 = (unsigned __int64 *)*((_QWORD *)SharedVm + 5);
  if ( v11 )
  {
    MiEmptyPageAccessLog(v11);
    *((_QWORD *)SharedVm + 5) = 0LL;
  }
  v12 = (void *)*((_QWORD *)SharedVm + 4);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *((_QWORD *)SharedVm + 4) = 0LL;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 1120) & 0x10) != 0 )
    PspChangeJobMemoryUsageByProcess(2, -4LL, BugCheckParameter2, 0LL);
  MiReturnCommit(ProcessPartition, 4 - v6);
  MiDeletePxeSharedLocks(v1);
  MiDeleteWorkingSetList(v1);
  v13 = *(void **)(BugCheckParameter2 + 1368);
  if ( v13 )
    MiReleaseProcessReferenceToSessionDataPage(v13);
  v14 = *(void **)(BugCheckParameter2 + 2552);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  MiContractPagingFiles(ProcessPartition);
}
