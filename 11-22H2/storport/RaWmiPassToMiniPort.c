/*
 * XREFs of RaWmiPassToMiniPort @ 0x1C00A2B7C
 * Callers:
 *     RaWmiIrpRegisterRequest @ 0x1C00A2A48 (RaWmiIrpRegisterRequest.c)
 *     RaWmiIrpNormalRequest @ 0x1C00AAB20 (RaWmiIrpNormalRequest.c)
 * Callees:
 *     RaidZeroXrb @ 0x1C0004AA4 (RaidZeroXrb.c)
 *     RaidAllocateSrb @ 0x1C00079E4 (RaidAllocateSrb.c)
 *     StorAllocateContiguousIoResources @ 0x1C000826C (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C000832C (StorFreeContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00083B8 (RaidSrbStatusToNtStatus.c)
 *     RaSrbSetMiniportContext @ 0x1C0008664 (RaSrbSetMiniportContext.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0008784 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0008870 (RaidUnitPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00089A8 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C00089E4 (RaidAdapterPoFxActivateComponent.c)
 *     RaidXrbDeallocateResources @ 0x1C0008A38 (RaidXrbDeallocateResources.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0008BAC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0008C08 (RaidAdapterExecuteXrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C000F794 (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C0019DD4 (RaidFreeSrb.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C001A1F8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidBuildMdlAndLockPagesForXrb @ 0x1C0020068 (RaidBuildMdlAndLockPagesForXrb.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0036AF8 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_DDD @ 0x1C003E8E0 (WPP_SF_DDD.c)
 *     WPP_SF_qD @ 0x1C003E980 (WPP_SF_qD.c)
 *     WPP_SF_qqq @ 0x1C003EBC4 (WPP_SF_qqq.c)
 */

__int64 __fastcall RaWmiPassToMiniPort(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // r15
  char *v4; // r14
  char *v5; // r13
  __int64 v6; // rdi
  unsigned int v7; // r12d
  __int64 v8; // rsi
  ULONG v9; // ebp
  __int64 v10; // rdx
  char *Srb; // rbx
  __int64 v12; // r8
  __int64 ContiguousIoResources; // rax
  __int64 v14; // rdx
  int v15; // ebp
  char *v16; // rbp
  __int64 v17; // r13
  __int64 v18; // rcx
  char v19; // r10
  __int64 v20; // rcx
  char v21; // al
  char v22; // al
  __int64 v23; // r8
  PDEVICE_OBJECT v24; // rcx
  _QWORD *v25; // r14
  int v26; // eax
  int v27; // eax
  char v29; // al
  _BYTE *v30; // rcx
  char v31; // al
  char v32; // dl
  int v33; // eax
  unsigned __int16 v34; // dx
  int v35; // r8d
  int v36; // r9d
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-68h]
  __int64 v38; // [rsp+28h] [rbp-60h]
  char *v39; // [rsp+30h] [rbp-58h]
  __int64 v40; // [rsp+38h] [rbp-50h]
  char v44; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v40 = 0LL;
  v39 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v44 = 0;
  if ( *(_DWORD *)v3 == 1431193940 )
    v6 = *(_QWORD *)(v3 + 24);
  else
    v6 = v3;
  v7 = *(_DWORD *)(a3 + 16);
  if ( *(_DWORD *)v3 != 1431193940 )
    v3 = 0LL;
  v8 = 0LL;
  v9 = *(_DWORD *)(a3 + 16);
  if ( a2 == 9 && v7 <= **(_DWORD **)(a3 + 24) )
    v9 = **(_DWORD **)(a3 + 24);
  Srb = (char *)RaidAllocateSrb(*(_QWORD *)(v6 + 8), 0x17u, *(_BYTE *)(v6 + 442), 0);
  if ( !Srb
    || (ContiguousIoResources = StorAllocateContiguousIoResources(
                                  ((*(_DWORD *)(v6 + 484) + 7) & 0xFFFFFFF8) + 1104,
                                  v10,
                                  v6),
        (v40 = ContiguousIoResources) == 0) )
  {
    v15 = -1073741801;
    goto LABEL_33;
  }
  v8 = ContiguousIoResources + 48;
  RaidZeroXrb(ContiguousIoResources + 48, v14, 0, 0LL);
  *(_QWORD *)(v8 + 176) = *((_QWORD *)Srb + 6);
  *(_QWORD *)(v8 + 168) = Srb;
  v15 = RaidBuildMdlAndLockPagesForXrb(v8, *(void **)(a3 + 24), v9);
  if ( v15 >= 0 )
  {
    if ( *(_BYTE *)(v6 + 442) == 1 )
    {
      v16 = Srb;
      v4 = &Srb[*((unsigned int *)Srb + 13)];
      *((_DWORD *)Srb + 5) = 23;
      v17 = *((unsigned int *)Srb + 30);
      *((_QWORD *)Srb + 12) = v8;
      v5 = &Srb[v17];
      *((_QWORD *)Srb + 8) = *(_QWORD *)(a3 + 24);
      *((_DWORD *)Srb + 15) = v7;
      *((_DWORD *)Srb + 6) = 320;
      *((_DWORD *)Srb + 10) = 10;
      v5[8] = a2;
      *(_DWORD *)v5 = 96;
      *((_DWORD *)v5 + 1) = 16;
      *((_QWORD *)v5 + 2) = *(_QWORD *)(a3 + 8);
      v18 = *((_QWORD *)Srb + 8);
      v39 = Srb;
    }
    else
    {
      *((_QWORD *)Srb + 6) = v8;
      v16 = 0LL;
      Srb[2] = 23;
      v18 = *(_QWORD *)(a3 + 24);
      *(_WORD *)Srb = 88;
      Srb[4] = a2;
      *((_QWORD *)Srb + 3) = v18;
      *((_DWORD *)Srb + 4) = v7;
      *((_QWORD *)Srb + 4) = *(_QWORD *)(a3 + 8);
      *((_DWORD *)Srb + 3) = 320;
      *((_DWORD *)Srb + 5) = 10;
    }
    *(_QWORD *)(v8 + 184) = v18;
    RaSrbSetMiniportContext(v6, (__int64)Srb, v40 + 1104);
    v20 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v20 == 1431193940 )
    {
      v21 = *(_BYTE *)(v20 + 96);
      if ( *(_BYTE *)(v6 + 442) == 1 )
      {
        v4[8] = v21;
        v4[9] = *(_BYTE *)(v20 + 97);
        v22 = *(_BYTE *)(v20 + 98);
LABEL_14:
        v4[10] = v22;
        goto LABEL_15;
      }
      Srb[5] = v21;
      Srb[6] = *(_BYTE *)(v20 + 97);
      v29 = *(_BYTE *)(v20 + 98);
    }
    else
    {
      v30 = *(_BYTE **)(v6 + 152);
      if ( *(_BYTE *)(v6 + 442) == 1 )
        v5[9] = 1;
      else
        Srb[9] = 1;
      v31 = *(_BYTE *)(v6 + 442);
      if ( v30 == (_BYTE *)(v6 + 152) )
      {
        if ( v31 == 1 )
        {
          *((_WORD *)v4 + 4) = 0;
          v4[10] = v19;
        }
        else
        {
          *(_WORD *)(Srb + 5) = 0;
          Srb[7] = v19;
        }
LABEL_15:
        KeInitializeEvent((PRKEVENT)(v8 + 664), NotificationEvent, 0);
        RaidXrbSetCompletionRoutine(v8, (__int64)RaidXrbSignalCompletion);
        if ( Srb[2] == 40 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
            goto LABEL_20;
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            WPP_SF_qqq(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xBu,
              (__int64)&WPP_ad50ae595d343b84980c7edcc7a41d05_Traceguids,
              v8,
              v16,
              *((_QWORD *)v16 + 13));
          v24 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            goto LABEL_20;
          }
          v33 = (unsigned __int8)v4[10];
          v34 = 12;
          v35 = (unsigned __int8)v4[9];
          v36 = (unsigned __int8)v4[8];
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
              v8,
              Srb,
              *((_QWORD *)Srb + 7));
          v24 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            goto LABEL_20;
          }
          v33 = (unsigned __int8)Srb[7];
          v34 = 14;
          v35 = (unsigned __int8)Srb[6];
          v36 = (unsigned __int8)Srb[5];
        }
        LODWORD(v38) = v33;
        LODWORD(Timeout) = v35;
        WPP_SF_DDD(
          (__int64)v24->AttachedDevice,
          v34,
          (__int64)&WPP_ad50ae595d343b84980c7edcc7a41d05_Traceguids,
          v36,
          Timeout,
          v38);
LABEL_20:
        if ( v3 )
        {
          RaidUnitPoFxActivateComponent(v3, 0, 1LL, &v44);
          v25 = (_QWORD *)(v6 + 4896);
        }
        else
        {
          v25 = (_QWORD *)(v6 + 4896);
          if ( *(_QWORD *)(v6 + 4896) )
            RaidAdapterPoFxActivateComponent(v6, 0LL, 1LL);
        }
        if ( *(_BYTE *)(v6 + 4306) )
          v26 = RaidAdapterRaiseIrqlAndExecuteXrb(v6, v8);
        else
          v26 = RaidAdapterExecuteXrb(v6, (_QWORD *)v8, v23);
        v15 = v26;
        if ( v26 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, 0LL);
          v15 = RaidSrbStatusToNtStatus(Srb[3]);
        }
        if ( v3 )
        {
          if ( (*(_BYTE *)(v8 + 17) & 2) != 0 )
          {
            RaidUnitPoFxIdleComponentFromMiniport(v3, *(_DWORD *)(v8 + 748));
            *(_BYTE *)(v8 + 17) &= ~2u;
          }
          RaidUnitPoFxIdleComponent(v3, 0, 0, &v44);
        }
        else if ( *v25 )
        {
          if ( (*(_BYTE *)(v8 + 17) & 1) != 0 )
          {
            RaidAdapterPoFxIdleComponentFromMiniport(v6, *(unsigned int *)(v8 + 748));
            *(_BYTE *)(v8 + 17) &= ~1u;
          }
          RaidAdapterPoFxIdleComponent(v6, 0LL, 0LL);
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
            v8,
            Timeout);
        }
        goto LABEL_32;
      }
      v32 = v30[40];
      if ( v31 == 1 )
      {
        v4[8] = v32;
        v4[9] = v30[41];
        v22 = v30[42];
        goto LABEL_14;
      }
      Srb[5] = v32;
      Srb[6] = v30[41];
      v29 = v30[42];
    }
    Srb[7] = v29;
    goto LABEL_15;
  }
LABEL_32:
  if ( v15 < 0 )
  {
LABEL_33:
    v27 = 0;
    goto LABEL_34;
  }
  if ( Srb[2] == 40 )
    v27 = *((_DWORD *)v39 + 15);
  else
    v27 = *((_DWORD *)Srb + 4);
LABEL_34:
  *(_DWORD *)(a3 + 16) = v27;
  if ( v40 )
  {
    RaidXrbDeallocateResources(v8, 0, v12);
    StorFreeContiguousIoResources(v6, v40);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v6 + 442) == 1 )
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
