/*
 * XREFs of RaidAdapterDiagnosticIoctl @ 0x1C00A5C58
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidZeroXrb @ 0x1C0004AA4 (RaidZeroXrb.c)
 *     RaidAllocateSrb @ 0x1C00079E4 (RaidAllocateSrb.c)
 *     StorAllocateContiguousIoResources @ 0x1C000826C (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C000832C (StorFreeContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00083B8 (RaidSrbStatusToNtStatus.c)
 *     RaSrbSetMiniportContext @ 0x1C0008664 (RaSrbSetMiniportContext.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00089A8 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C00089E4 (RaidAdapterPoFxActivateComponent.c)
 *     RaidXrbDeallocateResources @ 0x1C0008A38 (RaidXrbDeallocateResources.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0008BAC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0008C08 (RaidAdapterExecuteXrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C000F794 (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C0019DD4 (RaidFreeSrb.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0036AF8 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidDiagnosticIoctlStatusToNtStatus @ 0x1C003B008 (RaidDiagnosticIoctlStatusToNtStatus.c)
 *     WPP_SF_dd @ 0x1C003E890 (WPP_SF_dd.c)
 *     WPP_SF_qq @ 0x1C003EAA4 (WPP_SF_qq.c)
 *     RaBuildDiagnosticBufferForMiniport @ 0x1C0056374 (RaBuildDiagnosticBufferForMiniport.c)
 */

__int64 __fastcall RaidAdapterDiagnosticIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v3; // ebx
  unsigned int *v4; // r15
  _IRP *MasterIrp; // rdi
  unsigned int *Srb; // rsi
  size_t Length; // r14
  int MdlAddress_high; // eax
  __int64 v11; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r14
  unsigned int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // r8
  char *v22; // r12
  int v23; // ecx
  __int128 v24; // xmm0
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned __int64 v28; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-58h]
  __int64 v31; // [rsp+30h] [rbp-48h]
  unsigned int v32; // [rsp+88h] [rbp+10h] BYREF
  size_t Size; // [rsp+90h] [rbp+18h]
  PVOID P; // [rsp+98h] [rbp+20h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v32 = 0;
  v4 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Srb = 0LL;
  P = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  LODWORD(Size) = CurrentStackLocation->Parameters.Read.Length;
  if ( !MasterIrp )
    goto LABEL_2;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x14 || (unsigned int)Length < 0x24 )
  {
    v3 = -1073741811;
    goto LABEL_58;
  }
  if ( *(_DWORD *)&MasterIrp->Type != 20
    || *(_DWORD *)(&MasterIrp->Size + 1) != 20
    || (MdlAddress_high = HIDWORD(MasterIrp->MdlAddress)) == 0
    || MdlAddress_high >= 4
    || (int)MasterIrp->Flags >= 1 )
  {
LABEL_2:
    v3 = -1073741811;
    return RaidCompleteRequestEx(a2, 0, v3);
  }
  if ( MdlAddress_high == 1 )
  {
    memset_0(MasterIrp, 0, Length);
    *(_DWORD *)&MasterIrp->Type = 36;
    *(GUID *)&MasterIrp->MdlAddress = GUID_DIAGNOSTIC_PROVIDER_STORPORT;
    if ( (unsigned int)Length >= 0x1200038 )
    {
      LODWORD(MasterIrp->ThreadListEntry.Flink) = 18874392;
      HIDWORD(MasterIrp->ThreadListEntry.Flink) = 2;
      LODWORD(MasterIrp->ThreadListEntry.Blink) = *(_DWORD *)(a1 + 4868);
      HIDWORD(MasterIrp->ThreadListEntry.Blink) = *(_DWORD *)(a1 + 4864);
      memmove(&MasterIrp->IoStatus, *(const void **)(a1 + 4872), 48LL * *(unsigned int *)(a1 + 4868));
      LODWORD(MasterIrp[90742].UserEvent) = *(_DWORD *)(a1 + 5576);
      HIDWORD(MasterIrp[90742].UserEvent) = *(_DWORD *)(a1 + 5580);
      MasterIrp->AssociatedIrp.IrpCount = 18874392;
      *(_DWORD *)(&MasterIrp->Size + 1) = 18874424;
      a2->IoStatus.Information = 18874424LL;
    }
    else
    {
      MasterIrp->AssociatedIrp.IrpCount = 18874392;
      v3 = -2147483643;
      *(_DWORD *)(&MasterIrp->Size + 1) = 36;
      a2->IoStatus.Information = 36LL;
    }
    return RaidCompleteRequestEx(a2, 0, v3);
  }
  if ( (unsigned int)(MdlAddress_high - 2) > 1 )
  {
    v3 = -1073741637;
    return RaidCompleteRequestEx(a2, 0, v3);
  }
  v3 = RaBuildDiagnosticBufferForMiniport(*(_QWORD *)(a1 + 8), (__int64)a2, Length, &P, &v32);
  if ( v3 >= 0 )
  {
    Srb = (unsigned int *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(a1 + 442), 0);
    if ( Srb )
    {
      ContiguousIoResources = StorAllocateContiguousIoResources(
                                ((*(_DWORD *)(a1 + 484) + 7) & 0xFFFFFFF8) + 1104,
                                v11,
                                a1);
      v31 = ContiguousIoResources;
      v14 = ContiguousIoResources;
      if ( ContiguousIoResources )
      {
        v15 = ContiguousIoResources + 48;
        RaidZeroXrb(ContiguousIoResources + 48, v13, 0, 0LL);
        v4 = (unsigned int *)P;
        v16 = v32;
        *(_QWORD *)(v15 + 184) = P;
        *(_QWORD *)(v15 + 176) = a2;
        *(_QWORD *)(v15 + 168) = Srb;
        if ( *(_BYTE *)(a1 + 442) == 1 )
        {
          Srb[15] = v16;
          *((_QWORD *)Srb + 12) = v15;
          *((_QWORD *)Srb + 10) = a2;
          Srb[5] = 2;
          *((_QWORD *)Srb + 8) = v4;
          Srb[6] = 256;
          Srb[10] = *(_DWORD *)(a1 + 4060);
          v17 = Srb[13];
          *(_WORD *)((char *)Srb + v17 + 8) = 0;
          *((_BYTE *)Srb + v17 + 10) = 0;
        }
        else
        {
          Srb[4] = v16;
          *(_WORD *)Srb = 88;
          *((_QWORD *)Srb + 6) = v15;
          *((_BYTE *)Srb + 2) = 2;
          *((_QWORD *)Srb + 3) = v4;
          Srb[3] = 256;
          v18 = *(_DWORD *)(a1 + 4060);
          *(_WORD *)((char *)Srb + 5) = 0;
          Srb[5] = v18;
          *((_BYTE *)Srb + 7) = 0;
        }
        RaSrbSetMiniportContext(a1, (__int64)Srb, v14 + 1104);
        KeInitializeEvent((PRKEVENT)(v15 + 664), NotificationEvent, 0);
        RaidXrbSetCompletionRoutine(v15, (__int64)RaidXrbSignalCompletion);
        if ( HIDWORD(MasterIrp->MdlAddress) == 2 )
          *(_BYTE *)(v15 + 17) |= 8u;
        if ( HIDWORD(MasterIrp->MdlAddress) == 3 && *(_QWORD *)(a1 + 4896) )
          RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          WPP_SF_qq(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x4Du,
            (__int64)&WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
            v15,
            Srb);
        }
        if ( *(_BYTE *)(a1 + 4306) )
          v20 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v15);
        else
          v20 = RaidAdapterExecuteXrb(a1, (_QWORD *)v15, v19);
        v3 = v20;
        if ( v20 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v15 + 664), Executive, 0, 0, 0LL);
          v3 = RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
        }
        if ( HIDWORD(MasterIrp->MdlAddress) == 3 )
        {
          if ( (*(_BYTE *)(v15 + 17) & 1) != 0 )
          {
            RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v15 + 748));
            *(_BYTE *)(v15 + 17) &= ~1u;
          }
          if ( *(_QWORD *)(a1 + 4896) )
            RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
        }
        if ( v3 < 0 )
        {
          v28 = 0LL;
        }
        else
        {
          v22 = (char *)v4 + *v4;
          memset_0(MasterIrp, 0, (unsigned int)Size);
          v23 = v4[5];
          if ( v23 == 6 )
          {
            *(_DWORD *)&MasterIrp->Type = 36;
            v3 = -2147483643;
            MasterIrp->AssociatedIrp.IrpCount = *((_DWORD *)v22 + 8);
            v24 = *((_OWORD *)v22 + 1);
            *(_DWORD *)(&MasterIrp->Size + 1) = 36;
            *(_OWORD *)&MasterIrp->MdlAddress = v24;
            a2->IoStatus.Information = 36LL;
LABEL_56:
            RaidXrbDeallocateResources(v15, 0, v21);
            StorFreeContiguousIoResources(a1, v31);
            goto LABEL_58;
          }
          if ( v23 )
          {
            v25 = RaidDiagnosticIoctlStatusToNtStatus(v23);
            a2->IoStatus.Information = 0LL;
            v3 = v25;
            goto LABEL_56;
          }
          v26 = Size - 32;
          *(_DWORD *)&MasterIrp->Type = 36;
          v27 = *((_DWORD *)v22 + 8);
          if ( v27 >= v26 )
            v27 = v26;
          *(_DWORD *)(&MasterIrp->Size + 1) = v27 + 32;
          MasterIrp->AssociatedIrp.IrpCount = v27;
          *(_OWORD *)&MasterIrp->MdlAddress = *((_OWORD *)v22 + 1);
          memmove(&MasterIrp->ThreadListEntry, v22 + 40, v27);
          v28 = *(unsigned int *)(&MasterIrp->Size + 1);
        }
        a2->IoStatus.Information = v28;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          LODWORD(Timeout) = *((unsigned __int8 *)Srb + 3);
          WPP_SF_dd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x4Eu,
            (__int64)&WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
            v3,
            Timeout);
        }
        goto LABEL_56;
      }
    }
    v3 = -1073741670;
  }
  v4 = (unsigned int *)P;
LABEL_58:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72536152u);
  if ( Srb )
  {
    if ( *(_BYTE *)(a1 + 442) == 1 )
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
  return RaidCompleteRequestEx(a2, 0, v3);
}
