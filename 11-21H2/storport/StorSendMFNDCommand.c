/*
 * XREFs of StorSendMFNDCommand @ 0x1C0091ACC
 * Callers:
 *     StorQueryAndUpdateCachedMFNDOperationInfo @ 0x1C003C384 (StorQueryAndUpdateCachedMFNDOperationInfo.c)
 *     StorSetMFNDOperationPrivilege @ 0x1C00680FC (StorSetMFNDOperationPrivilege.c)
 *     StorGetMFNDCapabilities @ 0x1C0090A68 (StorGetMFNDCapabilities.c)
 *     StorMFNDChildPFControl @ 0x1C0090BBC (StorMFNDChildPFControl.c)
 *     StorQueryMFNDChildPFCommandPermission @ 0x1C0090E08 (StorQueryMFNDChildPFCommandPermission.c)
 *     StorQueryMFNDChildPFGlobalProperty @ 0x1C0091040 (StorQueryMFNDChildPFGlobalProperty.c)
 *     StorQueryMFNDChildPFList @ 0x1C00911EC (StorQueryMFNDChildPFList.c)
 *     StorQueryMFNDChildPFSettings @ 0x1C009159C (StorQueryMFNDChildPFSettings.c)
 *     StorQueryMFNDOperationInfo @ 0x1C0091874 (StorQueryMFNDOperationInfo.c)
 *     StorResetMFND @ 0x1C00919E0 (StorResetMFND.c)
 *     StorSetMFNDChildPFCommandPermission @ 0x1C0091F54 (StorSetMFNDChildPFCommandPermission.c)
 *     StorSetMFNDChildPFGlobalProperty @ 0x1C0092160 (StorSetMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFQoS @ 0x1C0092344 (StorSetMFNDChildPFQoS.c)
 *     StorSetMFNDChildPFSettings @ 0x1C0092584 (StorSetMFNDChildPFSettings.c)
 *     StorSetMFNDOperationInfo @ 0x1C0092810 (StorSetMFNDOperationInfo.c)
 * Callees:
 *     RaidAdapterPoFxActivateComponent @ 0x1C0002B10 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0004004 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0004060 (RaidAdapterExecuteXrb.c)
 *     RaidZeroXrb @ 0x1C0006D50 (RaidZeroXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C000BDD4 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000C148 (RaidSrbStatusToNtStatus.c)
 *     RaidAllocateSrb @ 0x1C000F74C (RaidAllocateSrb.c)
 *     StorFreeContiguousIoResources @ 0x1C000F988 (StorFreeContiguousIoResources.c)
 *     StorAllocateContiguousIoResources @ 0x1C000F9B4 (StorAllocateContiguousIoResources.c)
 *     RaSrbSetMiniportContext @ 0x1C000FFCC (RaSrbSetMiniportContext.c)
 *     RaidBuildMdlForXrb @ 0x1C0011554 (RaidBuildMdlForXrb.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00136DC (RaidAdapterPoFxIdleComponent.c)
 *     RaidPauseAdapterQueue @ 0x1C0014BF8 (RaidPauseAdapterQueue.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C001592C (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C001DC00 (RaidFreeSrb.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00358A0 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003B74C (RaidResumeAndRestartAdapterQueues.c)
 *     StorSetIoGatewayEmptyEvent @ 0x1C0059728 (StorSetIoGatewayEmptyEvent.c)
 */

__int64 __fastcall StorSendMFNDCommand(
        __int64 a1,
        void *a2,
        ULONG a3,
        _OWORD *a4,
        __int64 a5,
        char a6,
        char a7,
        unsigned int a8,
        _DWORD *a9,
        _DWORD *a10)
{
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 Srb; // r14
  __int64 v18; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rbx
  int v23; // ebp
  int v24; // r9d
  unsigned int v25; // eax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  int v30; // eax
  KIRQL v31; // bl
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-60h] BYREF
  __int64 v34; // [rsp+A0h] [rbp+8h]

  v11 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v12 = 0LL;
  v13 = *(_QWORD *)(a1 + 568);
  v14 = 0LL;
  v15 = a1 + 344;
  if ( (*(_DWORD *)(v13 + 184) & 0x4000) == 0 || !v15 || *(_BYTE *)(v15 + 98) != 1 )
    return 3221225659LL;
  if ( ((a6 & 1) != 0 || (a6 & 2) != 0) && (!a2 || !a3) )
    return 3221225485LL;
  v16 = (*(_DWORD *)(a1 + 484) + 7) & 0xFFFFFFF8;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0xAu, 1, 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v16 + 1104, v18, a1);
  v34 = ContiguousIoResources;
  v22 = ContiguousIoResources;
  if ( Srb && ContiguousIoResources )
  {
    v12 = ContiguousIoResources + 48;
    RaidZeroXrb(ContiguousIoResources + 48, v20, 0, 0LL);
    if ( (a6 & 1) == 0 && (a6 & 2) == 0 || (v23 = RaidBuildMdlForXrb(v12, a2, a3), v23 >= 0) )
    {
      if ( !a7 )
      {
        if ( *(_BYTE *)(Srb + 2) == 40 )
          *(_WORD *)(Srb + 38) = 32;
        else
          *(_BYTE *)(Srb + 9) = 32;
      }
      RaSrbSetMiniportContext(a1, Srb, v34 + 1104);
      if ( a7 )
        *(_BYTE *)(v12 + 17) |= 8u;
      if ( *(_BYTE *)(a1 + 442) == 1 )
      {
        v11 = Srb;
        v14 = Srb + *(unsigned int *)(Srb + 120);
        *(_QWORD *)(Srb + 64) = a2;
        *(_DWORD *)(Srb + 60) = a3;
        *(_DWORD *)(Srb + 20) = 10;
        *(_DWORD *)(Srb + 24) = v24;
        *(_BYTE *)(Srb + 3) = 0;
        *(_DWORD *)(Srb + 32) = 255;
        v25 = *(_DWORD *)(a1 + 3996);
        *(_QWORD *)(Srb + 96) = v12;
        if ( a8 > v25 )
          v25 = a8;
        *(_DWORD *)(Srb + 40) = v25;
        *(_QWORD *)(v12 + 168) = Srb;
        *(_QWORD *)(v12 + 184) = *(_QWORD *)(Srb + 64);
        *(_QWORD *)(v12 + 176) = *(_QWORD *)(Srb + 96);
        *(_BYTE *)(v14 + 73) = a6;
        *(_DWORD *)v14 = 67;
        *(_DWORD *)(v14 + 4) = 80;
        *(_BYTE *)(v14 + 72) = 1;
        v26 = a4[1];
        *(_OWORD *)(v14 + 8) = *a4;
        v27 = a4[2];
        *(_OWORD *)(v14 + 24) = v26;
        v28 = a4[3];
        *(_OWORD *)(v14 + 40) = v27;
        *(_OWORD *)(v14 + 56) = v28;
      }
      KeInitializeEvent((PRKEVENT)(v12 + 664), NotificationEvent, 0);
      RaidXrbSetCompletionRoutine(v12, (__int64)RaidXrbSignalCompletion);
      if ( a7
        && (RaidPauseAdapterQueue(a1),
            KeInitializeEvent(&Event, NotificationEvent, 0),
            StorSetIoGatewayEmptyEvent(*(_QWORD *)(a1 + 832), &Event),
            Timeout.QuadPart = -1200000000LL,
            KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout)) )
      {
        v23 = -1073741823;
      }
      else
      {
        if ( *(_QWORD *)(a1 + 4832) )
          RaidAdapterPoFxActivateComponent(a1);
        if ( *(_BYTE *)(a1 + 4242) )
          v30 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v12);
        else
          v30 = RaidAdapterExecuteXrb(a1, (_QWORD *)v12);
        v23 = v30;
        if ( v30 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v12 + 664), Executive, 0, 0, 0LL);
          v23 = RaidSrbStatusToNtStatus(*(_BYTE *)(Srb + 3));
        }
        if ( a7 )
        {
          v31 = KfRaiseIrql(2u);
          RaidResumeAndRestartAdapterQueues(a1);
          KeLowerIrql(v31);
        }
        if ( (*(_BYTE *)(v12 + 17) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v12 + 748));
          *(_BYTE *)(v12 + 17) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 4832) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
        if ( v23 >= 0 && a9 )
        {
          v22 = v34;
          if ( v14 )
            *a9 = *(_DWORD *)(v14 + 84);
          goto LABEL_27;
        }
      }
      v22 = v34;
    }
  }
  else
  {
    v23 = -1073741801;
  }
LABEL_27:
  if ( a10 && v14 )
    *a10 = *(unsigned __int16 *)(v14 + 74);
  if ( v22 )
  {
    RaidXrbDeallocateResources(v12, 0, v21);
    StorFreeContiguousIoResources(a1, v22);
  }
  if ( Srb )
  {
    if ( (*(_BYTE *)(a1 + 442) & 1) != 0 )
    {
      if ( !v11 )
        v11 = Srb;
      *(_QWORD *)(v11 + 80) = 0LL;
      *(_QWORD *)(v11 + 104) = 0LL;
    }
    RaidFreeSrb((void *)Srb);
  }
  return (unsigned int)v23;
}
