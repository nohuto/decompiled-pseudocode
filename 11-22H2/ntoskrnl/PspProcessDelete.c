/*
 * XREFs of PspProcessDelete @ 0x1407615C0
 * Callers:
 *     <none>
 * Callees:
 *     PspUnlockProcessListExclusive @ 0x140226904 (PspUnlockProcessListExclusive.c)
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x140254650 (KeInsertQueueDpc.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14028B210 (PsReturnProcessNonPagedPoolQuota.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8BC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeInitializeDpc @ 0x1402BF970 (KeInitializeDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E7464 (KiQueryUnbiasedInterruptTime.c)
 *     PsDereferencePartition @ 0x1402F9C4C (PsDereferencePartition.c)
 *     PsGetProcessId @ 0x1402FA490 (PsGetProcessId.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     SmpGetProcessPartition @ 0x140344590 (SmpGetProcessPartition.c)
 *     KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x14035C1DC (KiRemoveAndFreeCpuPartitionAssignmentProcess.c)
 *     ExSaFree @ 0x14035C28C (ExSaFree.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140366F48 (IoSetDiskIoAttributionOnProcess.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x14041C280 (ZwDeleteWnfStateName.c)
 *     KeBugCheck @ 0x14041E370 (KeBugCheck.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     KeUnsecureProcess @ 0x14056F898 (KeUnsecureProcess.c)
 *     SmCompressionProcessHoldsPartitionReference @ 0x1405C9B70 (SmCompressionProcessHoldsPartitionReference.c)
 *     LpcExitProcess @ 0x140688B4C (LpcExitProcess.c)
 *     PspDereferenceQuotaBlock @ 0x14069ECF4 (PspDereferenceQuotaBlock.c)
 *     PspRemoveProcessFromJobChain @ 0x1406A2DB0 (PspRemoveProcessFromJobChain.c)
 *     MmDeleteProcessAddressSpace @ 0x140705A98 (MmDeleteProcessAddressSpace.c)
 *     ExDestroyHandle @ 0x14073FFAC (ExDestroyHandle.c)
 *     ExMapHandleToPointer @ 0x140740120 (ExMapHandleToPointer.c)
 *     PspExitProcess @ 0x140751944 (PspExitProcess.c)
 *     SeDeassignPrimaryToken @ 0x1407613E4 (SeDeassignPrimaryToken.c)
 *     WbRemoveWarbirdProcess @ 0x140761414 (WbRemoveWarbirdProcess.c)
 *     ObClearProcessDeviceMap @ 0x1407B0338 (ObClearProcessDeviceMap.c)
 *     PoEnergyContextCleanup @ 0x1407B12D0 (PoEnergyContextCleanup.c)
 *     SmpKeyedStoreDeleteInitiate @ 0x1407B8730 (SmpKeyedStoreDeleteInitiate.c)
 *     ExWnfExitProcess @ 0x1407CCB58 (ExWnfExitProcess.c)
 *     EtwExitProcess @ 0x1407DF474 (EtwExitProcess.c)
 *     PspDetachProcessFromSyscallProvider @ 0x1409B4B98 (PspDetachProcessFromSyscallProvider.c)
 *     VmpProcessContextCleanup @ 0x1409DD7BC (VmpProcessContextCleanup.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PspProcessDelete(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v1; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  HANDLE ProcessId; // rax
  _QWORD *v10; // rax
  bool v11; // zf
  void *v12; // rcx
  int v13; // edi
  __int64 ProcessPartition; // rax
  __int64 v15; // rcx
  int v16; // r8d
  __int128 *v17; // r9
  __int64 v18; // r8
  int v19; // r10d
  char v20; // di
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // r11
  const char *v26; // rax
  unsigned int v27; // r10d
  unsigned __int64 v28; // rcx
  __int64 v29; // r9
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int128 *v32; // r10
  __int64 v33; // rax
  int v34; // r9d
  __int64 v35; // rax
  volatile signed __int32 *v36; // rcx
  __int64 v37; // rcx
  void *v38; // rcx
  struct _KEVENT *v39; // rdx
  $115DCDF994C6370D29323EAB0E0C9502 v40; // [rsp+30h] [rbp-68h] BYREF

  *(_DWORD *)(BugCheckParameter2 + 1124) &= ~0x4000000u;
  v1 = (_QWORD *)(BugCheckParameter2 + 1096);
  memset(&v40, 0, sizeof(v40));
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter2 + 1096) )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
    v4 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v5 = (_QWORD *)v1[1], (_QWORD *)*v5 != v1) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
  }
  v6 = *(void **)(BugCheckParameter2 + 1472);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(BugCheckParameter2 + 1472) = 0LL;
  }
  ObClearProcessDeviceMap(BugCheckParameter2);
  if ( *(_QWORD *)(BugCheckParameter2 + 2464) )
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)(BugCheckParameter2 + 2464));
  v7 = *(void **)(BugCheckParameter2 + 1400);
  if ( v7 )
  {
    ObfDereferenceObject(v7);
    *(_QWORD *)(BugCheckParameter2 + 1400) = 0LL;
  }
  v8 = *(_QWORD *)(BugCheckParameter2 + 1200);
  if ( v8 )
  {
    ObfDereferenceObject((PVOID)(v8 & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(BugCheckParameter2 + 1200) = 0LL;
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 2896) )
    PspDetachProcessFromSyscallProvider(BugCheckParameter2);
  ProcessId = PsGetProcessId((PEPROCESS)BugCheckParameter2);
  WbRemoveWarbirdProcess((__int64)ProcessId);
  if ( _bittest((const signed __int32 *)(BugCheckParameter2 + 1124), 0x12u) )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter2, 0, (__int64)&v40);
    if ( (*(_DWORD *)(BugCheckParameter2 + 1120) & 0x400) != 0 )
      (*((void (__fastcall **)(ULONG_PTR))&xmmword_140C38170 + 1))(BugCheckParameter2);
    PspExitProcess(0, BugCheckParameter2);
    KiUnstackDetachProcess(&v40);
    MmDeleteProcessAddressSpace(BugCheckParameter2);
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 1296) )
  {
    PspRemoveProcessFromJobChain((PEPROCESS)BugCheckParameter2, 0LL, 1u, 0);
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(BugCheckParameter2 + 1296), 0x73507350u);
    *(_QWORD *)(BugCheckParameter2 + 1296) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 1256) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 2160) = MmBadPointer;
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 992) )
    KeUnsecureProcess(BugCheckParameter2);
  if ( *(_QWORD *)(BugCheckParameter2 + 1088) )
  {
    --CurrentThread->SpecialApcDisable;
    v10 = (_QWORD *)ExMapHandleToPointer((unsigned int *)PspCidTable, *(_QWORD *)(BugCheckParameter2 + 1088));
    if ( !v10 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter2 + 1088), v10);
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 1208) )
    SeDeassignPrimaryToken(BugCheckParameter2);
  v12 = *(void **)(BugCheckParameter2 + 1328);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)BugCheckParameter2, 24616LL);
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 2520) )
  {
    v13 = 0;
    if ( (*(_DWORD *)(BugCheckParameter2 + 2172) & 0x40000000) == 0
      || SmCompressionProcessHoldsPartitionReference(BugCheckParameter2) )
    {
      v13 = 1;
    }
    if ( _bittest((const signed __int32 *)(BugCheckParameter2 + 1124), 0x12u) )
    {
      ProcessPartition = SmpGetProcessPartition(BugCheckParameter2);
      if ( v16 )
      {
        if ( !SmCompressionProcessHoldsPartitionReference(v15) )
          KeSetEvent(v39 + 84, 0, 0);
      }
      else
      {
        SmpKeyedStoreDeleteInitiate(ProcessPartition + 2072, ProcessPartition, BugCheckParameter2);
      }
    }
    if ( v13 )
      PsDereferencePartition(*(_QWORD *)(BugCheckParameter2 + 2520));
  }
  EtwExitProcess(BugCheckParameter2);
  LpcExitProcess((struct _KPROCESS *)BugCheckParameter2);
  ExWnfExitProcess(BugCheckParameter2, 1LL);
  IoSetDiskIoAttributionOnProcess(0LL, BugCheckParameter2);
  PoEnergyContextCleanup(BugCheckParameter2);
  if ( *(_QWORD *)(BugCheckParameter2 + 2288) )
  {
    VmpProcessContextCleanup();
    ExFreePoolWithTag(*(PVOID *)(BugCheckParameter2 + 2288), 0);
  }
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_140C64C90 )
  {
    v17 = &KeServiceDescriptorTable;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v18 = qword_140C64C80;
    v19 = 64;
    v20 = qword_140C64C88;
    v21 = qword_140C64C80;
    v22 = 8LL;
    do
    {
      v21 = __ROR8__(v21 - *(_QWORD *)v17, qword_140C64C88);
      v17 = (__int128 *)((char *)v17 + 8);
      v19 -= 8;
      --v22;
    }
    while ( v22 );
    for ( ; v19; --v19 )
    {
      v23 = *(unsigned __int8 *)v17;
      v17 = (__int128 *)((char *)v17 + 1);
      v21 = __ROR8__(v21 - v23, qword_140C64C88);
    }
    v11 = qword_140C64C98 == v21;
    v24 = qword_140C64C50;
    if ( !v11 && !qword_140C64C50 )
    {
      v20 = qword_140C64C88;
      v18 = qword_140C64C80;
      v24 = (unsigned int)__ROR4__(2120, 35);
      qword_140C64C50 = (unsigned int)v24;
      xmmword_140C64C58 = 0LL;
      qword_140C64C68 = 267LL;
      qword_140C64C70 = (__int64)&KeServiceDescriptorTable;
    }
    v25 = (_QWORD *)KeServiceDescriptorTable;
    v26 = (const char *)KeServiceDescriptorTable;
    v27 = 4 * xmmword_140E018D0;
    v28 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_140E018D0);
    if ( (unsigned __int64)KeServiceDescriptorTable < v28 )
    {
      do
      {
        _mm_prefetch(v26, 0);
        v26 += 64;
      }
      while ( (unsigned __int64)v26 < v28 );
    }
    v29 = v18;
    if ( v27 >= 8 )
    {
      v30 = (unsigned __int64)v27 >> 3;
      do
      {
        v29 = __ROR8__(v29 - *v25++, v20);
        v27 -= 8;
        --v30;
      }
      while ( v30 );
    }
    for ( ; v27; --v27 )
    {
      v31 = *(unsigned __int8 *)v25;
      v25 = (_QWORD *)((char *)v25 + 1);
      v29 = __ROR8__(v29 - v31, v20);
    }
    if ( qword_140C64CA0 != v29 && !v24 )
    {
      v20 = qword_140C64C88;
      v18 = qword_140C64C80;
      v24 = (unsigned int)__ROR4__(1111490560, 150);
      qword_140C64C50 = (unsigned int)v24;
      xmmword_140C64C58 = 0LL;
      qword_140C64C68 = 267LL;
      qword_140C64C70 = KeServiceDescriptorTable;
    }
    v32 = &KeServiceDescriptorTableShadow;
    _mm_prefetch((const char *)&KeServiceDescriptorTableShadow, 0);
    v33 = 4LL;
    v34 = 32;
    do
    {
      v18 = __ROR8__(v18 - *(_QWORD *)v32, v20);
      v32 = (__int128 *)((char *)v32 + 8);
      v34 -= 8;
      --v33;
    }
    while ( v33 );
    for ( ; v34; --v34 )
    {
      v35 = *(unsigned __int8 *)v32;
      v32 = (__int128 *)((char *)v32 + 1);
      v18 = __ROR8__(v18 - v35, v20);
    }
    if ( qword_140C64CA8 != v18 && !v24 )
    {
      qword_140C64C68 = 267LL;
      v24 = (unsigned int)__ROR4__(603979780, 186);
      qword_140C64C50 = (unsigned int)v24;
      xmmword_140C64C58 = 0LL;
      qword_140C64C70 = (__int64)&KeServiceDescriptorTableShadow;
    }
    if ( (_QWORD)KeServiceDescriptorTableShadow != (_QWORD)KeServiceDescriptorTable
      || (_DWORD)xmmword_140D1F150 != (_DWORD)xmmword_140E018D0 )
    {
      if ( v24 )
        goto LABEL_63;
      v24 = (unsigned int)__ROR4__(4240, 68);
      qword_140C64C50 = (unsigned int)v24;
      xmmword_140C64C58 = 0LL;
      qword_140C64C68 = 267LL;
      qword_140C64C70 = KeServiceDescriptorTableShadow;
    }
    if ( !v24 )
    {
LABEL_68:
      qword_140C64C90 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      goto LABEL_69;
    }
LABEL_63:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, ULONG_PTR *, PVOID, PVOID))stru_140C64C10.DeferredRoutine != KiSchedulerDpc )
      KeInitializeDpc(&stru_140C64C10, (PKDEFERRED_ROUTINE)KiSchedulerDpc, &stru_140C64C10);
    qword_140C64C78 = 1845792LL;
    KeInsertQueueDpc(&stru_140C64C10, 0LL, 0LL);
    goto LABEL_68;
  }
LABEL_69:
  v36 = *(volatile signed __int32 **)(BugCheckParameter2 + 1384);
  if ( v36 )
  {
    _InterlockedAdd(v36 + 129, 0xFFFFFFFF);
    PspDereferenceQuotaBlock(v36);
  }
  v37 = *(_QWORD *)(BugCheckParameter2 + 1024);
  if ( v37 )
    ExSaFree(v37);
  KiRemoveAndFreeCpuPartitionAssignmentProcess(BugCheckParameter2);
  v38 = *(void **)(BugCheckParameter2 + 1408);
  if ( v38 )
  {
    ExFreePoolWithTag(v38, 0);
    *(_QWORD *)(BugCheckParameter2 + 1408) = 0LL;
  }
}
