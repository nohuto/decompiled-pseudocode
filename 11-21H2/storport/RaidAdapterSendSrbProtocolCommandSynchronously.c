/*
 * XREFs of RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0037644
 * Callers:
 *     RaAdapterProtocolCommandIoctl @ 0x1C0032F18 (RaAdapterProtocolCommandIoctl.c)
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
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00358A0 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003B74C (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqq @ 0x1C003C830 (WPP_SF_qqq.c)
 *     StorSetIoGatewayEmptyEvent @ 0x1C0059728 (StorSetIoGatewayEmptyEvent.c)
 *     StorEtwProtocolCommandCompletion @ 0x1C005BEA8 (StorEtwProtocolCommandCompletion.c)
 */

__int64 __fastcall RaidAdapterSendSrbProtocolCommandSynchronously(__int64 a1, IRP *a2, char a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // rbp
  unsigned int Options; // ecx
  unsigned int *v7; // r15
  unsigned int Length; // eax
  _QWORD *v10; // r12
  char v11; // r8
  unsigned int v12; // ebx
  unsigned int *Srb; // rdi
  __int64 v14; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r14
  unsigned int LowPart; // ebx
  int v20; // ebp
  _IRP *v21; // rbp
  int v22; // ecx
  bool v23; // zf
  int v24; // edx
  unsigned int v25; // eax
  __int64 v26; // rbx
  unsigned int Blink; // eax
  IRP *v28; // rax
  unsigned int v29; // eax
  char v30; // bp
  int v31; // eax
  KIRQL v32; // bl
  unsigned __int64 v33; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+8h] BYREF
  _IRP *v37; // [rsp+98h] [rbp+10h]
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
  v12 = (*(_DWORD *)(a1 + 484) + 7) & 0xFFFFFFF8;
  v37 = MasterIrp;
  if ( Options <= Length )
    Options = Length;
  Timeout.LowPart = Options;
  Srb = (unsigned int *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 9u, v11, 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v12 + 1104, v14, a1);
  v18 = ContiguousIoResources;
  if ( Srb && ContiguousIoResources )
  {
    v10 = (_QWORD *)(ContiguousIoResources + 48);
    RaidZeroXrb(ContiguousIoResources + 48, v16, 0, 0LL);
    LowPart = Timeout.LowPart;
    v20 = RaidBuildMdlForXrb((__int64)v10, MasterIrp, Timeout.LowPart);
    if ( v20 >= 0 )
    {
      v21 = v37;
      v22 = 129;
      v23 = LODWORD(v37->ThreadListEntry.Flink) == 0;
      v37->Flags = 255;
      if ( v23 )
        v22 = 1;
      v24 = v22 | 0x40;
      if ( !HIDWORD(v21->ThreadListEntry.Flink) )
        v24 = v22;
      if ( !v38 )
      {
        v24 |= 0x102u;
        if ( *((_BYTE *)Srb + 2) == 40 )
          *((_WORD *)Srb + 19) = 32;
        else
          *((_BYTE *)Srb + 9) = 32;
      }
      if ( *(_BYTE *)(a1 + 442) == 1 )
      {
        v25 = Timeout.LowPart;
        v26 = Srb[13];
        v7 = Srb;
        Srb[8] = -1;
        Srb[15] = v25;
        Srb[5] = 9;
        Srb[6] = v24;
        *((_QWORD *)Srb + 8) = v21;
        *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
        Blink = (unsigned int)v21->ThreadListEntry.Blink;
        if ( !Blink )
          Blink = *(_DWORD *)(a1 + 3996);
        Srb[10] = Blink;
        *((_QWORD *)Srb + 12) = v10;
        *((_QWORD *)Srb + 10) = a2;
        *(_WORD *)((char *)Srb + v26 + 8) = 0;
        *((_BYTE *)Srb + v26 + 10) = 0;
        *(_QWORD *)(v18 + 216) = Srb;
        *(_QWORD *)(v18 + 232) = *((_QWORD *)Srb + 8);
        v28 = (IRP *)*((_QWORD *)Srb + 12);
      }
      else
      {
        *((_BYTE *)Srb + 2) = 9;
        *(_WORD *)Srb = 88;
        Srb[3] = v24;
        *((_BYTE *)Srb + 8) = -1;
        *((_QWORD *)Srb + 3) = v21;
        Srb[4] = LowPart;
        v29 = (unsigned int)v21->ThreadListEntry.Blink;
        if ( !v29 )
          v29 = *(_DWORD *)(a1 + 3996);
        Srb[5] = v29;
        *((_QWORD *)Srb + 6) = v10;
        *(_WORD *)((char *)Srb + 5) = 0;
        *((_BYTE *)Srb + 7) = 0;
        *(_QWORD *)(v18 + 216) = Srb;
        *(_QWORD *)(v18 + 232) = *((_QWORD *)Srb + 3);
        v28 = a2;
      }
      *(_QWORD *)(v18 + 224) = v28;
      RaSrbSetMiniportContext(a1, (__int64)Srb, v18 + 1104);
      v30 = v38;
      if ( v38 )
        *(_BYTE *)(v18 + 65) |= 8u;
      KeInitializeEvent((PRKEVENT)(v18 + 712), NotificationEvent, 0);
      *(_QWORD *)(v18 + 704) = RaidXrbSignalCompletion;
      if ( v30
        && (RaidPauseAdapterQueue(a1),
            KeInitializeEvent(&Event, NotificationEvent, 0),
            StorSetIoGatewayEmptyEvent(*(_QWORD *)(a1 + 832), &Event),
            Timeout.QuadPart = -1200000000LL,
            KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout)) )
      {
        a2->IoStatus.Information = 0LL;
        v20 = -1073741823;
      }
      else
      {
        if ( *(_QWORD *)(a1 + 4832) )
          RaidAdapterPoFxActivateComponent(a1);
        if ( *(_BYTE *)(a1 + 442) == 1 )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            WPP_SF_qqq(
              WPP_GLOBAL_Control->AttachedDevice,
              65LL,
              &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
              v10,
              v7,
              *((_QWORD *)v7 + 13));
          }
        }
        else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qqq(
            WPP_GLOBAL_Control->AttachedDevice,
            66LL,
            &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
            v10,
            Srb,
            *((_QWORD *)Srb + 7));
        }
        if ( *(_BYTE *)(a1 + 4242) )
          v31 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, (__int64)v10);
        else
          v31 = RaidAdapterExecuteXrb(a1, v10);
        v20 = v31;
        if ( v31 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v18 + 712), Executive, 0, 0, 0LL);
          v20 = RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
        }
        if ( v38 )
        {
          v32 = KfRaiseIrql(2u);
          RaidResumeAndRestartAdapterQueues(a1);
          KeLowerIrql(v32);
        }
        if ( (*(_BYTE *)(v18 + 65) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v18 + 796));
          *(_BYTE *)(v18 + 65) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 4832) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
        if ( v20 >= 0 )
        {
          if ( v37->Flags == 255 )
          {
            v20 = -1073741637;
          }
          else
          {
            if ( *(_BYTE *)(a1 + 442) == 1 )
              v33 = v7[15];
            else
              v33 = Srb[4];
            a2->IoStatus.Information = v33;
          }
        }
      }
    }
  }
  else
  {
    v20 = -1073741801;
  }
  if ( StorEtwLoggingEnabled )
  {
    LOBYTE(v17) = v38;
    StorEtwProtocolCommandCompletion(*(_QWORD *)(a1 + 8), a2, v17);
  }
  if ( v18 )
  {
    RaidXrbDeallocateResources((__int64)v10, 0, v17);
    StorFreeContiguousIoResources(a1, v18);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(a1 + 442) == 1 )
    {
      if ( !v7 )
        v7 = Srb;
      *((_QWORD *)v7 + 10) = 0LL;
      *((_QWORD *)v7 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return (unsigned int)v20;
}
