/*
 * XREFs of TcglibEalExecuteCommandSync @ 0x1C005515C
 * Callers:
 *     TcglibStackReset @ 0x1C007A710 (TcglibStackReset.c)
 *     TcglibpExecuteCommand @ 0x1C007C91C (TcglibpExecuteCommand.c)
 *     TcglibpGetCapabilities @ 0x1C007D1E8 (TcglibpGetCapabilities.c)
 *     TcglibpGetProtocolList @ 0x1C007D704 (TcglibpGetProtocolList.c)
 * Callees:
 *     RaidZeroXrb @ 0x1C0004AA4 (RaidZeroXrb.c)
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
 *     RaSendIrpSynchronous @ 0x1C0017514 (RaSendIrpSynchronous.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C001EED0 (StorBuildSynchronousScsiRequest.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C001F014 (StorFreeSynchronousScsiRequest.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C001F060 (PortSrbTranslateSrbToNtStatus.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0036AF8 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 */

__int64 __fastcall TcglibEalExecuteCommandSync(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // r13
  IRP *v6; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rbp
  void *v10; // r12
  IRP *v11; // rax
  int Status; // ebx
  __int64 v13; // r8
  __int64 ContiguousIoResources; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  ULONG v18; // eax
  _IO_STATUS_BLOCK v20; // [rsp+30h] [rbp-38h] BYREF
  ULONG v21; // [rsp+80h] [rbp+18h]

  v4 = a1;
  v20 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( *(_DWORD *)a1 == 1431193940 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    v8 = a1;
  }
  else if ( *(_DWORD *)a1 != 1094997074 )
  {
    return (unsigned int)-1073741637;
  }
  if ( !EnableNativeTcg )
    return (unsigned int)-1073741637;
  *(_BYTE *)(a2 + 3) = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v7 = a2;
    v10 = *(void **)(a2 + 64);
    v21 = *(_DWORD *)(a2 + 60);
    *(_BYTE *)(*(unsigned int *)(a2 + 120) + a2 + 8) = 0;
  }
  else
  {
    v10 = *(void **)(a2 + 24);
    v21 = *(_DWORD *)(a2 + 16);
  }
  if ( v8 )
  {
    v11 = StorBuildSynchronousScsiRequest(*(_QWORD *)(v8 + 8), a2, a3, &v20);
    v6 = v11;
    if ( !v11 )
      return (unsigned int)-1073741801;
    Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(v8 + 8), v11);
    if ( Status >= 0 )
    {
      Status = v6->IoStatus.Status;
      if ( Status >= 0 )
        Status = PortSrbTranslateSrbToNtStatus(*(_BYTE *)(a2 + 3));
    }
  }
  else
  {
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              ((*(_DWORD *)(v4 + 484) + 7) & 0xFFFFFFF8) + 1104,
                              0LL,
                              v4);
    v5 = ContiguousIoResources;
    if ( !ContiguousIoResources )
      return (unsigned int)-1073741801;
    v9 = ContiguousIoResources + 48;
    RaidZeroXrb(ContiguousIoResources + 48, v15, 0, 0LL);
    *(_QWORD *)(v9 + 176) = 0LL;
    *(_QWORD *)(v9 + 168) = a2;
    *(_QWORD *)(v9 + 184) = v10;
    Status = RaidBuildMdlForXrb(v9, v10, v21);
    if ( Status < 0 )
    {
LABEL_39:
      RaidXrbDeallocateResources(v9, 0, v13);
      StorFreeContiguousIoResources(v4, v5);
      return (unsigned int)Status;
    }
    if ( v7 )
      *(_QWORD *)(v7 + 96) = v9;
    else
      *(_QWORD *)(a2 + 48) = v9;
    RaSrbSetMiniportContext(v4, a2, v5 + 1104);
    KeInitializeEvent((PRKEVENT)(v9 + 664), NotificationEvent, 0);
    *(_QWORD *)(v9 + 656) = RaidXrbSignalCompletion;
    if ( *(_QWORD *)(v4 + 4896) )
      RaidAdapterPoFxActivateComponent(v4, 0LL, 1LL);
    if ( *(_BYTE *)(v4 + 4306) )
      v17 = RaidAdapterRaiseIrqlAndExecuteXrb(v4, v9);
    else
      v17 = RaidAdapterExecuteXrb(v4, (_QWORD *)v9, v16);
    Status = v17;
    if ( v17 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(v9 + 664), Executive, 0, 0, 0LL);
      Status = RaidSrbStatusToNtStatus(*(_BYTE *)(a2 + 3));
    }
    if ( *(_QWORD *)(v4 + 4896) )
    {
      if ( (*(_BYTE *)(v9 + 17) & 1) != 0 )
      {
        RaidAdapterPoFxIdleComponentFromMiniport(v4, *(unsigned int *)(v9 + 748));
        *(_BYTE *)(v9 + 17) &= ~1u;
      }
      RaidAdapterPoFxIdleComponent(v4, 0LL, 0LL);
    }
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v18 = *(_DWORD *)(v7 + 60);
    *(_QWORD *)(v7 + 64) = v10;
  }
  else
  {
    v18 = *(_DWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 24) = v10;
  }
  if ( Status == -2147483643 && v18 <= v21 )
    Status = 0;
  if ( v6 )
    StorFreeSynchronousScsiRequest(v6);
  if ( v5 )
    goto LABEL_39;
  return (unsigned int)Status;
}
