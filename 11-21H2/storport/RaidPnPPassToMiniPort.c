/*
 * XREFs of RaidPnPPassToMiniPort @ 0x1C001D6D0
 * Callers:
 *     RaidAdapterQueryCapabilitiesIrpCompletion @ 0x1C001D5E0 (RaidAdapterQueryCapabilitiesIrpCompletion.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0089094 (RaUnitQueryCapabilitiesIrp.c)
 *     RaidAdapterReleaseResources @ 0x1C008C850 (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C008CBD0 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterPoFxActivateComponent @ 0x1C0002B10 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0004004 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0004060 (RaidAdapterExecuteXrb.c)
 *     RaidZeroXrb @ 0x1C0006D50 (RaidZeroXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C000BDD4 (RaidXrbDeallocateResources.c)
 *     RaidAllocateSrb @ 0x1C000F74C (RaidAllocateSrb.c)
 *     StorFreeContiguousIoResources @ 0x1C000F988 (StorFreeContiguousIoResources.c)
 *     StorAllocateContiguousIoResources @ 0x1C000F9B4 (StorAllocateContiguousIoResources.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C000FA68 (RaidUnitPoFxActivateComponent.c)
 *     RaSrbSetMiniportContext @ 0x1C000FFCC (RaSrbSetMiniportContext.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C00117BC (RaidUnitPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00136DC (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00358A0 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C003B960 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_DDD @ 0x1C003C54C (WPP_SF_DDD.c)
 *     WPP_SF_qDD @ 0x1C003C640 (WPP_SF_qDD.c)
 *     WPP_SF_qqq @ 0x1C003C830 (WPP_SF_qqq.c)
 */

__int64 __fastcall RaidPnPPassToMiniPort(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r14
  unsigned int *v6; // r13
  _BYTE *v7; // rbp
  __int64 v8; // rdi
  unsigned int *Srb; // rbx
  __int64 ContiguousIoResources; // rsi
  unsigned int v11; // r12d
  unsigned int v12; // r15d
  unsigned int v13; // ecx
  __int64 v14; // r12
  __int64 v15; // rbp
  char *v16; // r9
  __int64 v17; // rax
  __int64 v18; // r9
  char v19; // r10
  char v20; // cl
  char v21; // al
  _QWORD *v22; // rdx
  int v23; // eax
  unsigned int v24; // ebp
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp-58h] BYREF
  char v29; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+20h]

  v30 = a4;
  v29 = a3;
  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0LL;
  v29 = 0;
  v7 = 0LL;
  if ( *(_DWORD *)v5 == 1 )
    v8 = *(_QWORD *)(v5 + 24);
  else
    v8 = v5;
  if ( *(_DWORD *)v5 != 1 )
    v5 = 0LL;
  if ( !*(_QWORD *)(v8 + 568) || !*(_QWORD *)(v8 + 576) )
    return 0LL;
  Interval.QuadPart = -1000LL;
  Srb = 0LL;
  ContiguousIoResources = 0LL;
  v11 = 0;
  v12 = (*(_DWORD *)(v8 + 484) + 7) & 0xFFFFFFF8;
  while ( 1 )
  {
    if ( !Srb )
      Srb = (unsigned int *)RaidAllocateSrb(*(_QWORD *)(v8 + 8), 0x25u, *(_BYTE *)(v8 + 442), 0);
    if ( !ContiguousIoResources )
      ContiguousIoResources = StorAllocateContiguousIoResources(v12 + 1104, 0LL, v8);
    if ( Srb && ContiguousIoResources )
    {
      v14 = ContiguousIoResources + 48;
      RaidZeroXrb(ContiguousIoResources + 48, 0LL, 0, 0LL);
      *(_QWORD *)(ContiguousIoResources + 216) = Srb;
      *(_QWORD *)(ContiguousIoResources + 224) = *((_QWORD *)Srb + 6);
      if ( *(_BYTE *)(v8 + 442) == 1 )
      {
        v15 = Srb[13];
        v6 = Srb;
        *((_QWORD *)Srb + 8) = v30;
        v7 = (char *)Srb + v15;
        Srb[15] = a5;
        Srb[5] = 37;
        v16 = (char *)Srb + Srb[30];
        *((_QWORD *)Srb + 12) = v14;
        Srb[6] = 256;
        Srb[10] = 10;
        *(_DWORD *)v16 = 98;
        *((_DWORD *)v16 + 1) = 16;
        *((_DWORD *)v16 + 3) = a2;
        v16[8] = 0;
        v17 = *((_QWORD *)Srb + 8);
      }
      else
      {
        *((_QWORD *)Srb + 3) = v30;
        Srb[4] = a5;
        *(_WORD *)Srb = 88;
        Srb[2] = a2;
        v17 = v30;
        *((_QWORD *)Srb + 6) = v14;
        *((_BYTE *)Srb + 2) = 37;
        *((_BYTE *)Srb + 4) = 0;
        Srb[3] = 256;
        Srb[5] = 10;
      }
      *(_QWORD *)(ContiguousIoResources + 232) = v17;
      RaSrbSetMiniportContext(v8, (__int64)Srb, ContiguousIoResources + 1104);
      v20 = *(_BYTE *)(v8 + 442);
      if ( **(_DWORD **)(a1 + 64) == 1 )
      {
        v21 = *(_BYTE *)(v5 + 96);
        if ( v20 == 1 )
        {
          v7[8] = v21;
          v7[9] = *(_BYTE *)(v5 + 97);
          v7[10] = *(_BYTE *)(v5 + 98);
        }
        else
        {
          *((_BYTE *)Srb + 5) = v21;
          *((_BYTE *)Srb + 6) = *(_BYTE *)(v5 + 97);
          *((_BYTE *)Srb + 7) = *(_BYTE *)(v5 + 98);
        }
      }
      else if ( v20 == 1 )
      {
        *(_DWORD *)(v18 + 16) = 1;
        *((_WORD *)v7 + 4) = 0;
        v7[10] = v19;
      }
      else
      {
        *(_WORD *)((char *)Srb + 5) = 0;
        Srb[16] = 1;
        *((_BYTE *)Srb + 7) = v19;
      }
      KeInitializeEvent((PRKEVENT)(ContiguousIoResources + 712), NotificationEvent, 0);
      *(_QWORD *)(ContiguousIoResources + 704) = RaidXrbSignalCompletion;
      if ( *(_BYTE *)(v8 + 442) == 1 )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
        {
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            WPP_SF_qqq(
              WPP_GLOBAL_Control->AttachedDevice,
              58LL,
              &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
              ContiguousIoResources + 48,
              v6,
              *((_QWORD *)v6 + 13));
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            WPP_SF_DDD(
              WPP_GLOBAL_Control->AttachedDevice,
              59LL,
              &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
              (unsigned __int8)v7[8],
              (unsigned __int8)v7[9],
              (unsigned __int8)v7[10]);
          }
        }
      }
      else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
      {
        if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          WPP_SF_qqq(
            WPP_GLOBAL_Control->AttachedDevice,
            60LL,
            &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
            ContiguousIoResources + 48,
            Srb,
            *((_QWORD *)Srb + 7));
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_DDD(
            WPP_GLOBAL_Control->AttachedDevice,
            61LL,
            &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
            *((unsigned __int8 *)Srb + 5),
            *((unsigned __int8 *)Srb + 6),
            *((unsigned __int8 *)Srb + 7));
        }
      }
      if ( v5 )
      {
        RaidUnitPoFxActivateComponent(v5, 0LL, 1LL, &v29);
      }
      else if ( *(_QWORD *)(v8 + 4832) )
      {
        RaidAdapterPoFxActivateComponent(v8);
      }
      v22 = (_QWORD *)(ContiguousIoResources + 48);
      if ( *(_BYTE *)(v8 + 4242) )
        v23 = RaidAdapterRaiseIrqlAndExecuteXrb(v8, (__int64)v22);
      else
        v23 = RaidAdapterExecuteXrb(v8, v22);
      v24 = v23;
      if ( v23 < 0 )
        v24 = 0;
      else
        KeWaitForSingleObject((PVOID)(ContiguousIoResources + 712), Executive, 0, 0, 0LL);
      if ( (*(_BYTE *)(ContiguousIoResources + 65) & 1) != 0 )
      {
        RaidAdapterPoFxIdleComponentFromMiniport(v8, *(unsigned int *)(ContiguousIoResources + 796));
        *(_BYTE *)(ContiguousIoResources + 65) &= ~1u;
      }
      if ( v5 )
      {
        RaidUnitPoFxIdleComponent(v5, 0, 0, &v29);
        if ( (*(_BYTE *)(ContiguousIoResources + 65) & 2) != 0 )
        {
          RaidUnitPoFxIdleComponentFromMiniport(v5, *(unsigned int *)(ContiguousIoResources + 796));
          *(_BYTE *)(ContiguousIoResources + 65) &= ~2u;
        }
      }
      else if ( *(_QWORD *)(v8 + 4832) )
      {
        RaidAdapterPoFxIdleComponent(v8, 0LL, 0LL);
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))WPP_SF_qDD)(
          WPP_GLOBAL_Control->AttachedDevice,
          62LL,
          a3,
          v8,
          0,
          a2,
          (union _LARGE_INTEGER)Interval.QuadPart);
      }
      goto LABEL_66;
    }
    v13 = v11++;
    if ( v13 >= 3 )
      break;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v24 = -1073741801;
  v14 = 0LL;
  v6 = 0LL;
  if ( !ContiguousIoResources )
    goto LABEL_67;
LABEL_66:
  RaidXrbDeallocateResources(v14, 0, a3);
  StorFreeContiguousIoResources(v8, ContiguousIoResources);
LABEL_67:
  if ( Srb )
  {
    if ( *(_BYTE *)(v8 + 442) == 1 )
    {
      if ( !v6 )
        v6 = Srb;
      *((_QWORD *)v6 + 10) = 0LL;
      *((_QWORD *)v6 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return v24;
}
