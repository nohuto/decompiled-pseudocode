/*
 * XREFs of PspProcessDelete @ 0x1407610B0
 * Callers:
 *     <none>
 * Callees:
 *     PspUnlockProcessListExclusive @ 0x1402268E4 (PspUnlockProcessListExclusive.c)
 *     KiStackAttachProcess @ 0x14022D600 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9C0 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x140254770 (KeInsertQueueDpc.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14028B330 (PsReturnProcessNonPagedPoolQuota.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8CE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeInitializeDpc @ 0x1402BF9A0 (KeInitializeDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E7464 (KiQueryUnbiasedInterruptTime.c)
 *     PsDereferencePartition @ 0x1402F9C4C (PsDereferencePartition.c)
 *     PsGetProcessId @ 0x1402FA490 (PsGetProcessId.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F820 (KiCheckForKernelApcDelivery.c)
 *     SmpGetProcessPartition @ 0x140344A80 (SmpGetProcessPartition.c)
 *     KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x14035C82C (KiRemoveAndFreeCpuPartitionAssignmentProcess.c)
 *     ExSaFree @ 0x14035C8DC (ExSaFree.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140367598 (IoSetDiskIoAttributionOnProcess.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x14041C940 (ZwDeleteWnfStateName.c)
 *     KeBugCheck @ 0x14041EA30 (KeBugCheck.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     KeUnsecureProcess @ 0x14056F7F8 (KeUnsecureProcess.c)
 *     SmCompressionProcessHoldsPartitionReference @ 0x1405C9AE0 (SmCompressionProcessHoldsPartitionReference.c)
 *     LpcExitProcess @ 0x140688B4C (LpcExitProcess.c)
 *     PspDereferenceQuotaBlock @ 0x14069ECF4 (PspDereferenceQuotaBlock.c)
 *     PspRemoveProcessFromJobChain @ 0x1406A2DB0 (PspRemoveProcessFromJobChain.c)
 *     MmDeleteProcessAddressSpace @ 0x1407059E8 (MmDeleteProcessAddressSpace.c)
 *     ExDestroyHandle @ 0x14073FA9C (ExDestroyHandle.c)
 *     ExMapHandleToPointer @ 0x14073FC10 (ExMapHandleToPointer.c)
 *     PspExitProcess @ 0x140751434 (PspExitProcess.c)
 *     SeDeassignPrimaryToken @ 0x140760ED4 (SeDeassignPrimaryToken.c)
 *     WbRemoveWarbirdProcess @ 0x140760F04 (WbRemoveWarbirdProcess.c)
 *     ObClearProcessDeviceMap @ 0x1407AFD88 (ObClearProcessDeviceMap.c)
 *     PoEnergyContextCleanup @ 0x1407B0D20 (PoEnergyContextCleanup.c)
 *     SmpKeyedStoreDeleteInitiate @ 0x1407B8180 (SmpKeyedStoreDeleteInitiate.c)
 *     ExWnfExitProcess @ 0x1407CC5C8 (ExWnfExitProcess.c)
 *     EtwExitProcess @ 0x1407DEEF4 (EtwExitProcess.c)
 *     PspDetachProcessFromSyscallProvider @ 0x1409B4AE8 (PspDetachProcessFromSyscallProvider.c)
 *     VmpProcessContextCleanup @ 0x1409DD70C (VmpProcessContextCleanup.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PspProcessDelete(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v1; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  void *v6; // rcx
  __int64 v7; // rdx
  void *v8; // rcx
  __int64 v9; // rcx
  HANDLE ProcessId; // rax
  _QWORD *v11; // rax
  bool v12; // zf
  void *v13; // rcx
  int v14; // edi
  __int64 ProcessPartition; // rax
  __int64 v16; // rcx
  int v17; // r8d
  __int128 *v18; // r9
  __int64 v19; // r8
  int v20; // r10d
  char v21; // di
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // r11
  const char *v27; // rax
  unsigned int v28; // r10d
  unsigned __int64 v29; // rcx
  __int64 v30; // r9
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  __int128 *v33; // r10
  __int64 v34; // rax
  int v35; // r9d
  __int64 v36; // rax
  volatile signed __int32 *v37; // rcx
  __int64 v38; // rcx
  void *v39; // rcx
  struct _KEVENT *v40; // rdx
  $115DCDF994C6370D29323EAB0E0C9502 v41; // [rsp+30h] [rbp-68h] BYREF

  *(_DWORD *)(BugCheckParameter2 + 1124) &= ~0x4000000u;
  v1 = (_QWORD *)(BugCheckParameter2 + 1096);
  memset(&v41, 0, sizeof(v41));
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
    ZwDeleteWnfStateName(BugCheckParameter2 + 2464, v7);
  v8 = *(void **)(BugCheckParameter2 + 1400);
  if ( v8 )
  {
    ObfDereferenceObject(v8);
    *(_QWORD *)(BugCheckParameter2 + 1400) = 0LL;
  }
  v9 = *(_QWORD *)(BugCheckParameter2 + 1200);
  if ( v9 )
  {
    ObfDereferenceObject((PVOID)(v9 & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(BugCheckParameter2 + 1200) = 0LL;
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 2896) )
    PspDetachProcessFromSyscallProvider(BugCheckParameter2);
  ProcessId = PsGetProcessId((PEPROCESS)BugCheckParameter2);
  WbRemoveWarbirdProcess((__int64)ProcessId);
  if ( _bittest((const signed __int32 *)(BugCheckParameter2 + 1124), 0x12u) )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter2, 0, (__int64)&v41);
    if ( (*(_DWORD *)(BugCheckParameter2 + 1120) & 0x400) != 0 )
      (*((void (__fastcall **)(ULONG_PTR))&xmmword_140C38150 + 1))(BugCheckParameter2);
    PspExitProcess(0, BugCheckParameter2);
    KiUnstackDetachProcess(&v41);
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
    v11 = (_QWORD *)ExMapHandleToPointer((unsigned int *)PspCidTable, *(_QWORD *)(BugCheckParameter2 + 1088));
    if ( !v11 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter2 + 1088), v11);
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 1208) )
    SeDeassignPrimaryToken(BugCheckParameter2);
  v13 = *(void **)(BugCheckParameter2 + 1328);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)BugCheckParameter2, 24616LL);
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 2520) )
  {
    v14 = 0;
    if ( (*(_DWORD *)(BugCheckParameter2 + 2172) & 0x40000000) == 0
      || SmCompressionProcessHoldsPartitionReference(BugCheckParameter2) )
    {
      v14 = 1;
    }
    if ( _bittest((const signed __int32 *)(BugCheckParameter2 + 1124), 0x12u) )
    {
      ProcessPartition = SmpGetProcessPartition(BugCheckParameter2);
      if ( v17 )
      {
        if ( !SmCompressionProcessHoldsPartitionReference(v16) )
          KeSetEvent(v40 + 84, 0, 0);
      }
      else
      {
        SmpKeyedStoreDeleteInitiate(ProcessPartition + 2072, ProcessPartition, BugCheckParameter2);
      }
    }
    if ( v14 )
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
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_140C64BB0 )
  {
    v18 = &KeServiceDescriptorTable;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v19 = qword_140C64BA0;
    v20 = 64;
    v21 = qword_140C64BA8;
    v22 = qword_140C64BA0;
    v23 = 8LL;
    do
    {
      v22 = __ROR8__(v22 - *(_QWORD *)v18, qword_140C64BA8);
      v18 = (__int128 *)((char *)v18 + 8);
      v20 -= 8;
      --v23;
    }
    while ( v23 );
    for ( ; v20; --v20 )
    {
      v24 = *(unsigned __int8 *)v18;
      v18 = (__int128 *)((char *)v18 + 1);
      v22 = __ROR8__(v22 - v24, qword_140C64BA8);
    }
    v12 = qword_140C64BB8 == v22;
    v25 = qword_140C64B70;
    if ( !v12 && !qword_140C64B70 )
    {
      v21 = qword_140C64BA8;
      v19 = qword_140C64BA0;
      v25 = (unsigned int)__ROR4__(2120, 35);
      qword_140C64B70 = (unsigned int)v25;
      xmmword_140C64B78 = 0LL;
      qword_140C64B88 = 267LL;
      qword_140C64B90 = (__int64)&KeServiceDescriptorTable;
    }
    v26 = (_QWORD *)KeServiceDescriptorTable;
    v27 = (const char *)KeServiceDescriptorTable;
    v28 = 4 * xmmword_140E018D0;
    v29 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_140E018D0);
    if ( (unsigned __int64)KeServiceDescriptorTable < v29 )
    {
      do
      {
        _mm_prefetch(v27, 0);
        v27 += 64;
      }
      while ( (unsigned __int64)v27 < v29 );
    }
    v30 = v19;
    if ( v28 >= 8 )
    {
      v31 = (unsigned __int64)v28 >> 3;
      do
      {
        v30 = __ROR8__(v30 - *v26++, v21);
        v28 -= 8;
        --v31;
      }
      while ( v31 );
    }
    for ( ; v28; --v28 )
    {
      v32 = *(unsigned __int8 *)v26;
      v26 = (_QWORD *)((char *)v26 + 1);
      v30 = __ROR8__(v30 - v32, v21);
    }
    if ( qword_140C64BC0 != v30 && !v25 )
    {
      v21 = qword_140C64BA8;
      v19 = qword_140C64BA0;
      v25 = (unsigned int)__ROR4__(1111490560, 150);
      qword_140C64B70 = (unsigned int)v25;
      xmmword_140C64B78 = 0LL;
      qword_140C64B88 = 267LL;
      qword_140C64B90 = KeServiceDescriptorTable;
    }
    v33 = &KeServiceDescriptorTableShadow;
    _mm_prefetch((const char *)&KeServiceDescriptorTableShadow, 0);
    v34 = 4LL;
    v35 = 32;
    do
    {
      v19 = __ROR8__(v19 - *(_QWORD *)v33, v21);
      v33 = (__int128 *)((char *)v33 + 8);
      v35 -= 8;
      --v34;
    }
    while ( v34 );
    for ( ; v35; --v35 )
    {
      v36 = *(unsigned __int8 *)v33;
      v33 = (__int128 *)((char *)v33 + 1);
      v19 = __ROR8__(v19 - v36, v21);
    }
    if ( qword_140C64BC8 != v19 && !v25 )
    {
      qword_140C64B88 = 267LL;
      v25 = (unsigned int)__ROR4__(603979780, 186);
      qword_140C64B70 = (unsigned int)v25;
      xmmword_140C64B78 = 0LL;
      qword_140C64B90 = (__int64)&KeServiceDescriptorTableShadow;
    }
    if ( (_QWORD)KeServiceDescriptorTableShadow != (_QWORD)KeServiceDescriptorTable
      || (_DWORD)xmmword_140D1F150 != (_DWORD)xmmword_140E018D0 )
    {
      if ( v25 )
        goto LABEL_63;
      v25 = (unsigned int)__ROR4__(4240, 68);
      qword_140C64B70 = (unsigned int)v25;
      xmmword_140C64B78 = 0LL;
      qword_140C64B88 = 267LL;
      qword_140C64B90 = KeServiceDescriptorTableShadow;
    }
    if ( !v25 )
    {
LABEL_68:
      qword_140C64BB0 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      goto LABEL_69;
    }
LABEL_63:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, ULONG_PTR *, PVOID, PVOID))stru_140C64B30.DeferredRoutine != KiSchedulerDpc )
      KeInitializeDpc(&stru_140C64B30, (PKDEFERRED_ROUTINE)KiSchedulerDpc, &stru_140C64B30);
    qword_140C64B98 = 1845792LL;
    KeInsertQueueDpc(&stru_140C64B30, 0LL, 0LL);
    goto LABEL_68;
  }
LABEL_69:
  v37 = *(volatile signed __int32 **)(BugCheckParameter2 + 1384);
  if ( v37 )
  {
    _InterlockedAdd(v37 + 129, 0xFFFFFFFF);
    PspDereferenceQuotaBlock(v37);
  }
  v38 = *(_QWORD *)(BugCheckParameter2 + 1024);
  if ( v38 )
    ExSaFree(v38);
  KiRemoveAndFreeCpuPartitionAssignmentProcess(BugCheckParameter2);
  v39 = *(void **)(BugCheckParameter2 + 1408);
  if ( v39 )
  {
    ExFreePoolWithTag(v39, 0);
    *(_QWORD *)(BugCheckParameter2 + 1408) = 0LL;
  }
}
