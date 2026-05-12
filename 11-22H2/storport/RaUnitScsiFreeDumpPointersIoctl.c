/*
 * XREFs of RaUnitScsiFreeDumpPointersIoctl @ 0x1C0012FA4
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidZeroXrb @ 0x1C0004AA4 (RaidZeroXrb.c)
 *     RaidAllocateSrb @ 0x1C00079E4 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResources @ 0x1C000826C (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C000832C (StorFreeContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00083B8 (RaidSrbStatusToNtStatus.c)
 *     RaidXrbDeallocateResources @ 0x1C0008A38 (RaidXrbDeallocateResources.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0008BAC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0008C08 (RaidAdapterExecuteXrb.c)
 *     StorPortReleaseAdditionalCrashDumpArea @ 0x1C0013398 (StorPortReleaseAdditionalCrashDumpArea.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     WPP_SF_dd @ 0x1C003E890 (WPP_SF_dd.c)
 *     WPP_SF_qq @ 0x1C003EAA4 (WPP_SF_qq.c)
 */

__int64 __fastcall RaUnitScsiFreeDumpPointersIoctl(__int64 a1, IRP *a2)
{
  __int64 v2; // r15
  void *v5; // rsi
  __int64 v6; // rbp
  unsigned int *Srb; // rbx
  _IRP *MasterIrp; // rax
  _MDL *MdlAddress; // r12
  _LIST_ENTRY *i; // rdi
  __int64 Pool; // rax
  __int64 v12; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  int v16; // eax
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rcx
  void (__fastcall *v23)(_QWORD); // rax
  __int64 v24; // r8
  unsigned int *v25; // r14
  unsigned int *v26; // r9
  unsigned int v27; // edi
  unsigned int *v28; // rdx
  _LIST_ENTRY *Flink; // rcx
  int v31; // eax
  char v32; // [rsp+80h] [rbp+8h]
  unsigned int *v33; // [rsp+88h] [rbp+10h]
  _IRP *v34; // [rsp+90h] [rbp+18h]
  __int64 v35; // [rsp+98h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 24);
  v5 = 0LL;
  v35 = 0LL;
  v6 = 0LL;
  v33 = 0LL;
  Srb = 0LL;
  v32 = 0;
  if ( a2->RequestorMode )
  {
    v27 = -1073741790;
    return RaidCompleteRequestEx(a2, 0, v27);
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x68 )
  {
    v27 = -1073741811;
    return RaidCompleteRequestEx(a2, 0, v27);
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v34 = MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type != 4 )
  {
    v27 = -1073741735;
    return RaidCompleteRequestEx(a2, 0, v27);
  }
  MdlAddress = MasterIrp->MdlAddress;
  for ( i = MasterIrp->ThreadListEntry.Blink; i; i = i->Flink )
  {
    if ( !i->Flink )
    {
      Flink = i[5].Flink;
      if ( Flink )
      {
        ExFreePoolWithTag(Flink, 0);
        *(_OWORD *)&i[4].Blink = 0LL;
      }
    }
  }
  if ( *(_BYTE *)(a1 + 1781) == 1 && v2 )
  {
    Pool = RaidAllocatePool(64LL, 112LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    v5 = (void *)Pool;
    if ( !Pool )
    {
      v27 = -1073741670;
      return RaidCompleteRequestEx(a2, 0, v27);
    }
    *(_DWORD *)Pool = 7340288;
    *(_DWORD *)(Pool + 56) = v34->AssociatedIrp.IrpCount;
    *(_DWORD *)(Pool + 72) = HIDWORD(MdlAddress->Process);
    *(_DWORD *)(Pool + 76) = MdlAddress->MappedSystemVa;
    *(_DWORD *)(Pool + 80) = MdlAddress->ByteCount;
    *(_DWORD *)(Pool + 84) = MdlAddress->ByteOffset;
    *(_DWORD *)(Pool + 88) = MdlAddress[1].Process;
    *(_DWORD *)(Pool + 92) = HIDWORD(MdlAddress[1].Process);
    *(_QWORD *)(Pool + 96) = MdlAddress[1].MappedSystemVa;
    *(_BYTE *)(Pool + 104) = MdlAddress[1].ByteCount;
    *(_BYTE *)(Pool + 105) = BYTE2(MdlAddress[2].Next);
    *(_BYTE *)(Pool + 106) = HIBYTE(MdlAddress[2].Size);
    *(_BYTE *)(Pool + 107) = BYTE1(MdlAddress[2].Process);
    *(_QWORD *)(Pool + 64) = MdlAddress[1].StartVa;
    Srb = (unsigned int *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x27u, BYTE2(MdlAddress[2].Process), 0);
    if ( !Srb )
    {
      v27 = -1073741670;
      goto LABEL_35;
    }
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              ((*(_DWORD *)(v2 + 484) + 7) & 0xFFFFFFF8) + 1104,
                              v12,
                              v2);
    v35 = ContiguousIoResources;
    v15 = ContiguousIoResources;
    if ( !ContiguousIoResources )
    {
      v27 = -1073741670;
      goto LABEL_47;
    }
    v6 = ContiguousIoResources + 48;
    RaidZeroXrb(ContiguousIoResources + 48, v14, 0, 0LL);
    *(_QWORD *)(v6 + 176) = a2;
    *(_QWORD *)(v6 + 184) = v5;
    *(_QWORD *)(v6 + 168) = Srb;
    if ( BYTE2(MdlAddress[2].Process) == 1 )
    {
      Srb[6] = 256;
      v16 = Srb[6];
      Srb[5] = 39;
      *((_QWORD *)Srb + 8) = v5;
      Srb[15] = 112;
      v17 = *(_BYTE *)(v2 + 4306) == 0;
      Srb[10] = 10;
      if ( v17 )
        v16 = 128;
      *((_QWORD *)Srb + 10) = a2;
      v18 = Srb[13];
      Srb[6] = v16;
      *((_QWORD *)Srb + 13) = v15 + 1104;
      *((_QWORD *)Srb + 12) = v6;
      *((_BYTE *)Srb + v18 + 8) = *(_BYTE *)(a1 + 96);
      *((_BYTE *)Srb + v18 + 9) = *(_BYTE *)(a1 + 97);
      *((_BYTE *)Srb + v18 + 10) = *(_BYTE *)(a1 + 98);
      v32 = 1;
      v33 = Srb;
    }
    else
    {
      Srb[3] = 256;
      *(_WORD *)Srb = 88;
      v31 = Srb[3];
      *((_BYTE *)Srb + 2) = 39;
      *((_QWORD *)Srb + 3) = v5;
      Srb[4] = 112;
      v17 = *(_BYTE *)(v2 + 4306) == 0;
      Srb[5] = 10;
      if ( v17 )
        v31 = 128;
      Srb[3] = v31;
      *((_BYTE *)Srb + 5) = *(_BYTE *)(a1 + 96);
      *((_BYTE *)Srb + 6) = *(_BYTE *)(a1 + 97);
      *((_BYTE *)Srb + 7) = *(_BYTE *)(a1 + 98);
      *((_QWORD *)Srb + 7) = v15 + 1104;
      *((_QWORD *)Srb + 6) = v6;
    }
    KeInitializeEvent((PRKEVENT)(v6 + 664), NotificationEvent, 0);
    *(_QWORD *)(v6 + 656) = RaidXrbSignalCompletion;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 34LL, &WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids, v6, Srb);
    }
    if ( *(_BYTE *)(v2 + 4306) )
      v20 = RaidAdapterRaiseIrqlAndExecuteXrb(v2, v6);
    else
      v20 = RaidAdapterExecuteXrb(v2, (_QWORD *)v6, v19);
    v21 = (unsigned int)v20;
    if ( v20 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(v6 + 664), Executive, 0, 0, 0LL);
      v21 = (unsigned int)RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) )
    {
      WPP_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        35LL,
        &WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids,
        v21,
        *((unsigned __int8 *)Srb + 3));
    }
  }
  v22 = *(_QWORD *)(a1 + 24);
  if ( *(_WORD *)(v22 + 4962) )
  {
    v23 = *(void (__fastcall **)(_QWORD))(v22 + 4984);
    if ( v23 )
      v23(*(_QWORD *)(v22 + 4968));
  }
  StorPortReleaseAdditionalCrashDumpArea(*(_QWORD *)(a1 + 24) + 760LL, &MdlAddress->Process);
  ExFreePoolWithTag(v34->MdlAddress, 0x44436152u);
  memset_0(v34, 0, 0x68uLL);
  a2->IoStatus.Information = 0LL;
  v25 = Srb;
  v26 = v33;
  v27 = 0;
  v28 = v33;
  if ( v35 )
  {
    RaidXrbDeallocateResources(v6, 0, v24);
    StorFreeContiguousIoResources(v2, v35);
    v26 = v33;
    v28 = v33;
  }
  if ( Srb )
  {
    if ( v32 == 1 )
    {
      if ( v28 )
        v25 = v26;
      *((_QWORD *)v25 + 10) = 0LL;
      *((_QWORD *)v25 + 13) = 0LL;
      goto LABEL_33;
    }
LABEL_47:
    *((_QWORD *)Srb + 6) = 0LL;
    *((_QWORD *)Srb + 7) = 0LL;
LABEL_33:
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  if ( v5 )
LABEL_35:
    ExFreePoolWithTag(v5, 0x44436152u);
  return RaidCompleteRequestEx(a2, 0, v27);
}
