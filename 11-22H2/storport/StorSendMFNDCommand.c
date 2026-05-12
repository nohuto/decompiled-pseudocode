/*
 * XREFs of StorSendMFNDCommand @ 0x1C00ADDB0
 * Callers:
 *     StorQueryAndUpdateCachedMFNDOperationInfo @ 0x1C003E708 (StorQueryAndUpdateCachedMFNDOperationInfo.c)
 *     StorSetMFNDOperationPrivilege @ 0x1C0077910 (StorSetMFNDOperationPrivilege.c)
 *     StorGetMFNDCapabilities @ 0x1C00ABD64 (StorGetMFNDCapabilities.c)
 *     StorMFNDChildPFControl @ 0x1C00ABED0 (StorMFNDChildPFControl.c)
 *     StorMFNDNSPageMapControl @ 0x1C00AC01C (StorMFNDNSPageMapControl.c)
 *     StorMFNDNameSpaceReadWrite @ 0x1C00AC15C (StorMFNDNameSpaceReadWrite.c)
 *     StorQueryMFNDChildPFCommandPermission @ 0x1C00AC5DC (StorQueryMFNDChildPFCommandPermission.c)
 *     StorQueryMFNDChildPFGlobalProperty @ 0x1C00AC84C (StorQueryMFNDChildPFGlobalProperty.c)
 *     StorQueryMFNDChildPFList @ 0x1C00ACA10 (StorQueryMFNDChildPFList.c)
 *     StorQueryMFNDChildPFQueuesState @ 0x1C00ACE44 (StorQueryMFNDChildPFQueuesState.c)
 *     StorQueryMFNDChildPFSettings @ 0x1C00AD1F0 (StorQueryMFNDChildPFSettings.c)
 *     StorQueryMFNDMigrationQoS @ 0x1C00AD4EC (StorQueryMFNDMigrationQoS.c)
 *     StorQueryMFNDNamespacePageMap @ 0x1C00AD6CC (StorQueryMFNDNamespacePageMap.c)
 *     StorQueryMFNDOperationInfo @ 0x1C00AD9FC (StorQueryMFNDOperationInfo.c)
 *     StorResetMFND @ 0x1C00ADB84 (StorResetMFND.c)
 *     StorRetrieveMFNDChildPFGlobalProperty @ 0x1C00ADC78 (StorRetrieveMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFCommandPermission @ 0x1C00AE250 (StorSetMFNDChildPFCommandPermission.c)
 *     StorSetMFNDChildPFGlobalProperty @ 0x1C00AE45C (StorSetMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFQoS @ 0x1C00AE654 (StorSetMFNDChildPFQoS.c)
 *     StorSetMFNDChildPFQueuesState @ 0x1C00AE8C4 (StorSetMFNDChildPFQueuesState.c)
 *     StorSetMFNDChildPFSettings @ 0x1C00AEBEC (StorSetMFNDChildPFSettings.c)
 *     StorSetMFNDMigrationQoS @ 0x1C00AEEC0 (StorSetMFNDMigrationQoS.c)
 *     StorSetMFNDOperationInfo @ 0x1C00AF0EC (StorSetMFNDOperationInfo.c)
 * Callees:
 *     RaidZeroXrb @ 0x1C0004AA4 (RaidZeroXrb.c)
 *     RaidAllocateSrb @ 0x1C00079E4 (RaidAllocateSrb.c)
 *     StorAllocateContiguousIoResources @ 0x1C000826C (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C000832C (StorFreeContiguousIoResources.c)
 *     RaidBuildMdlForXrb @ 0x1C0008358 (RaidBuildMdlForXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00083B8 (RaidSrbStatusToNtStatus.c)
 *     RaSrbSetMiniportContext @ 0x1C0008664 (RaSrbSetMiniportContext.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00089A8 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C00089E4 (RaidAdapterPoFxActivateComponent.c)
 *     RaidXrbDeallocateResources @ 0x1C0008A38 (RaidXrbDeallocateResources.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0008BAC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0008C08 (RaidAdapterExecuteXrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C000F794 (RaidXrbSetCompletionRoutine.c)
 *     RaidPauseAdapterQueue @ 0x1C0019048 (RaidPauseAdapterQueue.c)
 *     RaidFreeSrb @ 0x1C0019DD4 (RaidFreeSrb.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0036AF8 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003D540 (RaidResumeAndRestartAdapterQueues.c)
 *     StorSetIoGatewayEmptyEvent @ 0x1C00666B4 (StorSetIoGatewayEmptyEvent.c)
 */

__int64 __fastcall StorSendMFNDCommand(
        __int64 a1,
        void *a2,
        __int64 a3,
        ULONG a4,
        _OWORD *a5,
        __int64 a6,
        char a7,
        char a8,
        unsigned int a9,
        _DWORD *a10,
        _DWORD *a11)
{
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 Srb; // r14
  __int64 v19; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rbx
  int v24; // ebp
  int v25; // r10d
  unsigned int v26; // eax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  int v31; // eax
  KIRQL v32; // bl
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-60h] BYREF
  __int64 v35; // [rsp+A0h] [rbp+8h]

  v12 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v13 = 0LL;
  v14 = *(_QWORD *)(a1 + 568);
  v15 = 0LL;
  v16 = a1 + 344;
  if ( (*(_DWORD *)(v14 + 184) & 0x4000) == 0 || !v16 || *(_BYTE *)(v16 + 98) != 1 )
    return 3221225659LL;
  if ( ((a7 & 1) != 0 || (a7 & 2) != 0) && (!a2 || !a4) )
    return 3221225485LL;
  v17 = (*(_DWORD *)(a1 + 484) + 7) & 0xFFFFFFF8;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0xAu, 1, 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v17 + 1104, v19, a1);
  v35 = ContiguousIoResources;
  v23 = ContiguousIoResources;
  if ( Srb && ContiguousIoResources )
  {
    v13 = ContiguousIoResources + 48;
    RaidZeroXrb(ContiguousIoResources + 48, v21, 0, 0LL);
    if ( (a7 & 1) != 0 || (a7 & 2) != 0 )
    {
      if ( a3 )
      {
        *(_BYTE *)(v13 + 16) &= ~1u;
        *(_QWORD *)(v13 + 104) = a3;
      }
      else
      {
        v24 = RaidBuildMdlForXrb(v13, a2, a4);
        if ( v24 < 0 )
          goto LABEL_30;
      }
    }
    if ( !a8 )
    {
      if ( *(_BYTE *)(Srb + 2) == 40 )
        *(_WORD *)(Srb + 38) = 32;
      else
        *(_BYTE *)(Srb + 9) = 32;
    }
    RaSrbSetMiniportContext(a1, Srb, v35 + 1104);
    if ( a8 )
      *(_BYTE *)(v13 + 17) |= 8u;
    if ( *(_BYTE *)(a1 + 442) == 1 )
    {
      v12 = Srb;
      v15 = Srb + *(unsigned int *)(Srb + 120);
      *(_QWORD *)(Srb + 64) = a2;
      *(_DWORD *)(Srb + 60) = a4;
      *(_DWORD *)(Srb + 20) = 10;
      *(_DWORD *)(Srb + 24) = v25;
      *(_BYTE *)(Srb + 3) = 0;
      *(_DWORD *)(Srb + 32) = 255;
      v26 = *(_DWORD *)(a1 + 4060);
      *(_QWORD *)(Srb + 96) = v13;
      if ( a9 > v26 )
        v26 = a9;
      *(_DWORD *)(Srb + 40) = v26;
      *(_QWORD *)(v13 + 168) = Srb;
      *(_QWORD *)(v13 + 184) = *(_QWORD *)(Srb + 64);
      *(_QWORD *)(v13 + 176) = *(_QWORD *)(Srb + 96);
      *(_BYTE *)(v15 + 73) = a7;
      *(_DWORD *)v15 = 67;
      *(_DWORD *)(v15 + 4) = 80;
      *(_BYTE *)(v15 + 72) = 1;
      v27 = a5[1];
      *(_OWORD *)(v15 + 8) = *a5;
      v28 = a5[2];
      *(_OWORD *)(v15 + 24) = v27;
      v29 = a5[3];
      *(_OWORD *)(v15 + 40) = v28;
      *(_OWORD *)(v15 + 56) = v29;
    }
    KeInitializeEvent((PRKEVENT)(v13 + 664), NotificationEvent, 0);
    RaidXrbSetCompletionRoutine(v13, (__int64)RaidXrbSignalCompletion);
    if ( a8
      && (RaidPauseAdapterQueue(a1),
          KeInitializeEvent(&Event, NotificationEvent, 0),
          StorSetIoGatewayEmptyEvent(*(_QWORD *)(a1 + 896), &Event),
          Timeout.QuadPart = -1200000000LL,
          KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout)) )
    {
      v24 = -1073741823;
    }
    else
    {
      if ( *(_QWORD *)(a1 + 4896) )
        RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
      if ( *(_BYTE *)(a1 + 4306) )
        v31 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v13);
      else
        v31 = RaidAdapterExecuteXrb(a1, (_QWORD *)v13, v22);
      v24 = v31;
      if ( v31 >= 0 )
      {
        KeWaitForSingleObject((PVOID)(v13 + 664), Executive, 0, 0, 0LL);
        v24 = RaidSrbStatusToNtStatus(*(_BYTE *)(Srb + 3));
      }
      if ( a8 )
      {
        v32 = KfRaiseIrql(2u);
        RaidResumeAndRestartAdapterQueues(a1);
        KeLowerIrql(v32);
      }
      if ( (*(_BYTE *)(v13 + 17) & 1) != 0 )
      {
        RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v13 + 748));
        *(_BYTE *)(v13 + 17) &= ~1u;
      }
      if ( *(_QWORD *)(a1 + 4896) )
        RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
      if ( v24 >= 0 && a10 )
      {
        v23 = v35;
        if ( v15 )
          *a10 = *(_DWORD *)(v15 + 84);
        goto LABEL_30;
      }
    }
    v23 = v35;
  }
  else
  {
    v24 = -1073741801;
  }
LABEL_30:
  if ( a11 && v15 )
    *a11 = *(unsigned __int16 *)(v15 + 74);
  if ( v23 )
  {
    RaidXrbDeallocateResources(v13, 0, v22);
    StorFreeContiguousIoResources(a1, v23);
  }
  if ( Srb )
  {
    if ( (*(_BYTE *)(a1 + 442) & 1) != 0 )
    {
      if ( !v12 )
        v12 = Srb;
      *(_QWORD *)(v12 + 80) = 0LL;
      *(_QWORD *)(v12 + 104) = 0LL;
    }
    RaidFreeSrb((void *)Srb);
  }
  return (unsigned int)v24;
}
