/*
 * XREFs of RaidPnPPassToMiniPort @ 0x1C0019810
 * Callers:
 *     RaidAdapterQueryCapabilitiesIrpCompletion @ 0x1C0019720 (RaidAdapterQueryCapabilitiesIrpCompletion.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C00A0A94 (RaUnitQueryCapabilitiesIrp.c)
 *     RaidAdapterReleaseResources @ 0x1C00A6D44 (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C00A711C (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     RaidZeroXrb @ 0x1C0004AA4 (RaidZeroXrb.c)
 *     RaidAllocateSrb @ 0x1C00079E4 (RaidAllocateSrb.c)
 *     StorAllocateContiguousIoResources @ 0x1C000826C (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C000832C (StorFreeContiguousIoResources.c)
 *     RaSrbSetMiniportContext @ 0x1C0008664 (RaSrbSetMiniportContext.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0008784 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0008870 (RaidUnitPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00089A8 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C00089E4 (RaidAdapterPoFxActivateComponent.c)
 *     RaidXrbDeallocateResources @ 0x1C0008A38 (RaidXrbDeallocateResources.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0008BAC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0008C08 (RaidAdapterExecuteXrb.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C001A1F8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0036AF8 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_DDD @ 0x1C003E8E0 (WPP_SF_DDD.c)
 *     WPP_SF_qDD @ 0x1C003E9D4 (WPP_SF_qDD.c)
 *     WPP_SF_qqq @ 0x1C003EBC4 (WPP_SF_qqq.c)
 */

__int64 __fastcall RaidPnPPassToMiniPort(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r14
  unsigned int *v6; // r15
  _BYTE *v7; // rbp
  char *v8; // r13
  __int64 v9; // rdi
  unsigned int *Srb; // rbx
  __int64 ContiguousIoResources; // rax
  unsigned int v12; // esi
  unsigned int v13; // r12d
  unsigned int v14; // ecx
  __int64 v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // rax
  char v18; // r10
  char v19; // cl
  char v20; // al
  __int64 v21; // r8
  int v22; // eax
  unsigned int v23; // ebp
  _QWORD *v24; // r14
  __int64 v26; // [rsp+30h] [rbp-58h]
  union _LARGE_INTEGER Interval; // [rsp+38h] [rbp-50h] BYREF
  char v30; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+20h]

  v31 = a4;
  v30 = a3;
  v5 = *(_QWORD *)(a1 + 64);
  v30 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( *(_DWORD *)v5 == 1431193940 )
    v9 = *(_QWORD *)(v5 + 24);
  else
    v9 = v5;
  if ( *(_DWORD *)v5 != 1431193940 )
    v5 = 0LL;
  if ( !*(_QWORD *)(v9 + 568) || !*(_QWORD *)(v9 + 576) )
    return 0LL;
  Interval.QuadPart = -1000LL;
  Srb = 0LL;
  ContiguousIoResources = 0LL;
  v26 = 0LL;
  v12 = (*(_DWORD *)(v9 + 484) + 7) & 0xFFFFFFF8;
  v13 = 0;
  while ( 1 )
  {
    if ( !Srb )
    {
      Srb = (unsigned int *)RaidAllocateSrb(*(_QWORD *)(v9 + 8), 0x25u, *(_BYTE *)(v9 + 442), 0);
      ContiguousIoResources = v26;
    }
    if ( !ContiguousIoResources )
    {
      ContiguousIoResources = StorAllocateContiguousIoResources(v12 + 1104, 0LL, v9);
      v26 = ContiguousIoResources;
    }
    if ( Srb && ContiguousIoResources )
    {
      v15 = ContiguousIoResources + 48;
      RaidZeroXrb(ContiguousIoResources + 48, 0LL, 0, 0LL);
      *(_QWORD *)(v15 + 168) = Srb;
      *(_QWORD *)(v15 + 176) = *((_QWORD *)Srb + 6);
      if ( *(_BYTE *)(v9 + 442) == 1 )
      {
        v16 = Srb[13];
        v6 = Srb;
        *((_QWORD *)Srb + 8) = v31;
        v7 = (char *)Srb + v16;
        Srb[15] = a5;
        Srb[5] = 37;
        v8 = (char *)Srb + Srb[30];
        *((_QWORD *)Srb + 12) = v15;
        Srb[6] = 256;
        Srb[10] = 10;
        *(_DWORD *)v8 = 98;
        *((_DWORD *)v8 + 1) = 16;
        *((_DWORD *)v8 + 3) = a2;
        v8[8] = 0;
        v17 = *((_QWORD *)Srb + 8);
      }
      else
      {
        *((_QWORD *)Srb + 3) = v31;
        Srb[4] = a5;
        *(_WORD *)Srb = 88;
        Srb[2] = a2;
        v17 = v31;
        *((_QWORD *)Srb + 6) = v15;
        *((_BYTE *)Srb + 2) = 37;
        *((_BYTE *)Srb + 4) = 0;
        Srb[3] = 256;
        Srb[5] = 10;
      }
      *(_QWORD *)(v15 + 184) = v17;
      RaSrbSetMiniportContext(v9, (__int64)Srb, v26 + 1104);
      v19 = *(_BYTE *)(v9 + 442);
      if ( **(_DWORD **)(a1 + 64) == 1431193940 )
      {
        v20 = *(_BYTE *)(v5 + 96);
        if ( v19 == 1 )
        {
          v7[8] = v20;
          v7[9] = *(_BYTE *)(v5 + 97);
          v7[10] = *(_BYTE *)(v5 + 98);
        }
        else
        {
          *((_BYTE *)Srb + 5) = v20;
          *((_BYTE *)Srb + 6) = *(_BYTE *)(v5 + 97);
          *((_BYTE *)Srb + 7) = *(_BYTE *)(v5 + 98);
        }
      }
      else if ( v19 == 1 )
      {
        *((_DWORD *)v8 + 4) = 1;
        *((_WORD *)v7 + 4) = 0;
        v7[10] = v18;
      }
      else
      {
        *(_WORD *)((char *)Srb + 5) = 0;
        Srb[16] = 1;
        *((_BYTE *)Srb + 7) = v18;
      }
      KeInitializeEvent((PRKEVENT)(v15 + 664), NotificationEvent, 0);
      *(_QWORD *)(v15 + 656) = RaidXrbSignalCompletion;
      if ( *(_BYTE *)(v9 + 442) == 1 )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
        {
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            WPP_SF_qqq(
              WPP_GLOBAL_Control->AttachedDevice,
              58LL,
              &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
              v15,
              v6,
              *((_QWORD *)v6 + 13));
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            WPP_SF_DDD(
              WPP_GLOBAL_Control->AttachedDevice,
              59LL,
              &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
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
            &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
            v15,
            Srb,
            *((_QWORD *)Srb + 7));
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_DDD(
            WPP_GLOBAL_Control->AttachedDevice,
            61LL,
            &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
            *((unsigned __int8 *)Srb + 5),
            *((unsigned __int8 *)Srb + 6),
            *((unsigned __int8 *)Srb + 7));
        }
      }
      if ( v5 )
      {
        RaidUnitPoFxActivateComponent(v5, 0, 1LL, &v30);
      }
      else if ( *(_QWORD *)(v9 + 4896) )
      {
        RaidAdapterPoFxActivateComponent(v9, 0LL, 1LL);
      }
      if ( *(_BYTE *)(v9 + 4306) )
        v22 = RaidAdapterRaiseIrqlAndExecuteXrb(v9, v15);
      else
        v22 = RaidAdapterExecuteXrb(v9, (_QWORD *)v15, v21);
      v23 = v22;
      if ( v22 < 0 )
        v23 = 0;
      else
        KeWaitForSingleObject((PVOID)(v15 + 664), Executive, 0, 0, 0LL);
      if ( (*(_BYTE *)(v15 + 17) & 1) != 0 )
      {
        RaidAdapterPoFxIdleComponentFromMiniport(v9, *(unsigned int *)(v15 + 748));
        *(_BYTE *)(v15 + 17) &= ~1u;
      }
      if ( v5 )
      {
        RaidUnitPoFxIdleComponent(v5, 0, 0, &v30);
        if ( (*(_BYTE *)(v15 + 17) & 2) != 0 )
        {
          RaidUnitPoFxIdleComponentFromMiniport(v5, *(unsigned int *)(v15 + 748));
          *(_BYTE *)(v15 + 17) &= ~2u;
        }
      }
      else if ( *(_QWORD *)(v9 + 4896) )
      {
        RaidAdapterPoFxIdleComponent(v9, 0LL, 0LL);
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_qDD(WPP_GLOBAL_Control->AttachedDevice, 62LL, a3, v9, 0, a2);
      }
      v24 = Srb + 12;
      goto LABEL_67;
    }
    v14 = v13++;
    if ( v14 >= 3 )
      break;
    KeDelayExecutionThread(0, 0, &Interval);
    ContiguousIoResources = v26;
  }
  v24 = Srb + 12;
  v23 = -1073741801;
  v15 = 0LL;
  v6 = 0LL;
  if ( !ContiguousIoResources )
    goto LABEL_68;
LABEL_67:
  RaidXrbDeallocateResources(v15, 0, a3);
  StorFreeContiguousIoResources(v9, v26);
LABEL_68:
  if ( Srb )
  {
    if ( *(_BYTE *)(v9 + 442) == 1 )
    {
      if ( !v6 )
        v6 = Srb;
      *((_QWORD *)v6 + 10) = 0LL;
      *((_QWORD *)v6 + 13) = 0LL;
    }
    else
    {
      *v24 = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return v23;
}
