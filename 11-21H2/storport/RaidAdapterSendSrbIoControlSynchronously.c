/*
 * XREFs of RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F28
 * Callers:
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C0002DE0 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C0032FA8 (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaGetProtocolCommandEffects @ 0x1C0033264 (RaGetProtocolCommandEffects.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C0034EB4 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0034FE4 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x1C0035130 (RaidAdapterHwFirmwareGetInfoFromMiniport.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C0035BD0 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x1C0037B34 (RaidAdapterSetBootLunIoctl.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C0039B18 (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C0039DBC (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaidSetStorageAdapterProtocolSpecificProperty @ 0x1C003B7BC (RaidSetStorageAdapterProtocolSpecificProperty.c)
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
 *     PortSrbTranslateSrbToNtStatus @ 0x1C0021CDC (PortSrbTranslateSrbToNtStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00358A0 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003B74C (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqq @ 0x1C003C830 (WPP_SF_qqq.c)
 *     StorSetIoGatewayEmptyEvent @ 0x1C0059728 (StorSetIoGatewayEmptyEvent.c)
 */

__int64 __fastcall RaidAdapterSendSrbIoControlSynchronously(
        __int64 a1,
        IRP *a2,
        __int64 a3,
        unsigned int a4,
        __int64 (__fastcall *a5)(_QWORD),
        char a6,
        int a7)
{
  __int64 v7; // r13
  int v10; // ebx
  __int64 v11; // rcx
  _WORD *v12; // r15
  _WORD *Srb; // rdi
  __int64 v14; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v16; // rdx
  __int64 v17; // rbp
  __int64 v18; // r12
  int v19; // r14d
  char v20; // r13
  int v21; // eax
  int v22; // eax
  PIRP v23; // rbx
  PIRP v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  PIRP v29; // r14
  __int64 v30; // rbx
  IRP *v31; // rcx
  KIRQL v32; // bl
  struct _KEVENT Event; // [rsp+30h] [rbp-68h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+8h] BYREF
  PIRP Irp; // [rsp+A8h] [rbp+10h]
  __int64 v36; // [rsp+B0h] [rbp+18h]
  unsigned int v37; // [rsp+B8h] [rbp+20h]

  v37 = a4;
  v36 = a3;
  Irp = a2;
  v7 = a3;
  LOBYTE(a3) = *(_BYTE *)(a1 + 442);
  v10 = *(_DWORD *)(a1 + 484) + 7;
  v11 = *(_QWORD *)(a1 + 8);
  memset(&Event, 0, sizeof(Event));
  v12 = 0LL;
  Srb = (_WORD *)RaidAllocateSrb(v11, 2LL, a3, 0LL);
  ContiguousIoResources = StorAllocateContiguousIoResources((v10 & 0xFFFFFFF8) + 1104, v14, a1);
  v17 = ContiguousIoResources;
  if ( Srb && ContiguousIoResources )
  {
    v18 = ContiguousIoResources + 48;
    RaidZeroXrb(ContiguousIoResources + 48, v16, 0LL, 0LL);
    v19 = RaidBuildMdlForXrb(v18, v7, a4);
    if ( v19 >= 0 )
    {
      v20 = a6;
      v21 = a7;
      if ( !a6 )
      {
        v21 = a7 | 0x102;
        if ( *((_BYTE *)Srb + 2) == 40 )
          Srb[19] = 32;
        else
          *((_BYTE *)Srb + 9) = 32;
      }
      v22 = v21 | 1;
      if ( *(_BYTE *)(a1 + 442) == 1 )
      {
        v29 = Irp;
        v12 = Srb;
        v30 = *((unsigned int *)Srb + 13);
        v31 = Irp;
        *((_DWORD *)Srb + 8) = -1;
        *((_DWORD *)Srb + 6) = v22;
        *((_QWORD *)Srb + 8) = v36;
        *((_DWORD *)Srb + 15) = v37;
        *((_DWORD *)Srb + 5) = 2;
        Srb[18] = IoGetIoPriorityHint(v31);
        *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 3996);
        *((_QWORD *)Srb + 12) = v18;
        *((_QWORD *)Srb + 10) = v29;
        *(_WORD *)((char *)Srb + v30 + 8) = 0;
        *((_BYTE *)Srb + v30 + 10) = 0;
        v23 = v29;
        *(_QWORD *)(v17 + 216) = Srb;
        *(_QWORD *)(v17 + 232) = *((_QWORD *)Srb + 8);
        v24 = (PIRP)*((_QWORD *)Srb + 12);
      }
      else
      {
        *((_DWORD *)Srb + 3) = v22;
        *((_QWORD *)Srb + 3) = v36;
        *((_DWORD *)Srb + 4) = v37;
        *Srb = 88;
        *((_BYTE *)Srb + 2) = 2;
        *((_BYTE *)Srb + 8) = -1;
        *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 3996);
        *(_WORD *)((char *)Srb + 5) = 0;
        *((_BYTE *)Srb + 7) = 0;
        v23 = Irp;
        *((_QWORD *)Srb + 6) = v18;
        *(_QWORD *)(v17 + 216) = Srb;
        *(_QWORD *)(v17 + 232) = *((_QWORD *)Srb + 3);
        v24 = v23;
      }
      *(_QWORD *)(v17 + 224) = v24;
      RaSrbSetMiniportContext(a1, Srb, v17 + 1104);
      if ( v20 )
        *(_BYTE *)(v17 + 65) |= 8u;
      KeInitializeEvent((PRKEVENT)(v17 + 712), NotificationEvent, 0);
      *(_QWORD *)(v17 + 704) = RaidXrbSignalCompletion;
      if ( v20
        && (RaidPauseAdapterQueue(a1),
            KeInitializeEvent(&Event, NotificationEvent, 0),
            StorSetIoGatewayEmptyEvent(*(_QWORD *)(a1 + 832), &Event),
            Timeout.QuadPart = -1200000000LL,
            KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout)) )
      {
        v23->IoStatus.Information = 0LL;
        v19 = -1073741823;
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
              63LL,
              &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
              v18,
              v12,
              *((_QWORD *)v12 + 13),
              *(_QWORD *)&Event.Header.Lock,
              Event.Header.WaitListHead.Flink,
              Event.Header.WaitListHead.Blink);
          }
        }
        else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qqq(
            WPP_GLOBAL_Control->AttachedDevice,
            64LL,
            &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
            v18,
            Srb,
            *((_QWORD *)Srb + 7),
            *(_QWORD *)&Event.Header.Lock,
            Event.Header.WaitListHead.Flink,
            Event.Header.WaitListHead.Blink);
        }
        if ( *(_BYTE *)(a1 + 4242) )
          v25 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v18);
        else
          v25 = RaidAdapterExecuteXrb(a1, v18);
        v19 = v25;
        if ( v25 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v17 + 712), Executive, 0, 0, 0LL);
          LOBYTE(v27) = *((_BYTE *)Srb + 3);
          v19 = RaidSrbStatusToNtStatus(v27);
        }
        if ( v20 )
        {
          v32 = KfRaiseIrql(2u);
          RaidResumeAndRestartAdapterQueues(a1);
          KeLowerIrql(v32);
        }
        if ( (*(_BYTE *)(v17 + 65) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v17 + 796));
          *(_BYTE *)(v17 + 65) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 4832) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
        if ( v19 >= 0 )
        {
          if ( !a5 || (v19 = a5(*(unsigned int *)(v36 + 20)), v19 >= 0) )
          {
            LOBYTE(v26) = *((_BYTE *)Srb + 3);
            v19 = PortSrbTranslateSrbToNtStatus(v26);
          }
        }
      }
    }
  }
  else
  {
    v19 = -1073741801;
    v18 = 0LL;
    if ( !ContiguousIoResources )
      goto LABEL_32;
  }
  RaidXrbDeallocateResources(v18, 0LL);
  StorFreeContiguousIoResources(a1, v17);
LABEL_32:
  if ( Srb )
  {
    if ( *(_BYTE *)(a1 + 442) == 1 )
    {
      if ( !v12 )
        v12 = Srb;
      *((_QWORD *)v12 + 10) = 0LL;
      *((_QWORD *)v12 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return (unsigned int)v19;
}
