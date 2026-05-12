/*
 * XREFs of RaUnitStorageDataSetManagementIoctl @ 0x1C0086F64
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B054 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0004004 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0004060 (RaidAdapterExecuteXrb.c)
 *     RaidZeroXrb @ 0x1C0006D50 (RaidZeroXrb.c)
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidXrbDeallocateResources @ 0x1C000BDD4 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000C148 (RaidSrbStatusToNtStatus.c)
 *     RaidAllocateSrb @ 0x1C000F74C (RaidAllocateSrb.c)
 *     StorFreeContiguousIoResources @ 0x1C000F988 (StorFreeContiguousIoResources.c)
 *     StorAllocateContiguousIoResources @ 0x1C000F9B4 (StorAllocateContiguousIoResources.c)
 *     RaSrbSetMiniportContext @ 0x1C000FFCC (RaSrbSetMiniportContext.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C001592C (RaidXrbSetCompletionRoutine.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C0017428 (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     RaidFreeSrb @ 0x1C001DC00 (RaidFreeSrb.c)
 *     WPP_SF_DD @ 0x1C003C4FC (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C003C710 (WPP_SF_qq.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C0050C60 (RaUnitBuildDsmGeneralBufferForMiniport.c)
 */

__int64 __fastcall RaUnitStorageDataSetManagementIoctl(__int64 a1, IRP *a2)
{
  __int64 v2; // r13
  unsigned int *Srb; // rbx
  _DWORD *v4; // r14
  _IRP *MasterIrp; // rcx
  IRP *v7; // r15
  unsigned __int64 Options; // rdx
  __int64 IrpCount; // r9
  __int64 Flags; // r8
  int v11; // eax
  int v12; // edi
  int v14; // r12d
  int v15; // eax
  __int64 v16; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // r15
  IRP *v21; // rax
  __int64 v22; // rdx
  char *v23; // rdx
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // [rsp+20h] [rbp-10h]
  unsigned int v27; // [rsp+70h] [rbp+40h] BYREF
  IRP *v28; // [rsp+78h] [rbp+48h]
  _DWORD *v29; // [rsp+80h] [rbp+50h] BYREF

  v28 = a2;
  v2 = *(_QWORD *)(a1 + 24);
  Srb = 0LL;
  v27 = 0;
  v4 = 0LL;
  v29 = 0LL;
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
    goto LABEL_11;
  }
  v11 = *(_DWORD *)(&MasterIrp->Size + 1);
  switch ( v11 )
  {
    case 1:
      goto LABEL_31;
    case -2147483646:
      v14 = 1;
      v15 = RaUnitBuildDsmNotifyBufferForMiniport(a1, (__int64)v7, (__int64 *)&v29, &v27);
      goto LABEL_16;
    case -2147483636:
LABEL_31:
      if ( !ExtendedDSMCommandsSupported )
        goto LABEL_10;
      break;
    default:
      if ( (unsigned int)(v11 + 2147483634) > 1 )
      {
LABEL_10:
        v12 = -1073741637;
        goto LABEL_11;
      }
      break;
  }
  v14 = 60;
  v15 = RaUnitBuildDsmGeneralBufferForMiniport(a1, (__int64)v7, (__int64 *)&v29, &v27);
LABEL_16:
  v4 = v29;
  v12 = v15;
  if ( v15 >= 0 )
  {
    v29[3] = v14;
    Srb = (unsigned int *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(v2 + 442), 0);
    if ( Srb
      && (ContiguousIoResources = StorAllocateContiguousIoResources(
                                    ((*(_DWORD *)(v2 + 484) + 7) & 0xFFFFFFF8) + 1104,
                                    v16,
                                    v2),
          v29 = (_DWORD *)ContiguousIoResources,
          (v19 = ContiguousIoResources) != 0) )
    {
      v20 = ContiguousIoResources + 48;
      RaidZeroXrb(ContiguousIoResources + 48, v18, 0, 0LL);
      v21 = v28;
      *(_QWORD *)(v20 + 176) = v28;
      *(_QWORD *)(v20 + 184) = v4;
      *(_QWORD *)(v20 + 168) = Srb;
      *(_QWORD *)(v20 + 224) = a1;
      if ( *(_BYTE *)(v2 + 442) == 1 )
      {
        v22 = Srb[13];
        *((_QWORD *)Srb + 10) = v21;
        v23 = (char *)Srb + v22;
        Srb[15] = v27;
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
        Srb[4] = v27;
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
          (__int64)&WPP_568007271afc3cdc120e483208e8f443_Traceguids,
          v20,
          Srb);
      }
      if ( *(_BYTE *)(v2 + 4242) )
        v24 = RaidAdapterRaiseIrqlAndExecuteXrb(v2, v20);
      else
        v24 = RaidAdapterExecuteXrb(v2, (_QWORD *)v20);
      v12 = v24;
      if ( v24 >= 0 )
      {
        KeWaitForSingleObject((PVOID)(v20 + 664), Executive, 0, 0, 0LL);
        if ( !ExtendedDSMCommandsSupported || (v12 = v4[5], v12 >= 0) )
          v12 = RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        LODWORD(v26) = *((unsigned __int8 *)Srb + 3);
        WPP_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x25u,
          (__int64)&WPP_568007271afc3cdc120e483208e8f443_Traceguids,
          v12,
          v26);
      }
      RaidXrbDeallocateResources(v20, 0, v25);
      StorFreeContiguousIoResources(v2, (__int64)v29);
      v7 = v28;
    }
    else
    {
      v12 = -1073741670;
    }
  }
LABEL_11:
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
