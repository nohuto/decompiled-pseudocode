/*
 * XREFs of RaUnitScsiFreeDumpPointersIoctl @ 0x1C00519EC
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
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     StorFreeContiguousIoResources @ 0x1C000F988 (StorFreeContiguousIoResources.c)
 *     StorAllocateContiguousIoResources @ 0x1C000F9B4 (StorAllocateContiguousIoResources.c)
 *     StorPortReleaseAdditionalCrashDumpArea @ 0x1C00173FC (StorPortReleaseAdditionalCrashDumpArea.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     WPP_SF_DD @ 0x1C003C4FC (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C003C710 (WPP_SF_qq.c)
 */

__int64 __fastcall RaUnitScsiFreeDumpPointersIoctl(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  void *v7; // rsi
  __int64 v8; // rdi
  unsigned int *Srb; // rbx
  unsigned int v10; // edi
  _IRP *MasterIrp; // rax
  _LIST_ENTRY *Blink; // r14
  _MDL *MdlAddress; // r12
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v15; // rcx
  __int64 Pool; // rax
  __int64 v17; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v19; // rdx
  __int64 v20; // r14
  int v22; // eax
  bool v23; // zf
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  void (__fastcall *v29)(_QWORD, _QWORD, _QWORD, __int64); // rdx
  __int64 v30; // r8
  unsigned int *v31; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-58h]
  char v33; // [rsp+80h] [rbp+8h]
  unsigned int *v34; // [rsp+88h] [rbp+10h]
  _IRP *v35; // [rsp+98h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 24);
  v7 = 0LL;
  v8 = 0LL;
  Srb = 0LL;
  v34 = 0LL;
  v33 = 0;
  if ( !a2->RequestorMode )
  {
    if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x68 )
    {
      v10 = -1073741811;
      return RaidCompleteRequestEx(a2, 0, v10);
    }
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    v35 = MasterIrp;
    if ( *(_DWORD *)&MasterIrp->Type != 4 )
    {
      v10 = -1073741735;
      return RaidCompleteRequestEx(a2, 0, v10);
    }
    Blink = MasterIrp->ThreadListEntry.Blink;
    MdlAddress = MasterIrp->MdlAddress;
    if ( Blink )
    {
      do
      {
        Flink = Blink->Flink;
        if ( !Blink->Flink )
        {
          v15 = Blink[5].Flink;
          Flink = 0LL;
          if ( v15 )
          {
            ExFreePoolWithTag(v15, 0);
            *(_OWORD *)&Blink[4].Blink = 0LL;
            Flink = Blink->Flink;
          }
        }
        Blink = Flink;
      }
      while ( Flink );
    }
    if ( *(_BYTE *)(a1 + 1733) == 1 && v4 )
    {
      Pool = RaidAllocatePool(64LL, 112LL, 1145266514LL, *(_QWORD *)(a1 + 8));
      v7 = (void *)Pool;
      if ( !Pool )
      {
        v10 = -1073741670;
        return RaidCompleteRequestEx(a2, 0, v10);
      }
      *(_DWORD *)Pool = 7340288;
      *(_DWORD *)(Pool + 56) = v35->AssociatedIrp.IrpCount;
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
        v10 = -1073741670;
        goto LABEL_23;
      }
      ContiguousIoResources = StorAllocateContiguousIoResources(
                                ((*(_DWORD *)(v4 + 484) + 7) & 0xFFFFFFF8) + 1104,
                                v17,
                                v4);
      v20 = ContiguousIoResources;
      if ( !ContiguousIoResources )
      {
        v10 = -1073741670;
        goto LABEL_20;
      }
      v8 = ContiguousIoResources + 48;
      RaidZeroXrb(ContiguousIoResources + 48, v19, 0, 0LL);
      *(_QWORD *)(v8 + 176) = a2;
      *(_QWORD *)(v8 + 184) = v7;
      *(_QWORD *)(v8 + 168) = Srb;
      if ( BYTE2(MdlAddress[2].Process) == 1 )
      {
        Srb[6] = 256;
        v22 = Srb[6];
        Srb[5] = 39;
        *((_QWORD *)Srb + 8) = v7;
        Srb[15] = 112;
        v23 = *(_BYTE *)(v4 + 4242) == 0;
        Srb[10] = 10;
        if ( v23 )
          v22 = 128;
        *((_QWORD *)Srb + 10) = a2;
        v24 = Srb[13];
        Srb[6] = v22;
        *((_QWORD *)Srb + 13) = v20 + 1104;
        *((_QWORD *)Srb + 12) = v8;
        *((_BYTE *)Srb + v24 + 8) = *(_BYTE *)(a1 + 96);
        *((_BYTE *)Srb + v24 + 9) = *(_BYTE *)(a1 + 97);
        *((_BYTE *)Srb + v24 + 10) = *(_BYTE *)(a1 + 98);
        v33 = 1;
        v34 = Srb;
      }
      else
      {
        Srb[3] = 256;
        *(_WORD *)Srb = 88;
        v25 = Srb[3];
        *((_BYTE *)Srb + 2) = 39;
        *((_QWORD *)Srb + 3) = v7;
        Srb[4] = 112;
        v23 = *(_BYTE *)(v4 + 4242) == 0;
        Srb[5] = 10;
        if ( v23 )
          v25 = 128;
        Srb[3] = v25;
        *((_BYTE *)Srb + 5) = *(_BYTE *)(a1 + 96);
        *((_BYTE *)Srb + 6) = *(_BYTE *)(a1 + 97);
        *((_BYTE *)Srb + 7) = *(_BYTE *)(a1 + 98);
        *((_QWORD *)Srb + 7) = v20 + 1104;
        *((_QWORD *)Srb + 6) = v8;
      }
      KeInitializeEvent((PRKEVENT)(v8 + 664), NotificationEvent, 0);
      *(_QWORD *)(v8 + 656) = RaidXrbSignalCompletion;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        WPP_SF_qq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x22u,
          (__int64)&WPP_568007271afc3cdc120e483208e8f443_Traceguids,
          v8,
          Srb);
      }
      if ( *(_BYTE *)(v4 + 4242) )
        v26 = RaidAdapterRaiseIrqlAndExecuteXrb(v4, v8);
      else
        v26 = RaidAdapterExecuteXrb(v4, (_QWORD *)v8);
      a4 = (unsigned int)v26;
      if ( v26 >= 0 )
      {
        KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, 0LL);
        a4 = (unsigned int)RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        LODWORD(Timeout) = *((unsigned __int8 *)Srb + 3);
        WPP_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x23u,
          (__int64)&WPP_568007271afc3cdc120e483208e8f443_Traceguids,
          a4,
          Timeout);
      }
    }
    else
    {
      v20 = 0LL;
    }
    v27 = *(_QWORD *)(a1 + 24);
    v28 = v27;
    if ( *(_WORD *)(v27 + 4898) )
    {
      v29 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v27 + 4920);
      if ( v29 )
      {
        v29(*(_QWORD *)(v27 + 4904), v29, 0LL, a4);
        v28 = *(_QWORD *)(a1 + 24);
      }
    }
    StorPortReleaseAdditionalCrashDumpArea(v28 + 752, (__int64)&MdlAddress->Process);
    ExFreePoolWithTag(v35->MdlAddress, 0x44436152u);
    memset(v35, 0, 0x68uLL);
    a2->IoStatus.Information = 0LL;
    if ( v20 )
    {
      RaidXrbDeallocateResources(v8, 0, v30);
      StorFreeContiguousIoResources(v4, v20);
    }
    v10 = 0;
    if ( !Srb )
    {
LABEL_22:
      if ( !v7 )
        return RaidCompleteRequestEx(a2, 0, v10);
LABEL_23:
      ExFreePoolWithTag(v7, 0x44436152u);
      return RaidCompleteRequestEx(a2, 0, v10);
    }
    if ( v33 == 1 )
    {
      v31 = Srb;
      if ( v34 )
        v31 = v34;
      *((_QWORD *)v31 + 10) = 0LL;
      *((_QWORD *)v31 + 13) = 0LL;
      goto LABEL_21;
    }
LABEL_20:
    *((_QWORD *)Srb + 6) = 0LL;
    *((_QWORD *)Srb + 7) = 0LL;
LABEL_21:
    ExFreePoolWithTag(Srb, 0x72536152u);
    goto LABEL_22;
  }
  v10 = -1073741790;
  return RaidCompleteRequestEx(a2, 0, v10);
}
