/*
 * XREFs of RaUnitStorageDataSetManagementIoctl @ 0x1C00A1030
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidZeroXrb @ 0x1C0004AA4 (RaidZeroXrb.c)
 *     RaidAllocateSrb @ 0x1C00079E4 (RaidAllocateSrb.c)
 *     StorAllocateContiguousIoResources @ 0x1C000826C (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C000832C (StorFreeContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00083B8 (RaidSrbStatusToNtStatus.c)
 *     RaSrbSetMiniportContext @ 0x1C0008664 (RaSrbSetMiniportContext.c)
 *     RaidXrbDeallocateResources @ 0x1C0008A38 (RaidXrbDeallocateResources.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0008BAC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0008C08 (RaidAdapterExecuteXrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C000F794 (RaidXrbSetCompletionRoutine.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C0012E24 (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     RaidFreeSrb @ 0x1C0019DD4 (RaidFreeSrb.c)
 *     WPP_SF_dd @ 0x1C003E890 (WPP_SF_dd.c)
 *     WPP_SF_qq @ 0x1C003EAA4 (WPP_SF_qq.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C005D474 (RaUnitBuildDsmGeneralBufferForMiniport.c)
 */

__int64 __fastcall RaUnitStorageDataSetManagementIoctl(__int64 a1, IRP *a2)
{
  __int64 v2; // r13
  unsigned int *Srb; // rdi
  _DWORD *v4; // r14
  _IRP *MasterIrp; // rcx
  IRP *v7; // r15
  unsigned __int64 Options; // rdx
  __int64 IrpCount; // r9
  __int64 Flags; // r8
  int v11; // eax
  int v12; // ebx
  int v14; // r12d
  int v15; // eax
  __int64 v16; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // r15
  IRP *v21; // rax
  __int64 v22; // rdx
  char *v23; // rdx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // [rsp+20h] [rbp-10h]
  unsigned int v28; // [rsp+70h] [rbp+40h] BYREF
  IRP *v29; // [rsp+78h] [rbp+48h]
  _DWORD *v30; // [rsp+80h] [rbp+50h] BYREF

  v29 = a2;
  v2 = *(_QWORD *)(a1 + 24);
  Srb = 0LL;
  v28 = 0;
  v4 = 0LL;
  v30 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v7 = a2;
  if ( !MasterIrp
    || (Options = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options, (unsigned int)Options < 0x1C)
    || (IrpCount = (unsigned int)MasterIrp->AssociatedIrp.IrpCount,
        Options < IrpCount + (unsigned __int64)*(&MasterIrp->Flags + 1))
    || (Flags = MasterIrp->Flags, Options < Flags + (unsigned __int64)HIDWORD(MasterIrp->MdlAddress))
    || Options < Flags + IrpCount + 28 )
  {
    v12 = -1073741811;
    goto LABEL_12;
  }
  v11 = *(_DWORD *)(&MasterIrp->Size + 1);
  switch ( v11 )
  {
    case 1:
      goto LABEL_32;
    case -2147483646:
      v14 = 1;
      v15 = RaUnitBuildDsmNotifyBufferForMiniport(a1, (__int64)v7, (__int64 *)&v30, &v28);
      goto LABEL_17;
    case -2147483636:
LABEL_32:
      if ( !ExtendedDSMCommandsSupported )
      {
LABEL_11:
        v12 = -1073741637;
        goto LABEL_12;
      }
      break;
    case -2147483634:
    case -2147483633:
      break;
    default:
      goto LABEL_11;
  }
  v14 = 60;
  v15 = RaUnitBuildDsmGeneralBufferForMiniport(a1, (__int64)v7, (__int64 *)&v30, &v28);
LABEL_17:
  v4 = v30;
  v12 = v15;
  if ( v15 >= 0 )
  {
    v30[3] = v14;
    Srb = (unsigned int *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(v2 + 442), 0);
    if ( Srb
      && (ContiguousIoResources = StorAllocateContiguousIoResources(
                                    ((*(_DWORD *)(v2 + 484) + 7) & 0xFFFFFFF8) + 1104,
                                    v16,
                                    v2),
          v30 = (_DWORD *)ContiguousIoResources,
          (v19 = ContiguousIoResources) != 0) )
    {
      v20 = ContiguousIoResources + 48;
      RaidZeroXrb(ContiguousIoResources + 48, v18, 0, 0LL);
      v21 = v29;
      *(_QWORD *)(v20 + 176) = v29;
      *(_QWORD *)(v20 + 184) = v4;
      *(_QWORD *)(v20 + 168) = Srb;
      *(_QWORD *)(v20 + 224) = a1;
      if ( *(_BYTE *)(v2 + 442) == 1 )
      {
        v22 = Srb[13];
        *((_QWORD *)Srb + 10) = v21;
        v23 = (char *)Srb + v22;
        Srb[15] = v28;
        *((_QWORD *)Srb + 12) = v20;
        *((_QWORD *)Srb + 8) = v4;
        Srb[6] = 256;
        Srb[10] = v14;
        *((_WORD *)v23 + 1) = *(_WORD *)(*(_QWORD *)(a1 + 24) + 56LL);
        v23[8] = *(_BYTE *)(a1 + 96);
        v23[9] = *(_BYTE *)(a1 + 97);
        v23[10] = *(_BYTE *)(a1 + 98);
      }
      else
      {
        Srb[4] = v28;
        *(_WORD *)Srb = 88;
        *((_QWORD *)Srb + 6) = v20;
        *((_BYTE *)Srb + 2) = 2;
        *((_QWORD *)Srb + 3) = v4;
        Srb[3] = 256;
        Srb[5] = v14;
        *((_BYTE *)Srb + 5) = *(_BYTE *)(a1 + 96);
        *((_BYTE *)Srb + 6) = *(_BYTE *)(a1 + 97);
        *((_BYTE *)Srb + 7) = *(_BYTE *)(a1 + 98);
      }
      RaSrbSetMiniportContext(v2, (__int64)Srb, v19 + 1104);
      KeInitializeEvent((PRKEVENT)(v20 + 664), NotificationEvent, 0);
      RaidXrbSetCompletionRoutine(v20, (__int64)RaidXrbSignalCompletion);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        WPP_SF_qq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x24u,
          (__int64)&WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids,
          v20,
          Srb);
      }
      if ( *(_BYTE *)(v2 + 4306) )
        v25 = RaidAdapterRaiseIrqlAndExecuteXrb(v2, v20);
      else
        v25 = RaidAdapterExecuteXrb(v2, (_QWORD *)v20, v24);
      v12 = v25;
      if ( v25 >= 0 )
      {
        KeWaitForSingleObject((PVOID)(v20 + 664), Executive, 0, 0, 0LL);
        if ( !ExtendedDSMCommandsSupported || (v12 = v4[5], v12 >= 0) )
          v12 = RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        LODWORD(v27) = *((unsigned __int8 *)Srb + 3);
        WPP_SF_dd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x25u,
          (__int64)&WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids,
          v12,
          v27);
      }
      RaidXrbDeallocateResources(v20, 0, v26);
      StorFreeContiguousIoResources(v2, (__int64)v30);
      v7 = v29;
    }
    else
    {
      v12 = -1073741670;
    }
  }
LABEL_12:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72536152u);
  if ( Srb )
  {
    if ( *(_BYTE *)(v2 + 442) == 1 )
    {
      *((_QWORD *)Srb + 10) = 0LL;
      *((_QWORD *)Srb + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    RaidFreeSrb(Srb);
  }
  v7->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(v7, 0, v12);
}
