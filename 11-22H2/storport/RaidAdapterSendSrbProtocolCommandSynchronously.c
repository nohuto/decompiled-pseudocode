/*
 * XREFs of RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0038A6C
 * Callers:
 *     RaAdapterProtocolCommandIoctl @ 0x1C0033B78 (RaAdapterProtocolCommandIoctl.c)
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
 *     RaidPauseAdapterQueue @ 0x1C0019048 (RaidPauseAdapterQueue.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0036AF8 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003D540 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqq @ 0x1C003EBC4 (WPP_SF_qqq.c)
 *     StorSetIoGatewayEmptyEvent @ 0x1C00666B4 (StorSetIoGatewayEmptyEvent.c)
 *     StorEtwProtocolCommandCompletion @ 0x1C0068EDC (StorEtwProtocolCommandCompletion.c)
 */

__int64 __fastcall RaidAdapterSendSrbProtocolCommandSynchronously(__int64 a1, IRP *a2, char a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // r15
  unsigned int Options; // esi
  __int64 v7; // rbp
  unsigned int Length; // eax
  unsigned int *v10; // r13
  char v11; // r8
  int v12; // ebx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  unsigned int *Srb; // rdi
  __int64 v16; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rbx
  int v21; // esi
  bool v22; // zf
  int v23; // edx
  char v24; // si
  int v25; // ecx
  unsigned int LowPart; // eax
  __int64 v27; // rbx
  unsigned int Blink; // eax
  IRP *v29; // rax
  unsigned int v30; // eax
  int v31; // eax
  KIRQL v32; // bl
  unsigned __int64 v33; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+8h] BYREF
  __int64 v37; // [rsp+98h] [rbp+10h]
  char v38; // [rsp+A0h] [rbp+18h]

  v38 = a3;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  memset(&Event, 0, sizeof(Event));
  Options = CurrentStackLocation->Parameters.Create.Options;
  v7 = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v10 = 0LL;
  v11 = *(_BYTE *)(a1 + 442);
  v12 = *(_DWORD *)(a1 + 484) + 7;
  v13 = *(_QWORD *)(a1 + 8);
  v14 = v12 & 0xFFFFFFF8;
  if ( Options <= Length )
    Options = Length;
  Timeout.LowPart = Options;
  Srb = (unsigned int *)RaidAllocateSrb(v13, 9u, v11, 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v14 + 1104, v16, a1);
  v37 = ContiguousIoResources;
  v20 = ContiguousIoResources;
  if ( Srb && ContiguousIoResources )
  {
    v7 = ContiguousIoResources + 48;
    RaidZeroXrb(ContiguousIoResources + 48, v18, 0, 0LL);
    v21 = RaidBuildMdlForXrb(v7, MasterIrp, Options);
    if ( v21 < 0 )
      goto LABEL_32;
    v22 = DisableIEEE1667 == 0;
    v19 = 1LL;
    MasterIrp->Flags = 255;
    v23 = 129;
    if ( !v22
      && LODWORD(MasterIrp->MdlAddress) == 3
      && (unsigned int)(unsigned __int8)LODWORD(MasterIrp->UserEvent) - 129 <= 1
      && MasterIrp->Tail.Apc.SpareByte1 == 0xEE )
    {
      v21 = -1073741637;
      goto LABEL_32;
    }
    v24 = v38;
    if ( !LODWORD(MasterIrp->ThreadListEntry.Flink) )
      v23 = 1;
    v25 = v23 | 0x40;
    if ( !HIDWORD(MasterIrp->ThreadListEntry.Flink) )
      v25 = v23;
    if ( !v38 )
    {
      v25 |= 0x102u;
      if ( *((_BYTE *)Srb + 2) == 40 )
        *((_WORD *)Srb + 19) = 32;
      else
        *((_BYTE *)Srb + 9) = 32;
    }
    if ( *(_BYTE *)(a1 + 442) == 1 )
    {
      LowPart = Timeout.LowPart;
      v10 = Srb;
      v27 = Srb[13];
      Srb[8] = -1;
      Srb[6] = v25;
      Srb[5] = 9;
      *((_QWORD *)Srb + 8) = MasterIrp;
      Srb[15] = LowPart;
      *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
      Blink = (unsigned int)MasterIrp->ThreadListEntry.Blink;
      if ( !Blink )
        Blink = *(_DWORD *)(a1 + 4060);
      Srb[10] = Blink;
      *((_QWORD *)Srb + 12) = v7;
      *((_QWORD *)Srb + 10) = a2;
      *(_WORD *)((char *)Srb + v27 + 8) = 0;
      *((_BYTE *)Srb + v27 + 10) = 0;
      v20 = v37;
      *(_QWORD *)(v7 + 168) = Srb;
      *(_QWORD *)(v7 + 184) = *((_QWORD *)Srb + 8);
      v29 = (IRP *)*((_QWORD *)Srb + 12);
    }
    else
    {
      *((_BYTE *)Srb + 2) = 9;
      *(_WORD *)Srb = 88;
      Srb[4] = Timeout.LowPart;
      Srb[3] = v25;
      *((_BYTE *)Srb + 8) = -1;
      *((_QWORD *)Srb + 3) = MasterIrp;
      v30 = (unsigned int)MasterIrp->ThreadListEntry.Blink;
      if ( !v30 )
        v30 = *(_DWORD *)(a1 + 4060);
      Srb[5] = v30;
      *((_QWORD *)Srb + 6) = v7;
      *(_WORD *)((char *)Srb + 5) = 0;
      *((_BYTE *)Srb + 7) = 0;
      *(_QWORD *)(v7 + 168) = Srb;
      *(_QWORD *)(v7 + 184) = *((_QWORD *)Srb + 3);
      v29 = a2;
    }
    *(_QWORD *)(v7 + 176) = v29;
    RaSrbSetMiniportContext(a1, (__int64)Srb, v20 + 1104);
    if ( v24 )
      *(_BYTE *)(v7 + 17) |= 8u;
    KeInitializeEvent((PRKEVENT)(v7 + 664), NotificationEvent, 0);
    *(_QWORD *)(v7 + 656) = RaidXrbSignalCompletion;
    if ( v24 )
    {
      RaidPauseAdapterQueue(a1);
      KeInitializeEvent(&Event, NotificationEvent, 0);
      StorSetIoGatewayEmptyEvent(*(_QWORD *)(a1 + 896), &Event);
      Timeout.QuadPart = -1200000000LL;
      if ( KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) )
      {
        a2->IoStatus.Information = 0LL;
        v21 = -1073741823;
LABEL_31:
        v20 = v37;
        goto LABEL_32;
      }
    }
    if ( *(_QWORD *)(a1 + 4896) )
      RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
    if ( *(_BYTE *)(a1 + 442) == 1 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_qqq(
          WPP_GLOBAL_Control->AttachedDevice,
          65LL,
          &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
          v7,
          v10,
          *((_QWORD *)v10 + 13));
      }
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        66LL,
        &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
        v7,
        Srb,
        *((_QWORD *)Srb + 7));
    }
    if ( *(_BYTE *)(a1 + 4306) )
      v31 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v7);
    else
      v31 = RaidAdapterExecuteXrb(a1, (_QWORD *)v7, v19);
    v21 = v31;
    if ( v31 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(v7 + 664), Executive, 0, 0, 0LL);
      v21 = RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
    }
    if ( v38 )
    {
      v32 = KfRaiseIrql(2u);
      RaidResumeAndRestartAdapterQueues(a1);
      KeLowerIrql(v32);
    }
    if ( (*(_BYTE *)(v7 + 17) & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v7 + 748));
      *(_BYTE *)(v7 + 17) &= ~1u;
    }
    if ( *(_QWORD *)(a1 + 4896) )
      RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
    if ( v21 < 0 )
      goto LABEL_31;
    if ( MasterIrp->Flags == 255 )
    {
      v21 = -1073741637;
      goto LABEL_31;
    }
    v20 = v37;
    if ( *(_BYTE *)(a1 + 442) == 1 )
      v33 = v10[15];
    else
      v33 = Srb[4];
    a2->IoStatus.Information = v33;
  }
  else
  {
    v21 = -1073741801;
  }
LABEL_32:
  if ( StorEtwLoggingEnabled )
  {
    LOBYTE(v19) = v38;
    StorEtwProtocolCommandCompletion(*(_QWORD *)(a1 + 8), a2, v19);
  }
  if ( v20 )
  {
    RaidXrbDeallocateResources(v7, 0, v19);
    StorFreeContiguousIoResources(a1, v20);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(a1 + 442) == 1 )
    {
      if ( !v10 )
        v10 = Srb;
      *((_QWORD *)v10 + 10) = 0LL;
      *((_QWORD *)v10 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return (unsigned int)v21;
}
