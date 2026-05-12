/*
 * XREFs of RaWmiPassToMiniPort @ 0x1C0089714
 * Callers:
 *     RaWmiIrpRegisterRequest @ 0x1C00895EC (RaWmiIrpRegisterRequest.c)
 *     RaWmiIrpNormalRequest @ 0x1C008FFD0 (RaWmiIrpNormalRequest.c)
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
 *     RaidUnitPoFxActivateComponent @ 0x1C000FA68 (RaidUnitPoFxActivateComponent.c)
 *     RaSrbSetMiniportContext @ 0x1C000FFCC (RaSrbSetMiniportContext.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C00117BC (RaidUnitPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00136DC (RaidAdapterPoFxIdleComponent.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C001592C (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C001DC00 (RaidFreeSrb.c)
 *     RaidBuildMdlAndLockPagesForXrb @ 0x1C0022540 (RaidBuildMdlAndLockPagesForXrb.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00358A0 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C003B960 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_DDD @ 0x1C003C54C (WPP_SF_DDD.c)
 *     WPP_SF_qD @ 0x1C003C5EC (WPP_SF_qD.c)
 *     WPP_SF_qqq @ 0x1C003C830 (WPP_SF_qqq.c)
 */

__int64 __fastcall RaWmiPassToMiniPort(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  char *v5; // rbp
  char *v6; // r13
  __int64 v7; // rdi
  unsigned int v8; // r12d
  ULONG v9; // esi
  __int64 v10; // rdx
  char *Srb; // rbx
  __int64 v12; // r8
  __int64 ContiguousIoResources; // rax
  __int64 v14; // rdx
  int v15; // esi
  __int64 v16; // r13
  __int64 v17; // rcx
  char v18; // r9
  int v19; // r10d
  __int64 v20; // rcx
  char v21; // al
  char v22; // al
  PDEVICE_OBJECT v23; // rcx
  int v24; // eax
  int v25; // eax
  char v27; // al
  _BYTE *v28; // rcx
  char v29; // al
  char v30; // dl
  int v31; // eax
  unsigned __int16 v32; // dx
  int v33; // r8d
  int v34; // r9d
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-68h]
  __int64 v36; // [rsp+28h] [rbp-60h]
  _QWORD *v37; // [rsp+30h] [rbp-58h]
  __int64 v38; // [rsp+38h] [rbp-50h]
  char v42; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0LL;
  v38 = 0LL;
  v5 = 0LL;
  v42 = 0;
  v6 = 0LL;
  if ( *(_DWORD *)v3 == 1 )
    v7 = *(_QWORD *)(v3 + 24);
  else
    v7 = v3;
  v8 = *(_DWORD *)(a3 + 16);
  if ( *(_DWORD *)v3 != 1 )
    v3 = 0LL;
  v37 = 0LL;
  v9 = *(_DWORD *)(a3 + 16);
  if ( a2 == 9 && v8 <= **(_DWORD **)(a3 + 24) )
    v9 = **(_DWORD **)(a3 + 24);
  Srb = (char *)RaidAllocateSrb(*(_QWORD *)(v7 + 8), 0x17u, *(_BYTE *)(v7 + 442), 0);
  if ( !Srb
    || (ContiguousIoResources = StorAllocateContiguousIoResources(
                                  ((*(_DWORD *)(v7 + 484) + 7) & 0xFFFFFFF8) + 1104,
                                  v10,
                                  v7),
        (v4 = ContiguousIoResources) == 0) )
  {
    v15 = -1073741801;
    goto LABEL_33;
  }
  v37 = (_QWORD *)(ContiguousIoResources + 48);
  RaidZeroXrb(ContiguousIoResources + 48, v14, 0, 0LL);
  *(_QWORD *)(v4 + 224) = *((_QWORD *)Srb + 6);
  *(_QWORD *)(v4 + 216) = Srb;
  v15 = RaidBuildMdlAndLockPagesForXrb((__int64)v37, *(void **)(a3 + 24), v9);
  if ( v15 >= 0 )
  {
    if ( *(_BYTE *)(v7 + 442) == 1 )
    {
      v5 = &Srb[*((unsigned int *)Srb + 13)];
      *((_DWORD *)Srb + 5) = 23;
      v16 = *((unsigned int *)Srb + 30);
      *((_QWORD *)Srb + 12) = v37;
      v6 = &Srb[v16];
      *((_QWORD *)Srb + 8) = *(_QWORD *)(a3 + 24);
      *((_DWORD *)Srb + 15) = v8;
      *((_DWORD *)Srb + 6) = 320;
      *((_DWORD *)Srb + 10) = 10;
      v6[8] = a2;
      *(_DWORD *)v6 = 96;
      *((_DWORD *)v6 + 1) = 16;
      *((_QWORD *)v6 + 2) = *(_QWORD *)(a3 + 8);
      v17 = *((_QWORD *)Srb + 8);
      v38 = (__int64)Srb;
    }
    else
    {
      *((_QWORD *)Srb + 6) = v37;
      Srb[2] = 23;
      v17 = *(_QWORD *)(a3 + 24);
      *(_WORD *)Srb = 88;
      Srb[4] = a2;
      *((_QWORD *)Srb + 3) = v17;
      *((_DWORD *)Srb + 4) = v8;
      *((_QWORD *)Srb + 4) = *(_QWORD *)(a3 + 8);
      *((_DWORD *)Srb + 3) = 320;
      *((_DWORD *)Srb + 5) = 10;
    }
    *(_QWORD *)(v4 + 232) = v17;
    RaSrbSetMiniportContext(v7, (__int64)Srb, v4 + 1104);
    v20 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v20 == v19 )
    {
      v21 = *(_BYTE *)(v20 + 96);
      if ( *(_BYTE *)(v7 + 442) == (_BYTE)v19 )
      {
        v5[8] = v21;
        v5[9] = *(_BYTE *)(v20 + 97);
        v22 = *(_BYTE *)(v20 + 98);
LABEL_14:
        v5[10] = v22;
        goto LABEL_15;
      }
      Srb[5] = v21;
      Srb[6] = *(_BYTE *)(v20 + 97);
      v27 = *(_BYTE *)(v20 + 98);
    }
    else
    {
      v28 = *(_BYTE **)(v7 + 144);
      if ( *(_BYTE *)(v7 + 442) == (_BYTE)v19 )
        v6[9] = v19;
      else
        Srb[9] = v19;
      v29 = *(_BYTE *)(v7 + 442);
      if ( v28 == (_BYTE *)(v7 + 144) )
      {
        if ( v29 == (_BYTE)v19 )
        {
          *((_WORD *)v5 + 4) = 0;
          v5[10] = v18;
        }
        else
        {
          *(_WORD *)(Srb + 5) = 0;
          Srb[7] = v18;
        }
LABEL_15:
        KeInitializeEvent((PRKEVENT)(v4 + 712), NotificationEvent, 0);
        RaidXrbSetCompletionRoutine((__int64)v37, (__int64)RaidXrbSignalCompletion);
        if ( Srb[2] == 40 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
            goto LABEL_20;
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            WPP_SF_qqq(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xBu,
              (__int64)&WPP_ad50ae595d343b84980c7edcc7a41d05_Traceguids,
              (__int64)v37,
              v38,
              *(_QWORD *)(v38 + 104));
          v23 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            goto LABEL_20;
          }
          v31 = (unsigned __int8)v5[10];
          v32 = 12;
          v33 = (unsigned __int8)v5[9];
          v34 = (unsigned __int8)v5[8];
        }
        else
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
            goto LABEL_20;
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            WPP_SF_qqq(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xDu,
              (__int64)&WPP_ad50ae595d343b84980c7edcc7a41d05_Traceguids,
              (__int64)v37,
              (__int64)Srb,
              *((_QWORD *)Srb + 7));
          v23 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            goto LABEL_20;
          }
          v31 = (unsigned __int8)Srb[7];
          v32 = 14;
          v33 = (unsigned __int8)Srb[6];
          v34 = (unsigned __int8)Srb[5];
        }
        LODWORD(v36) = v31;
        LODWORD(Timeout) = v33;
        WPP_SF_DDD(
          (__int64)v23->AttachedDevice,
          v32,
          (__int64)&WPP_ad50ae595d343b84980c7edcc7a41d05_Traceguids,
          v34,
          Timeout,
          v36);
LABEL_20:
        if ( v3 )
        {
          RaidUnitPoFxActivateComponent(v3, 0LL, 1LL, &v42);
        }
        else if ( *(_QWORD *)(v7 + 4832) )
        {
          RaidAdapterPoFxActivateComponent(v7);
        }
        if ( *(_BYTE *)(v7 + 4242) )
          v24 = RaidAdapterRaiseIrqlAndExecuteXrb(v7, (__int64)v37);
        else
          v24 = RaidAdapterExecuteXrb(v7, v37);
        v15 = v24;
        if ( v24 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v4 + 712), Executive, 0, 0, 0LL);
          v15 = RaidSrbStatusToNtStatus(Srb[3]);
        }
        if ( v3 )
        {
          if ( (*(_BYTE *)(v4 + 65) & 2) != 0 )
          {
            RaidUnitPoFxIdleComponentFromMiniport(v3, *(_DWORD *)(v4 + 796));
            *(_BYTE *)(v4 + 65) &= ~2u;
          }
          RaidUnitPoFxIdleComponent(v3, 0, 0, &v42);
        }
        else if ( *(_QWORD *)(v7 + 4832) )
        {
          if ( (*(_BYTE *)(v4 + 65) & 1) != 0 )
          {
            RaidAdapterPoFxIdleComponentFromMiniport(v7, *(unsigned int *)(v4 + 796));
            *(_BYTE *)(v4 + 65) &= ~1u;
          }
          RaidAdapterPoFxIdleComponent(v7, 0LL, 0LL);
        }
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          LODWORD(Timeout) = v15;
          WPP_SF_qD(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0xFu,
            (__int64)&WPP_ad50ae595d343b84980c7edcc7a41d05_Traceguids,
            v37,
            Timeout);
        }
        goto LABEL_32;
      }
      v30 = v28[40];
      if ( v29 == (_BYTE)v19 )
      {
        v5[8] = v30;
        v5[9] = v28[41];
        v22 = v28[42];
        goto LABEL_14;
      }
      Srb[5] = v30;
      Srb[6] = v28[41];
      v27 = v28[42];
    }
    Srb[7] = v27;
    goto LABEL_15;
  }
LABEL_32:
  if ( v15 < 0 )
  {
LABEL_33:
    v25 = 0;
    goto LABEL_34;
  }
  if ( Srb[2] == 40 )
    v25 = *(_DWORD *)(v38 + 60);
  else
    v25 = *((_DWORD *)Srb + 4);
LABEL_34:
  *(_DWORD *)(a3 + 16) = v25;
  if ( v4 )
  {
    RaidXrbDeallocateResources((__int64)v37, 0, v12);
    StorFreeContiguousIoResources(v7, v4);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v7 + 442) == 1 )
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
  return (unsigned int)v15;
}
