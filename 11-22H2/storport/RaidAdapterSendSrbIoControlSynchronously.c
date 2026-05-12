/*
 * XREFs of RaidAdapterSendSrbIoControlSynchronously @ 0x1C001E658
 * Callers:
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C001DCA4 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C0033C08 (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaGetProtocolCommandEffects @ 0x1C0033EC4 (RaGetProtocolCommandEffects.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C0035D20 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0035E50 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x1C0035F9C (RaidAdapterHwFirmwareGetInfoFromMiniport.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C0036E30 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x1C0038F94 (RaidAdapterSetBootLunIoctl.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C003B210 (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C003B5CC (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaidSetStorageAdapterProtocolSpecificProperty @ 0x1C003D5B0 (RaidSetStorageAdapterProtocolSpecificProperty.c)
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
 *     PortSrbTranslateSrbToNtStatus @ 0x1C001F060 (PortSrbTranslateSrbToNtStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0036AF8 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003D540 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqq @ 0x1C003EBC4 (WPP_SF_qqq.c)
 *     StorSetIoGatewayEmptyEvent @ 0x1C00666B4 (StorSetIoGatewayEmptyEvent.c)
 */

__int64 __fastcall RaidAdapterSendSrbIoControlSynchronously(
        __int64 a1,
        IRP *a2,
        unsigned int *a3,
        ULONG a4,
        __int64 (__fastcall *a5)(_QWORD),
        char a6,
        int a7)
{
  int v7; // ebx
  char v10; // r8
  __int64 v13; // rcx
  unsigned int *v14; // r15
  unsigned int *Srb; // rdi
  __int64 v16; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rsi
  int v22; // r14d
  int v23; // eax
  int v24; // eax
  __int64 v25; // rbx
  IRP *v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  KIRQL v30; // bl
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-50h] BYREF
  __int64 v33; // [rsp+90h] [rbp+8h]

  v7 = *(_DWORD *)(a1 + 484);
  v10 = *(_BYTE *)(a1 + 442);
  v13 = *(_QWORD *)(a1 + 8);
  memset(&Event, 0, sizeof(Event));
  v14 = 0LL;
  Srb = (unsigned int *)RaidAllocateSrb(v13, 2u, v10, 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(((v7 + 7) & 0xFFFFFFF8) + 1104, v16, a1);
  v33 = ContiguousIoResources;
  v20 = ContiguousIoResources;
  if ( Srb && ContiguousIoResources )
  {
    v21 = ContiguousIoResources + 48;
    RaidZeroXrb(ContiguousIoResources + 48, v18, 0, 0LL);
    v22 = RaidBuildMdlForXrb(v21, a3, a4);
    if ( v22 >= 0 )
    {
      v23 = a7;
      if ( !a6 )
      {
        v23 = a7 | 0x102;
        if ( *((_BYTE *)Srb + 2) == 40 )
          *((_WORD *)Srb + 19) = 32;
        else
          *((_BYTE *)Srb + 9) = 32;
      }
      v24 = v23 | 1;
      if ( *(_BYTE *)(a1 + 442) == 1 )
      {
        Srb[8] = -1;
        v25 = Srb[13];
        v14 = Srb;
        Srb[6] = v24;
        *((_QWORD *)Srb + 8) = a3;
        Srb[15] = a4;
        Srb[5] = 2;
        *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
        Srb[10] = *(_DWORD *)(a1 + 4060);
        *((_QWORD *)Srb + 12) = v21;
        *((_QWORD *)Srb + 10) = a2;
        *(_WORD *)((char *)Srb + v25 + 8) = 0;
        *((_BYTE *)Srb + v25 + 10) = 0;
        v20 = v33;
        *(_QWORD *)(v21 + 168) = Srb;
        *(_QWORD *)(v21 + 184) = *((_QWORD *)Srb + 8);
        v26 = (IRP *)*((_QWORD *)Srb + 12);
      }
      else
      {
        Srb[3] = v24;
        *((_QWORD *)Srb + 3) = a3;
        Srb[4] = a4;
        *(_WORD *)Srb = 88;
        *((_BYTE *)Srb + 2) = 2;
        *((_BYTE *)Srb + 8) = -1;
        Srb[5] = *(_DWORD *)(a1 + 4060);
        *((_QWORD *)Srb + 6) = v21;
        *(_WORD *)((char *)Srb + 5) = 0;
        *((_BYTE *)Srb + 7) = 0;
        *(_QWORD *)(v21 + 168) = Srb;
        *(_QWORD *)(v21 + 184) = *((_QWORD *)Srb + 3);
        v26 = a2;
      }
      *(_QWORD *)(v21 + 176) = v26;
      RaSrbSetMiniportContext(a1, (__int64)Srb, v20 + 1104);
      if ( a6 )
        *(_BYTE *)(v21 + 17) |= 8u;
      KeInitializeEvent((PRKEVENT)(v21 + 664), NotificationEvent, 0);
      *(_QWORD *)(v21 + 656) = RaidXrbSignalCompletion;
      if ( a6
        && (RaidPauseAdapterQueue(a1),
            KeInitializeEvent(&Event, NotificationEvent, 0),
            StorSetIoGatewayEmptyEvent(*(_QWORD *)(a1 + 896), &Event),
            Timeout.QuadPart = -1200000000LL,
            KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout)) )
      {
        a2->IoStatus.Information = 0LL;
        v22 = -1073741823;
      }
      else
      {
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
              63LL,
              &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
              v21,
              v14,
              *((_QWORD *)v14 + 13));
          }
        }
        else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qqq(
            WPP_GLOBAL_Control->AttachedDevice,
            64LL,
            &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
            v21,
            Srb,
            *((_QWORD *)Srb + 7));
        }
        if ( *(_BYTE *)(a1 + 4306) )
          v27 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v21);
        else
          v27 = RaidAdapterExecuteXrb(a1, (_QWORD *)v21, v19);
        v22 = v27;
        if ( v27 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v21 + 664), Executive, 0, 0, 0LL);
          v22 = RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
        }
        if ( a6 )
        {
          v30 = KfRaiseIrql(2u);
          RaidResumeAndRestartAdapterQueues(a1);
          KeLowerIrql(v30);
          v20 = v33;
        }
        if ( (*(_BYTE *)(v21 + 17) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v21 + 748));
          *(_BYTE *)(v21 + 17) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 4896) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
        if ( v22 >= 0 )
        {
          if ( !a5 || (v22 = a5(a3[5]), v22 >= 0) )
          {
            LOBYTE(v28) = *((_BYTE *)Srb + 3);
            v22 = PortSrbTranslateSrbToNtStatus(v28);
          }
        }
      }
    }
    goto LABEL_28;
  }
  v22 = -1073741801;
  v21 = 0LL;
  if ( ContiguousIoResources )
  {
LABEL_28:
    RaidXrbDeallocateResources(v21, 0, v19);
    StorFreeContiguousIoResources(a1, v20);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(a1 + 442) == 1 )
    {
      if ( !v14 )
        v14 = Srb;
      *((_QWORD *)v14 + 10) = 0LL;
      *((_QWORD *)v14 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return (unsigned int)v22;
}
